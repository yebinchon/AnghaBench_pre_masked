
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_volume {int v_dirty; int v_name; struct g_raid_softc* v_softc; } ;
struct g_raid_softc {int sc_lock; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct g_raid_softc*,struct g_raid_volume*,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct g_raid_volume *VAR_1)
{
 struct g_raid_softc *VAR_2;

 VAR_2 = VAR_1->v_softc;
 FUNC_2();
 FUNC_3(&VAR_2->sc_lock, VAR_0);



 VAR_1->v_dirty = 1;
 FUNC_0(1, VAR_2, "Volume %s marked as dirty.",
     VAR_1->v_name);
 FUNC_1(VAR_2, VAR_1, ((void*)0), ((void*)0));
}
