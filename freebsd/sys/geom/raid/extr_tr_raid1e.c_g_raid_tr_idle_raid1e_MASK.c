
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int v_disks_count; int v_strip_size; } ;
struct g_raid_tr_raid1e_object {scalar_t__ trso_type; int trso_recover_slabs; int trso_fair_io; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct g_raid_tr_object*) ;

__attribute__((used)) static int
FUNC_1(struct g_raid_tr_object *VAR_5)
{
 struct g_raid_tr_raid1e_object *VAR_6;
 struct g_raid_volume *VAR_7;

 VAR_7 = VAR_5->tro_volume;
 VAR_6 = (struct g_raid_tr_raid1e_object *)VAR_5;
 VAR_6->trso_fair_io = VAR_3;
 VAR_6->trso_recover_slabs = VAR_2;

 if ((VAR_7->v_disks_count % VAR_0) != 0 &&
     VAR_7->v_strip_size < VAR_4) {
  VAR_6->trso_recover_slabs *= VAR_4;
  VAR_6->trso_recover_slabs /= VAR_7->v_strip_size;
 }
 if (VAR_6->trso_type == VAR_1)
  FUNC_0(VAR_5);
 return (0);
}
