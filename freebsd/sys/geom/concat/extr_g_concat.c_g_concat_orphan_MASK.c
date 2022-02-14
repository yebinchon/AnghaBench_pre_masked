
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_geom {struct g_concat_softc* softc; } ;
struct g_consumer {struct g_concat_disk* private; struct g_geom* geom; } ;
struct g_concat_softc {int dummy; } ;
struct g_concat_disk {int dummy; } ;


 int FUNC_0 (struct g_concat_disk*) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct g_consumer *VAR_0)
{
 struct g_concat_softc *VAR_1;
 struct g_concat_disk *VAR_2;
 struct g_geom *VAR_3;

 FUNC_1();
 VAR_3 = VAR_0->geom;
 VAR_1 = VAR_3->softc;
 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = VAR_0->private;
 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_2);
}
