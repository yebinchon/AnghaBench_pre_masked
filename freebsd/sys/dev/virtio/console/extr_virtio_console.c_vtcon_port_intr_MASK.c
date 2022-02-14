
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc_port {struct vtcon_port* vcsp_port; struct vtcon_softc* vcsp_sc; } ;
struct vtcon_softc {int dummy; } ;
struct vtcon_port {int vtcport_flags; } ;


 int FUNC_0 (struct vtcon_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct vtcon_port*) ;
 int FUNC_2 (struct vtcon_port*) ;
 int FUNC_3 (struct vtcon_softc*) ;
 int FUNC_4 (struct vtcon_port*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct vtcon_softc_port *VAR_2;
 struct vtcon_softc *VAR_3;
 struct vtcon_port *VAR_4;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2->vcsp_sc;

 FUNC_0(VAR_3);
 VAR_4 = VAR_2->vcsp_port;
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_3);
  return;
 }
 FUNC_1(VAR_4);
 FUNC_3(VAR_3);
 if ((VAR_4->vtcport_flags & VAR_0) == 0)
  FUNC_4(VAR_4);
 FUNC_2(VAR_4);
}
