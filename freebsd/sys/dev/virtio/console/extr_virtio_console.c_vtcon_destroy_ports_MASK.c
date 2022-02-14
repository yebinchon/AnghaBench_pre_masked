
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc_port {struct virtqueue* vcsp_invq; struct vtcon_port* vcsp_port; } ;
struct vtcon_softc {int vtcon_max_ports; struct vtcon_softc_port* vtcon_ports; } ;
struct vtcon_port {int dummy; } ;
struct virtqueue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtcon_softc*) ;
 int FUNC_1 (struct vtcon_port*) ;
 int FUNC_2 (struct vtcon_softc*) ;
 int FUNC_3 (struct vtcon_softc_port*,int ) ;
 int FUNC_4 (struct virtqueue*) ;
 int FUNC_5 (struct vtcon_port*) ;

__attribute__((used)) static void
FUNC_6(struct vtcon_softc *VAR_1)
{
 struct vtcon_softc_port *VAR_2;
 struct vtcon_port *VAR_3;
 struct virtqueue *VAR_4;
 int VAR_5;

 if (VAR_1->vtcon_ports == ((void*)0))
  return;

 FUNC_0(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_1->vtcon_max_ports; VAR_5++) {
  VAR_2 = &VAR_1->vtcon_ports[VAR_5];

  VAR_3 = VAR_2->vcsp_port;
  if (VAR_3 != ((void*)0)) {
   VAR_2->vcsp_port = ((void*)0);
   FUNC_1(VAR_3);
   FUNC_2(VAR_1);
   FUNC_5(VAR_3);
   FUNC_0(VAR_1);
  }

  VAR_4 = VAR_2->vcsp_invq;
  if (VAR_4 != ((void*)0))
   FUNC_4(VAR_4);
 }
 FUNC_2(VAR_1);

 FUNC_3(VAR_1->vtcon_ports, VAR_0);
 VAR_1->vtcon_ports = ((void*)0);
}
