
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_geom {struct g_gate_softc* softc; } ;
struct g_gate_softc {struct g_consumer* sc_readcons; } ;
struct g_consumer {TYPE_1__* provider; struct g_geom* geom; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct g_consumer*,int,int ,int ) ;
 int FUNC_3 (struct g_consumer*) ;
 int FUNC_4 (struct g_consumer*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(struct g_consumer *VAR_0)
{
 struct g_gate_softc *VAR_1;
 struct g_geom *VAR_2;

 FUNC_5();
 VAR_2 = VAR_0->geom;
 VAR_1 = VAR_2->softc;
 if (VAR_1 == ((void*)0))
  return;
 FUNC_1(VAR_0 == VAR_1->sc_readcons, ("cp=%p sc_readcons=%p", VAR_0,
     VAR_1->sc_readcons));
 VAR_1->sc_readcons = ((void*)0);
 FUNC_0(1, "Destroying read consumer on provider %s orphan.",
     VAR_0->provider->name);
 (void)FUNC_2(VAR_0, -1, 0, 0);
 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
}
