
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {TYPE_2__* part; } ;
struct g_part_vtoc8_table {TYPE_1__ vtoc; } ;
struct g_part_table {int dummy; } ;
struct g_part_parms {int gpp_parms; int gpp_type; } ;
struct g_part_entry {int gpe_index; } ;
struct TYPE_4__ {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct g_part_table *VAR_3,
    struct g_part_entry *VAR_4, struct g_part_parms *VAR_5)
{
 struct g_part_vtoc8_table *VAR_6;
 int VAR_7;
 uint16_t VAR_8;

 if (VAR_5->gpp_parms & VAR_1)
  return (VAR_0);

 VAR_6 = (struct g_part_vtoc8_table *)VAR_3;
 if (VAR_5->gpp_parms & VAR_2) {
  VAR_7 = FUNC_1(VAR_5->gpp_type, &VAR_8);
  if (VAR_7)
   return(VAR_7);

  FUNC_0(&VAR_6->vtoc.part[VAR_4->gpe_index - 1].tag, VAR_8);
 }
 return (0);
}
