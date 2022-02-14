
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc {struct virtqueue* vtcon_ctrl_rxvq; } ;
struct virtqueue {int dummy; } ;
struct virtio_console_control {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtcon_softc*) ;
 int FUNC_1 (struct vtcon_softc*) ;
 int FUNC_2 (struct virtio_console_control*,int ) ;
 struct virtio_console_control* FUNC_3 (struct virtqueue*,int*) ;

__attribute__((used)) static void
FUNC_4(struct vtcon_softc *VAR_1)
{
 struct virtio_console_control *VAR_2;
 struct virtqueue *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->vtcon_ctrl_rxvq;
 VAR_4 = 0;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_1);
 while ((VAR_2 = FUNC_3(VAR_3, &VAR_4)) != ((void*)0))
  FUNC_2(VAR_2, VAR_0);
 FUNC_1(VAR_1);
}
