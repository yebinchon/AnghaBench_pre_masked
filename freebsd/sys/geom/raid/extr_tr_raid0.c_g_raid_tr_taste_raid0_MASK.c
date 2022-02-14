
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_volume {int dummy; } ;
struct g_raid_tr_raid0_object {int trso_starting; } ;
struct g_raid_tr_object {TYPE_1__* tro_volume; } ;
struct TYPE_2__ {scalar_t__ v_raid_level; scalar_t__ v_raid_level_qualifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct g_raid_tr_object *VAR_4, struct g_raid_volume *VAR_5)
{
 struct g_raid_tr_raid0_object *VAR_6;

 VAR_6 = (struct g_raid_tr_raid0_object *)VAR_4;
 if (VAR_4->tro_volume->v_raid_level != VAR_3 ||
     VAR_4->tro_volume->v_raid_level_qualifier != VAR_2)
  return (VAR_0);
 VAR_6->trso_starting = 1;
 return (VAR_1);
}
