
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vtcon_softc {int vtcon_flags; int vtcon_ctrl_task; struct virtqueue* vtcon_ctrl_rxvq; } ;
struct virtqueue {int dummy; } ;
struct virtio_console_control {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtcon_softc*) ;
 int FUNC_1 (struct vtcon_softc*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 struct virtio_console_control* FUNC_3 (struct virtqueue*,int*) ;
 scalar_t__ FUNC_4 (struct virtqueue*) ;
 int FUNC_5 (struct virtqueue*) ;
 int FUNC_6 (struct vtcon_softc*,struct virtio_console_control*) ;
 int FUNC_7 (struct vtcon_softc*,struct virtio_console_control*,void*,size_t) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2, int VAR_3)
{
 struct vtcon_softc *VAR_4;
 struct virtqueue *VAR_5;
 struct virtio_console_control *VAR_6;
 void *VAR_7;
 size_t VAR_8;
 int VAR_9;
 uint32_t VAR_10;

 VAR_4 = VAR_2;
 VAR_5 = VAR_4->vtcon_ctrl_rxvq;

 FUNC_0(VAR_4);

 while ((VAR_9 = (VAR_4->vtcon_flags & VAR_0)) == 0) {
  VAR_6 = FUNC_3(VAR_5, &VAR_10);
  if (VAR_6 == ((void*)0))
   break;

  if (VAR_10 > sizeof(struct virtio_console_control)) {
   VAR_7 = (void *) &VAR_6[1];
   VAR_8 = VAR_10 - sizeof(struct virtio_console_control);
  } else {
   VAR_7 = ((void*)0);
   VAR_8 = 0;
  }

  FUNC_1(VAR_4);
  FUNC_7(VAR_4, VAR_6, VAR_7, VAR_8);
  FUNC_0(VAR_4);
  FUNC_6(VAR_4, VAR_6);
 }

 if (!VAR_9) {
  FUNC_5(VAR_5);
  if (FUNC_4(VAR_5) != 0)
   FUNC_2(VAR_1,
       &VAR_4->vtcon_ctrl_task);
 }

 FUNC_1(VAR_4);
}
