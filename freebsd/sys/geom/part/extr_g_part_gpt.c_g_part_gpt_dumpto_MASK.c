
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_part_table {int dummy; } ;
struct TYPE_2__ {int ent_type; } ;
struct g_part_gpt_entry {TYPE_1__ ent; } ;
struct g_part_entry {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct g_part_table *VAR_3, struct g_part_entry *VAR_4)
{
 struct g_part_gpt_entry *VAR_5;

 VAR_5 = (struct g_part_gpt_entry *)VAR_4;
 return ((FUNC_0(&VAR_5->ent.ent_type, &VAR_1) ||
     FUNC_0(&VAR_5->ent.ent_type, &VAR_2) ||
     FUNC_0(&VAR_5->ent.ent_type, &VAR_0)) ? 1 : 0);
}
