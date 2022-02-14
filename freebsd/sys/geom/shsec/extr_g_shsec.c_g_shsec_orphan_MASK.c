
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_shsec_softc {int dummy; } ;
struct g_geom {struct g_shsec_softc* softc; } ;
struct g_consumer {struct g_geom* geom; } ;


 int FUNC_0 (struct g_shsec_softc*,int) ;
 scalar_t__ FUNC_1 (struct g_shsec_softc*) ;
 int FUNC_2 (struct g_consumer*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct g_consumer *VAR_0)
{
 struct g_shsec_softc *VAR_1;
 struct g_geom *VAR_2;

 FUNC_3();
 VAR_2 = VAR_0->geom;
 VAR_1 = VAR_2->softc;
 if (VAR_1 == ((void*)0))
  return;

 FUNC_2(VAR_0);

 if (FUNC_1(VAR_1) == 0)
  FUNC_0(VAR_1, 1);
}
