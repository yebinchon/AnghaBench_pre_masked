
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_part_table {int dummy; } ;
struct g_part_parms {int gpp_parms; int gpp_type; } ;
struct g_part_entry {int dummy; } ;
struct g_part_bsd64_entry {int stor_uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct g_part_bsd64_entry*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(struct g_part_table *VAR_2, struct g_part_entry *VAR_3,
    struct g_part_parms *VAR_4)
{
 struct g_part_bsd64_entry *VAR_5;

 if (VAR_4->gpp_parms & VAR_1)
  return (VAR_0);

 VAR_5 = (struct g_part_bsd64_entry *)VAR_3;
 if (FUNC_0(VAR_4->gpp_type, VAR_5) != 0)
  return (VAR_0);
 FUNC_1(&VAR_5->stor_uuid, 1);
 return (0);
}
