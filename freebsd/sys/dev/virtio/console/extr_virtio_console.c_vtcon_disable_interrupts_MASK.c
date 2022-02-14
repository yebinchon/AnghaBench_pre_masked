
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc_port {struct vtcon_port* vcsp_port; } ;
struct vtcon_softc {int vtcon_flags; int vtcon_max_ports; struct vtcon_softc_port* vtcon_ports; int vtcon_ctrl_rxvq; } ;
struct vtcon_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtcon_softc*) ;
 int FUNC_1 (struct vtcon_port*) ;
 int FUNC_2 (struct vtcon_port*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vtcon_port*) ;

__attribute__((used)) static void
FUNC_5(struct vtcon_softc *VAR_1)
{
 struct vtcon_softc_port *VAR_2;
 struct vtcon_port *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1);

 if (VAR_1->vtcon_flags & VAR_0)
  FUNC_3(VAR_1->vtcon_ctrl_rxvq);

 for (VAR_4 = 0; VAR_4 < VAR_1->vtcon_max_ports; VAR_4++) {
  VAR_2 = &VAR_1->vtcon_ports[VAR_4];

  VAR_3 = VAR_2->vcsp_port;
  if (VAR_3 == ((void*)0))
   continue;

  FUNC_1(VAR_3);
  FUNC_4(VAR_3);
  FUNC_2(VAR_3);
 }
}
