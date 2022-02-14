
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_part_table {int dummy; } ;
struct g_part_parms {int gpp_parms; int gpp_label; int gpp_type; } ;
struct g_part_entry {int dummy; } ;
struct TYPE_2__ {int ent_name; int ent_type; } ;
struct g_part_apm_entry {TYPE_1__ ent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct g_part_table *VAR_3,
    struct g_part_entry *VAR_4, struct g_part_parms *VAR_5)
{
 struct g_part_apm_entry *VAR_6;
 int VAR_7;

 VAR_6 = (struct g_part_apm_entry *)VAR_4;
 if (VAR_5->gpp_parms & VAR_1) {
  if (FUNC_1(VAR_5->gpp_label) > sizeof(VAR_6->ent.ent_name))
   return (VAR_0);
 }
 if (VAR_5->gpp_parms & VAR_2) {
  VAR_7 = FUNC_0(VAR_5->gpp_type, VAR_6->ent.ent_type,
      sizeof(VAR_6->ent.ent_type));
  if (VAR_7)
   return (VAR_7);
 }
 if (VAR_5->gpp_parms & VAR_1) {
  FUNC_2(VAR_6->ent.ent_name, VAR_5->gpp_label,
      sizeof(VAR_6->ent.ent_name));
 }
 return (0);
}
