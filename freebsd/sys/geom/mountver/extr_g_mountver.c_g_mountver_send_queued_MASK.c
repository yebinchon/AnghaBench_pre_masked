
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mountver_softc {int sc_mtx; int sc_queue; } ;
struct g_geom {struct g_mountver_softc* softc; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*,char*) ;
 struct bio* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bio*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct g_geom *VAR_1)
{
 struct g_mountver_softc *VAR_2;
 struct bio *VAR_3;

 VAR_2 = VAR_1->softc;

 FUNC_4(&VAR_2->sc_mtx);
 while ((VAR_3 = FUNC_1(&VAR_2->sc_queue)) != ((void*)0)) {
  FUNC_2(&VAR_2->sc_queue, VAR_3, VAR_0);
  FUNC_0(VAR_3, "Sending queued request.");
  FUNC_3(VAR_3);
 }
 FUNC_5(&VAR_2->sc_mtx);
}
