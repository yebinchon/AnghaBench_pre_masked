
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_part_table {int dummy; } ;
struct g_part_entry {int dummy; } ;
struct TYPE_2__ {int ent_type; } ;
struct g_part_apm_entry {TYPE_1__ ent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct g_part_table *VAR_1, struct g_part_entry *VAR_2)
{
 struct g_part_apm_entry *VAR_3;

 VAR_3 = (struct g_part_apm_entry *)VAR_2;
 return ((!FUNC_0(VAR_3->ent.ent_type, VAR_0))
     ? 1 : 0);
}
