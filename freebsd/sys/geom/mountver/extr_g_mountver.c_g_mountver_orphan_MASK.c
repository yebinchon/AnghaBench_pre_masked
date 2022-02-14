
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_mountver_softc {int sc_orphaned; int sc_provider_name; } ;
struct g_consumer {int ace; int acw; int acr; TYPE_1__* geom; } ;
struct TYPE_2__ {struct g_mountver_softc* softc; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct g_consumer*,int ,int ,int ) ;
 int FUNC_2 (struct g_consumer*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct g_consumer *VAR_0)
{
 struct g_mountver_softc *VAR_1;

 FUNC_3();

 VAR_1 = VAR_0->geom->softc;
 VAR_1->sc_orphaned = 1;
 if (VAR_0->acr > 0 || VAR_0->acw > 0 || VAR_0->ace > 0)
  FUNC_1(VAR_0, -VAR_0->acr, -VAR_0->acw, -VAR_0->ace);
 FUNC_2(VAR_0);
 FUNC_0(0, "%s is offline.  Mount verification in progress.", VAR_1->sc_provider_name);
}
