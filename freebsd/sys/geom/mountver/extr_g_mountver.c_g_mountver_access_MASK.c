
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int name; struct g_geom* geom; } ;
struct g_mountver_softc {int sc_access_r; int sc_access_w; int sc_access_e; scalar_t__ sc_orphaned; } ;
struct g_geom {struct g_mountver_softc* softc; int consumer; } ;
struct g_consumer {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 struct g_consumer* FUNC_1 (int *) ;
 int FUNC_2 (struct g_consumer*,int,int,int) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct g_provider *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct g_mountver_softc *VAR_4;
 struct g_geom *VAR_5;
 struct g_consumer *VAR_6;

 FUNC_3();

 VAR_5 = VAR_0->geom;
 VAR_6 = FUNC_1(&VAR_5->consumer);
 VAR_4 = VAR_5->softc;
 if (VAR_4 == ((void*)0) && VAR_1 <= 0 && VAR_2 <= 0 && VAR_3 <= 0)
  return (0);
 FUNC_0(VAR_4 != ((void*)0), ("Trying to access withered provider \"%s\".", VAR_0->name));

 VAR_4->sc_access_r += VAR_1;
 VAR_4->sc_access_w += VAR_2;
 VAR_4->sc_access_e += VAR_3;

 if (VAR_4->sc_orphaned)
  return (0);

 return (FUNC_2(VAR_6, VAR_1, VAR_2, VAR_3));
}
