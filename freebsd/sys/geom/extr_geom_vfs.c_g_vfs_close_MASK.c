
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_vfs_softc {int sc_orphaned; int sc_mtx; TYPE_1__* sc_bo; } ;
struct g_geom {struct g_vfs_softc* softc; } ;
struct g_consumer {int * provider; int private; struct g_geom* geom; } ;
struct TYPE_2__ {int bo_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (struct g_vfs_softc*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct g_geom*,int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct g_consumer *VAR_2)
{
 struct g_geom *VAR_3;
 struct g_vfs_softc *VAR_4;

 FUNC_2();

 VAR_3 = VAR_2->geom;
 VAR_4 = VAR_3->softc;
 FUNC_0(VAR_4->sc_bo, VAR_1, 0, 0);
 VAR_4->sc_bo->bo_private = VAR_2->private;
 VAR_3->softc = ((void*)0);
 FUNC_4(&VAR_4->sc_mtx);
 if (!VAR_4->sc_orphaned || VAR_2->provider == ((void*)0))
  FUNC_3(VAR_3, VAR_0);
 FUNC_1(VAR_4);
}
