
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_provider {TYPE_1__* geom; } ;
struct g_gate_softc {int sc_flags; } ;
struct TYPE_2__ {struct g_gate_softc* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct g_provider *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct g_gate_softc *VAR_9;

 if (VAR_6 <= 0 && VAR_7 <= 0 && VAR_8 <= 0)
  return (0);
 VAR_9 = VAR_5->geom->softc;
 if (VAR_9 == ((void*)0) || (VAR_9->sc_flags & VAR_2) != 0)
  return (VAR_0);





 if ((VAR_9->sc_flags & VAR_4) != 0 && VAR_6 > 0)
  return (VAR_1);
 return (0);
}
