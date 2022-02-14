
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {scalar_t__ v_raid_level; int v_disks_count; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct g_raid_volume *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2 >= 0 && VAR_1->v_raid_level == VAR_0) {
  VAR_4 = VAR_1->v_disks_count / 2;
  VAR_3 = (VAR_2 / VAR_4) +
      (VAR_2 % VAR_4) * VAR_4;
 } else
  VAR_3 = VAR_2;
 return (VAR_3);
}
