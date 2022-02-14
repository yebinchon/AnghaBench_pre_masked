
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_tr_raid1_object {scalar_t__ trso_type; int trso_recover_slabs; int trso_fair_io; } ;
struct g_raid_tr_object {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct g_raid_tr_object*) ;

__attribute__((used)) static int
FUNC_1(struct g_raid_tr_object *VAR_3)
{
 struct g_raid_tr_raid1_object *VAR_4;

 VAR_4 = (struct g_raid_tr_raid1_object *)VAR_3;
 VAR_4->trso_fair_io = VAR_2;
 VAR_4->trso_recover_slabs = VAR_1;
 if (VAR_4->trso_type == VAR_0)
  FUNC_0(VAR_3);
 return (0);
}
