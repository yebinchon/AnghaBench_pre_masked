
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_rr_softc {int * sc_active; struct g_geom* sc_geom; } ;
struct g_geom {int dummy; } ;
struct TYPE_2__ {int wait_miss; int wait_hit; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct g_geom*) ;
 int FUNC_2 (struct g_geom*) ;
 int FUNC_3 (struct g_geom*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct g_rr_softc *VAR_2 = VAR_1;
 struct g_geom *VAR_3 = VAR_2->sc_geom;

 FUNC_2(VAR_3);




 if (VAR_2->sc_active != ((void*)0)) {

  FUNC_0(VAR_2->sc_active);
  VAR_2->sc_active = ((void*)0);
  VAR_0.wait_hit--;
  VAR_0.wait_miss++;
 }
 FUNC_1(VAR_3);
 FUNC_3(VAR_3);
}
