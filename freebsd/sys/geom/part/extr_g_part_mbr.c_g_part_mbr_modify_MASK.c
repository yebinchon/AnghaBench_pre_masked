
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_part_table {int dummy; } ;
struct g_part_parms {int gpp_parms; int gpp_type; } ;
struct TYPE_2__ {int dp_typ; } ;
struct g_part_mbr_entry {TYPE_1__ ent; } ;
struct g_part_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct g_part_table *VAR_3,
    struct g_part_entry *VAR_4, struct g_part_parms *VAR_5)
{
 struct g_part_mbr_entry *VAR_6;

 if (VAR_5->gpp_parms & VAR_1)
  return (VAR_0);

 VAR_6 = (struct g_part_mbr_entry *)VAR_4;
 if (VAR_5->gpp_parms & VAR_2)
  return (FUNC_0(VAR_5->gpp_type, &VAR_6->ent.dp_typ));
 return (0);
}
