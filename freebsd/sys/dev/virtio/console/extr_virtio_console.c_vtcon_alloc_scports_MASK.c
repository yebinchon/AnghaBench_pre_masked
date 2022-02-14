
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc_port {struct vtcon_softc* vcsp_sc; } ;
struct vtcon_softc {int vtcon_max_ports; struct vtcon_softc_port* vtcon_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vtcon_softc_port* FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct vtcon_softc *VAR_4)
{
 struct vtcon_softc_port *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = VAR_4->vtcon_max_ports;

 VAR_4->vtcon_ports = FUNC_0(sizeof(struct vtcon_softc_port) * VAR_6,
     VAR_1, VAR_2 | VAR_3);
 if (VAR_4->vtcon_ports == ((void*)0))
  return (VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5 = &VAR_4->vtcon_ports[VAR_7];
  VAR_5->vcsp_sc = VAR_4;
 }

 return (0);
}
