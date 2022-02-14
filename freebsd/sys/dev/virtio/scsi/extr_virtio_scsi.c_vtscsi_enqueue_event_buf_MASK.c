
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_event_buf_size; struct virtqueue* vtscsi_event_vq; struct sglist* vtscsi_sglist; } ;
struct virtqueue {int dummy; } ;
struct virtio_scsi_event {int dummy; } ;
struct sglist {int sg_nseg; } ;


 int FUNC_0 (struct virtio_scsi_event*,int) ;
 int FUNC_1 (struct sglist*,struct virtio_scsi_event*,int) ;
 int FUNC_2 (struct sglist*) ;
 int FUNC_3 (struct virtqueue*,struct virtio_scsi_event*,struct sglist*,int ,int ) ;
 int FUNC_4 (struct virtqueue*) ;

__attribute__((used)) static int
FUNC_5(struct vtscsi_softc *VAR_0,
    struct virtio_scsi_event *VAR_1)
{
 struct sglist *VAR_2;
 struct virtqueue *VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = VAR_0->vtscsi_sglist;
 VAR_3 = VAR_0->vtscsi_event_vq;
 VAR_4 = VAR_0->vtscsi_event_buf_size;

 FUNC_0(VAR_1, VAR_4);

 FUNC_2(VAR_2);
 VAR_5 = FUNC_1(VAR_2, VAR_1, VAR_4);
 if (VAR_5)
  return (VAR_5);

 VAR_5 = FUNC_3(VAR_3, VAR_1, VAR_2, 0, VAR_2->sg_nseg);
 if (VAR_5)
  return (VAR_5);

 FUNC_4(VAR_3);

 return (0);
}
