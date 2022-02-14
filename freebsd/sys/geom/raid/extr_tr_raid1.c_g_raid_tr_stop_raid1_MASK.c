
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int dummy; } ;
struct g_raid_tr_raid1_object {int trso_stopping; scalar_t__ trso_starting; } ;
struct g_raid_tr_object {struct g_raid_volume* tro_volume; } ;


 int FUNC_0 (struct g_raid_volume*,int *) ;

__attribute__((used)) static int
FUNC_1(struct g_raid_tr_object *VAR_0)
{
 struct g_raid_tr_raid1_object *VAR_1;
 struct g_raid_volume *VAR_2;

 VAR_1 = (struct g_raid_tr_raid1_object *)VAR_0;
 VAR_2 = VAR_0->tro_volume;
 VAR_1->trso_starting = 0;
 VAR_1->trso_stopping = 1;
 FUNC_0(VAR_2, ((void*)0));
 return (0);
}
