
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_part_table {int dummy; } ;
struct g_part_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ p_fstype; } ;
struct g_part_bsd_entry {TYPE_1__ part; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct g_part_table *VAR_2, struct g_part_entry *VAR_3)
{
 struct g_part_bsd_entry *VAR_4;


 VAR_4 = (struct g_part_bsd_entry *)VAR_3;
 return ((VAR_4->part.p_fstype == VAR_1 ||
     VAR_4->part.p_fstype == VAR_0) ? 1 : 0);
}
