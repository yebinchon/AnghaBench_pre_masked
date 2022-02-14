
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vtcon_softc_port {struct vtcon_port* vcsp_port; } ;
struct vtcon_softc {struct vtcon_softc_port* vtcon_ports; } ;
struct vtcon_port {int dummy; } ;


 int FUNC_0 (struct vtcon_softc*) ;
 int FUNC_1 (struct vtcon_port*) ;
 int FUNC_2 (struct vtcon_port*) ;
 int FUNC_3 (struct vtcon_softc*) ;
 int FUNC_4 (struct vtcon_softc*,int *,int *) ;
 int FUNC_5 (struct vtcon_port*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct vtcon_softc *VAR_0)
{
 struct vtcon_port *VAR_1;
 struct vtcon_softc_port *VAR_2;
 uint16_t VAR_3, VAR_4;

 FUNC_4(VAR_0, &VAR_3, &VAR_4);





 VAR_2 = &VAR_0->vtcon_ports[0];

 FUNC_0(VAR_0);
 VAR_1 = VAR_2->vcsp_port;

 if (VAR_1 != ((void*)0)) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_0);
  FUNC_5(VAR_1, VAR_3, VAR_4);
  FUNC_2(VAR_1);
 } else
  FUNC_3(VAR_0);
}
