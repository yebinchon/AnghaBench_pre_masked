
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_dev; } ;
struct virtio_scsi_event {int event; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct vtscsi_softc*,struct virtio_scsi_event*) ;
 int FUNC_3 (struct vtscsi_softc*) ;
 int FUNC_4 (struct vtscsi_softc*,struct virtio_scsi_event*) ;

__attribute__((used)) static void
FUNC_5(struct vtscsi_softc *VAR_1, struct virtio_scsi_event *VAR_2)
{
 int VAR_3;

 if ((VAR_2->event & VAR_0) == 0) {
  switch (VAR_2->event) {
  case 128:
   FUNC_4(VAR_1, VAR_2);
   break;
  default:
   FUNC_1(VAR_1->vtscsi_dev,
       "unhandled event: %d\n", VAR_2->event);
   break;
  }
 } else
  FUNC_3(VAR_1);





 VAR_3 = FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_3 == 0,
     ("cannot requeue event buffer: %d", VAR_3));
}
