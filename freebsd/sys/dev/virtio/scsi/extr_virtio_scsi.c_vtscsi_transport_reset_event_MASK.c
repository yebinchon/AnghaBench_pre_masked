
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target_id_t ;
struct vtscsi_softc {int vtscsi_dev; } ;
struct virtio_scsi_event {int reason; int lun; } ;
typedef int lun_id_t ;




 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct vtscsi_softc*,int ,int ) ;
 int FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct vtscsi_softc *VAR_0,
    struct virtio_scsi_event *VAR_1)
{
 target_id_t VAR_2;
 lun_id_t VAR_3;

 FUNC_2(VAR_1->lun, &VAR_2, &VAR_3);

 switch (VAR_1->reason) {
 case 128:
 case 129:
  FUNC_1(VAR_0, VAR_2, VAR_3);
  break;
 default:
  FUNC_0(VAR_0->vtscsi_dev,
      "unhandled transport event reason: %d\n", VAR_1->reason);
  break;
 }
}
