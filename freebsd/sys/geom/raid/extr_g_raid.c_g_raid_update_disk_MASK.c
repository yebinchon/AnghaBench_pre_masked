
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_raid_softc {scalar_t__ sc_md; int sc_lock; } ;
struct g_raid_disk {struct g_raid_softc* d_softc; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,int ,int ) ;
 int FUNC_1 (scalar_t__,struct g_raid_disk*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct g_raid_disk*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct g_raid_disk *VAR_1, u_int VAR_2)
{
 struct g_raid_softc *VAR_3;

 VAR_3 = VAR_1->d_softc;
 FUNC_4(&VAR_3->sc_lock, VAR_0);

 FUNC_0(2, VAR_3, "Event %s for disk %s.",
     FUNC_2(VAR_2),
     FUNC_3(VAR_1));

 if (VAR_3->sc_md)
  FUNC_1(VAR_3->sc_md, VAR_1, VAR_2);
 return (0);
}
