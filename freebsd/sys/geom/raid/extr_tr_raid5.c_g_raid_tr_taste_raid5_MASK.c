
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct g_raid_volume {int dummy; } ;
struct g_raid_tr_raid5_object {int trso_starting; } ;
struct g_raid_tr_object {TYPE_1__* tro_volume; } ;
struct TYPE_2__ {scalar_t__ v_raid_level_qualifier; scalar_t__ v_raid_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int
FUNC_0(struct g_raid_tr_object *VAR_15, struct g_raid_volume *VAR_16)
{
 struct g_raid_tr_raid5_object *VAR_17;
 u_int VAR_18;

 VAR_17 = (struct g_raid_tr_raid5_object *)VAR_15;
 VAR_18 = VAR_15->tro_volume->v_raid_level_qualifier;
 if (VAR_15->tro_volume->v_raid_level == VAR_8 &&
     (VAR_18 == VAR_2 ||
      VAR_18 == VAR_3)) {

 } else if ((VAR_15->tro_volume->v_raid_level == VAR_9 ||
      VAR_15->tro_volume->v_raid_level == VAR_10 ||
      VAR_15->tro_volume->v_raid_level == VAR_11 ||
      VAR_15->tro_volume->v_raid_level == VAR_12 ||
      VAR_15->tro_volume->v_raid_level == VAR_13 ||
      VAR_15->tro_volume->v_raid_level == VAR_14) &&
     (VAR_18 == VAR_6 ||
      VAR_18 == VAR_7 ||
      VAR_18 == VAR_4 ||
      VAR_18 == VAR_5)) {

 } else
  return (VAR_0);
 VAR_17->trso_starting = 1;
 return (VAR_1);
}
