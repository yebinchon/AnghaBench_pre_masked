
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int v_state; int v_name; int v_softc; } ;


 int FUNC_0 (int ,int ,char*,int ,int ,int ) ;
 int FUNC_1 (int) ;

void
FUNC_2(struct g_raid_volume *VAR_0, int VAR_1)
{

 FUNC_0(0, VAR_0->v_softc,
     "Volume %s state changed from %s to %s.",
     VAR_0->v_name,
     FUNC_1(VAR_0->v_state),
     FUNC_1(VAR_1));
 VAR_0->v_state = VAR_1;
}
