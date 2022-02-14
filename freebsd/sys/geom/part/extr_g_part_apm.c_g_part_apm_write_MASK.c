
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct g_provider {size_t sectorsize; } ;
struct g_part_table {int gpt_entry; scalar_t__ gpt_created; } ;
struct g_part_entry {size_t gpe_index; int gpe_deleted; } ;
struct TYPE_5__ {size_t ent_pmblkcnt; size_t ent_start; size_t ent_size; int ent_type; int ent_name; } ;
struct TYPE_4__ {size_t ddr_blkcount; int ddr_blksize; int ddr_sig; } ;
struct g_part_apm_table {TYPE_2__ self; TYPE_1__ ddr; scalar_t__ tivo_series1; } ;
struct TYPE_6__ {size_t ent_start; size_t ent_size; int ent_type; int ent_name; } ;
struct g_part_apm_entry {TYPE_3__ ent; } ;
struct g_consumer {struct g_provider* provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct g_part_entry* FUNC_0 (int *) ;
 struct g_part_entry* FUNC_1 (struct g_part_entry*,int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t,int) ;
 int FUNC_7 (struct g_consumer*,int,char*,size_t) ;
 int VAR_6 ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static int
FUNC_9(struct g_part_table *VAR_7, struct g_consumer *VAR_8)
{
 struct g_provider *VAR_9;
 struct g_part_entry *VAR_10;
 struct g_part_apm_entry *VAR_11;
 struct g_part_apm_table *VAR_12;
 char *VAR_13, *VAR_14;
 uint32_t VAR_15;
 int VAR_16;
 size_t VAR_17;

 VAR_9 = VAR_8->provider;
 VAR_12 = (struct g_part_apm_table *)VAR_7;



 if (VAR_12->tivo_series1)
  return (VAR_2);


 if (VAR_7->gpt_created) {
  VAR_13 = FUNC_6(VAR_9->sectorsize, VAR_4 | VAR_5);
  FUNC_3(VAR_13, VAR_12->ddr.ddr_sig);
  FUNC_3(VAR_13 + 2, VAR_12->ddr.ddr_blksize);
  FUNC_4(VAR_13 + 4, VAR_12->ddr.ddr_blkcount);
  VAR_16 = FUNC_7(VAR_8, 0, VAR_13, VAR_9->sectorsize);
  FUNC_5(VAR_13);
  if (VAR_16)
   return (VAR_16);
 }


 VAR_17 = VAR_12->self.ent_pmblkcnt;
 VAR_13 = FUNC_6(VAR_17 * VAR_9->sectorsize, VAR_4 | VAR_5);


 FUNC_3(VAR_13, VAR_0);
 FUNC_4(VAR_13 + 4, VAR_12->self.ent_pmblkcnt);
 FUNC_4(VAR_13 + 8, VAR_12->self.ent_start);
 FUNC_4(VAR_13 + 12, VAR_12->self.ent_size);
 FUNC_2(VAR_12->self.ent_name, VAR_13 + 16, sizeof(VAR_12->self.ent_name));
 FUNC_2(VAR_12->self.ent_type, VAR_13 + 48, sizeof(VAR_12->self.ent_type));

 VAR_10 = FUNC_0(&VAR_7->gpt_entry);
 for (VAR_15 = 1; VAR_15 < VAR_17; VAR_15++) {
  VAR_11 = (VAR_10 != ((void*)0) && VAR_15 == VAR_10->gpe_index)
      ? (struct g_part_apm_entry *)VAR_10 : ((void*)0);
  VAR_14 = VAR_13 + VAR_15 * VAR_9->sectorsize;
  FUNC_3(VAR_14, VAR_0);
  FUNC_4(VAR_14 + 4, VAR_12->self.ent_pmblkcnt);
  if (VAR_11 != ((void*)0) && !VAR_10->gpe_deleted) {
   FUNC_4(VAR_14 + 8, VAR_11->ent.ent_start);
   FUNC_4(VAR_14 + 12, VAR_11->ent.ent_size);
   FUNC_2(VAR_11->ent.ent_name, VAR_14 + 16,
       sizeof(VAR_11->ent.ent_name));
   FUNC_2(VAR_11->ent.ent_type, VAR_14 + 48,
       sizeof(VAR_11->ent.ent_type));
  } else {
   FUNC_8(VAR_14 + 48, VAR_1);
  }
  if (VAR_11 != ((void*)0))
   VAR_10 = FUNC_1(VAR_10, VAR_6);
 }

 for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15 += VAR_3 / VAR_9->sectorsize) {
  VAR_16 = FUNC_7(VAR_8, (1 + VAR_15) * VAR_9->sectorsize,
      VAR_13 + VAR_15 * VAR_9->sectorsize,
      (VAR_17 - VAR_15 > VAR_3 / VAR_9->sectorsize) ? VAR_3:
      (VAR_17 - VAR_15) * VAR_9->sectorsize);
  if (VAR_16) {
   FUNC_5(VAR_13);
   return (VAR_16);
  }
 }
 FUNC_5(VAR_13);
 return (0);
}
