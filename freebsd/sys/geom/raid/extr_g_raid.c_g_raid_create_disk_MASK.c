
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_softc {int sc_disks; } ;
struct g_raid_disk {int d_subdisks; int d_state; struct g_raid_softc* d_softc; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct g_raid_disk*,int ) ;
 int VAR_4 ;
 struct g_raid_disk* FUNC_3 (int,int ,int) ;

struct g_raid_disk *
FUNC_4(struct g_raid_softc *VAR_5)
{
 struct g_raid_disk *VAR_6;

 FUNC_0(1, VAR_5, "Creating disk.");
 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1, VAR_2 | VAR_3);
 VAR_6->d_softc = VAR_5;
 VAR_6->d_state = VAR_0;
 FUNC_1(&VAR_6->d_subdisks);
 FUNC_2(&VAR_5->sc_disks, VAR_6, VAR_4);
 return (VAR_6);
}
