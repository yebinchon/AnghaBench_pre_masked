
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_volume {int dummy; } ;
struct g_raid_tr_object {TYPE_1__* tro_volume; } ;
struct g_raid_tr_concat_object {int trso_starting; } ;
struct TYPE_2__ {scalar_t__ v_raid_level; int v_disks_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct g_raid_tr_object *VAR_5, struct g_raid_volume *VAR_6)
{
 struct g_raid_tr_concat_object *VAR_7;

 VAR_7 = (struct g_raid_tr_concat_object *)VAR_5;
 if (VAR_5->tro_volume->v_raid_level != VAR_3 &&
     VAR_5->tro_volume->v_raid_level != VAR_2 &&
     !(VAR_5->tro_volume->v_disks_count == 1 &&
       VAR_5->tro_volume->v_raid_level != VAR_4))
  return (VAR_0);
 VAR_7->trso_starting = 1;
 return (VAR_1);
}
