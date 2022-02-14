
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {struct virtqueue* vtscsi_event_vq; } ;
struct virtqueue {int dummy; } ;
struct virtio_scsi_event {int dummy; } ;


 int FUNC_0 (struct vtscsi_softc*) ;
 int FUNC_1 (struct vtscsi_softc*) ;
 struct virtio_scsi_event* FUNC_2 (struct virtqueue*,int *) ;
 int FUNC_3 (struct virtqueue*) ;
 scalar_t__ FUNC_4 (struct virtqueue*) ;
 int FUNC_5 (struct vtscsi_softc*,struct virtio_scsi_event*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0)
{
 struct vtscsi_softc *VAR_1;
 struct virtqueue *VAR_2;
 struct virtio_scsi_event *VAR_3;

 VAR_1 = VAR_0;
 VAR_2 = VAR_1->vtscsi_event_vq;

again:
 FUNC_0(VAR_1);

 while ((VAR_3 = FUNC_2(VAR_2, ((void*)0))) != ((void*)0))
  FUNC_5(VAR_1, VAR_3);

 if (FUNC_4(VAR_2) != 0) {
  FUNC_3(VAR_2);
  FUNC_1(VAR_1);
  goto again;
 }

 FUNC_1(VAR_1);
}
