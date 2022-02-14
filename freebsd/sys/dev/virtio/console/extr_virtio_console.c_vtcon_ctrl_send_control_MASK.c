
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef void* uint16_t ;
struct vtcon_softc {int vtcon_flags; } ;
struct virtio_console_control {void* value; void* event; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtcon_softc*,struct virtio_console_control*) ;

__attribute__((used)) static void
FUNC_1(struct vtcon_softc *VAR_1, uint32_t VAR_2,
    uint16_t VAR_3, uint16_t VAR_4)
{
 struct virtio_console_control VAR_5;

 if ((VAR_1->vtcon_flags & VAR_0) == 0)
  return;

 VAR_5.id = VAR_2;
 VAR_5.event = VAR_3;
 VAR_5.value = VAR_4;

 FUNC_0(VAR_1, &VAR_5);
}
