
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_vfs_softc {int sc_orphaned; scalar_t__ sc_active; int sc_mtx; } ;
struct g_geom {struct g_vfs_softc* softc; int name; } ;
struct g_consumer {struct g_geom* geom; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,struct g_consumer*,int ) ;
 int FUNC_2 (struct g_consumer*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct g_consumer *VAR_1)
{
 struct g_geom *VAR_2;
 struct g_vfs_softc *VAR_3;
 int VAR_4;

 FUNC_0();

 VAR_2 = VAR_1->geom;
 FUNC_1(VAR_0, "g_vfs_orphan(%p(%s))", VAR_1, VAR_2->name);
 VAR_3 = VAR_2->softc;
 if (VAR_3 == ((void*)0))
  return;
 FUNC_3(&VAR_3->sc_mtx);
 VAR_3->sc_orphaned = 1;
 VAR_4 = (VAR_3->sc_active == 0);
 FUNC_4(&VAR_3->sc_mtx);
 if (VAR_4)
  FUNC_2(VAR_1, 0);




}
