
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_flags; int vtscsi_event_buf_size; struct virtio_scsi_event* vtscsi_event_bufs; } ;
struct virtio_scsi_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtscsi_softc*,struct virtio_scsi_event*) ;

__attribute__((used)) static int
FUNC_1(struct vtscsi_softc *VAR_2)
{
 struct virtio_scsi_event *VAR_3;
 int VAR_4, VAR_5, VAR_6;






 if (VAR_2->vtscsi_flags & VAR_0)
  VAR_5 = VAR_2->vtscsi_event_buf_size;
 else
  VAR_5 = 0;

 if (VAR_5 < sizeof(struct virtio_scsi_event))
  return (0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_2->vtscsi_event_bufs[VAR_4];

  VAR_6 = FUNC_0(VAR_2, VAR_3);
  if (VAR_6)
   break;
 }





 if (VAR_4 > 0)
  VAR_6 = 0;

 return (VAR_6);
}
