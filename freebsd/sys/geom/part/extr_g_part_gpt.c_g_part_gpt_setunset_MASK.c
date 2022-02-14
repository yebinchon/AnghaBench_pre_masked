
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct g_provider {int mediasize; int sectorsize; } ;
struct g_part_table {TYPE_1__* gpt_gp; } ;
struct g_part_gpt_table {int* mbr; scalar_t__ bootcamp; } ;
struct TYPE_5__ {int ent_attr; } ;
struct g_part_gpt_entry {TYPE_2__ ent; } ;
struct g_part_entry {int gpe_index; int gpe_modified; int gpe_created; } ;
struct TYPE_6__ {struct g_provider* provider; } ;
struct TYPE_4__ {int consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int,int,int,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(struct g_part_table *VAR_10,
    struct g_part_entry *VAR_11, const char *VAR_12, unsigned int VAR_13)
{
 struct g_part_gpt_entry *VAR_14;
 struct g_part_gpt_table *VAR_15;
 struct g_provider *VAR_16;
 uint8_t *VAR_17;
 uint64_t VAR_18;
 int VAR_19;

 VAR_15 = (struct g_part_gpt_table *)VAR_10;
 VAR_14 = (struct g_part_gpt_entry *)VAR_11;

 if (FUNC_4(VAR_12, "active") == 0) {
  if (VAR_15->bootcamp) {

   if (VAR_14 == ((void*)0))
    return (VAR_4);
   if (VAR_11->gpe_index > VAR_8)
    return (VAR_2);
   for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {
    VAR_17 = &VAR_15->mbr[VAR_0 + VAR_19 * VAR_1];
    VAR_17[0] = (VAR_19 == VAR_11->gpe_index - 1)
        ? ((VAR_13) ? 0x80 : 0) : 0;
   }
  } else {

   if (VAR_14 != ((void*)0))
    return (VAR_4);
   for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {
    VAR_17 = &VAR_15->mbr[VAR_0 + VAR_19 * VAR_1];
    VAR_17[0] = (VAR_17[4] == 0xee) ? ((VAR_13) ? 0x80 : 0) : 0;
   }
  }
  return (0);
 } else if (FUNC_4(VAR_12, "lenovofix") == 0) {






  if (VAR_14 != ((void*)0))
   return (VAR_4);

  VAR_16 = FUNC_0(&VAR_10->gpt_gp->consumer)->provider;
  FUNC_2(VAR_15->mbr + VAR_0, VAR_1 * VAR_8);
  FUNC_3(VAR_15->mbr, ((VAR_13) ? 1 : 0), 0xee, 1,
      FUNC_1(VAR_16->mediasize / VAR_16->sectorsize - 1, VAR_9));
  return (0);
 }

 if (VAR_14 == ((void*)0))
  return (VAR_3);

 VAR_18 = 0;
 if (FUNC_4(VAR_12, "bootme") == 0) {
  VAR_18 |= VAR_6;
 } else if (FUNC_4(VAR_12, "bootonce") == 0) {
  VAR_18 |= VAR_7;
  if (VAR_13)
   VAR_18 |= VAR_6;
 } else if (FUNC_4(VAR_12, "bootfailed") == 0) {




  VAR_18 |= VAR_5;
 }
 if (VAR_18 == 0)
  return (VAR_2);

 if (VAR_13)
  VAR_18 = VAR_14->ent.ent_attr | VAR_18;
 else
  VAR_18 = VAR_14->ent.ent_attr & ~VAR_18;
 if (VAR_18 != VAR_14->ent.ent_attr) {
  VAR_14->ent.ent_attr = VAR_18;
  if (!VAR_11->gpe_created)
   VAR_11->gpe_modified = 1;
 }
 return (0);
}
