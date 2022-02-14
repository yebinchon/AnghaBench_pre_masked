
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc {int vtcon_flags; int vtcon_max_ports; } ;
struct virtio_console_config {int max_nr_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct vtcon_softc *VAR_2,
    struct virtio_console_config *VAR_3)
{

 if (VAR_2->vtcon_flags & VAR_0) {
  VAR_2->vtcon_max_ports =
      FUNC_0(VAR_3->max_nr_ports, VAR_1);
  if (VAR_2->vtcon_max_ports == 0)
   VAR_2->vtcon_max_ports = 1;
 } else
  VAR_2->vtcon_max_ports = 1;
}
