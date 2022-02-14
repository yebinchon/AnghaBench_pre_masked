
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_part_table {int dummy; } ;
struct g_part_entry {int dummy; } ;
struct g_part_bsd64_entry {scalar_t__ fstype; int type_uuid; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct g_part_table *VAR_3, struct g_part_entry *VAR_4)
{
 struct g_part_bsd64_entry *VAR_5;


 VAR_5 = (struct g_part_bsd64_entry *)VAR_4;
 if (VAR_5->fstype == VAR_0 ||
     FUNC_0(&VAR_5->type_uuid, &VAR_1) ||
     FUNC_0(&VAR_5->type_uuid, &VAR_2))
  return (1);
 return (0);
}
