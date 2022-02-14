
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {struct g_mirror_softc* private; } ;
struct g_mirror_softc {scalar_t__ sc_refcnt; } ;


 int FUNC_0 (struct g_mirror_softc*) ;

__attribute__((used)) static void
FUNC_1(struct g_provider *VAR_0)
{
 struct g_mirror_softc *VAR_1 = VAR_0->private;

 if ((--VAR_1->sc_refcnt) == 0)
  FUNC_0(VAR_1);
}
