
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_disk {int d_state; int d_softc; } ;


 int FUNC_0 (int ,int ,char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct g_raid_disk*) ;
 int FUNC_3 (struct g_raid_disk*) ;

void
FUNC_4(struct g_raid_disk *VAR_0, int VAR_1)
{

 FUNC_0(0, VAR_0->d_softc, "Disk %s state changed from %s to %s.",
     FUNC_2(VAR_0),
     FUNC_1(VAR_0->d_state),
     FUNC_1(VAR_1));
 VAR_0->d_state = VAR_1;
 FUNC_3(VAR_0);
}
