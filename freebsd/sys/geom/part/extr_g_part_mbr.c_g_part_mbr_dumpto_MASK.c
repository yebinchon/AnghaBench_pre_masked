
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_part_table {int dummy; } ;
struct TYPE_2__ {scalar_t__ dp_typ; } ;
struct g_part_mbr_entry {TYPE_1__ ent; } ;
struct g_part_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct g_part_table *VAR_2, struct g_part_entry *VAR_3)
{
 struct g_part_mbr_entry *VAR_4;


 VAR_4 = (struct g_part_mbr_entry *)VAR_3;
 return ((VAR_4->ent.dp_typ == VAR_0 ||
     VAR_4->ent.dp_typ == VAR_1) ? 1 : 0);
}
