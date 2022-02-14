
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_dev; } ;
struct virtio_scsi_config {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,struct virtio_scsi_config*) ;
 int FUNC_1 (struct virtio_scsi_config*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_2(struct vtscsi_softc *VAR_10,
    struct virtio_scsi_config *VAR_11)
{
 device_t VAR_12;

 VAR_12 = VAR_10->vtscsi_dev;

 FUNC_1(VAR_11, sizeof(struct virtio_scsi_config));

 FUNC_0(VAR_12, VAR_7, VAR_11);
 FUNC_0(VAR_12, VAR_8, VAR_11);
 FUNC_0(VAR_12, VAR_5, VAR_11);
 FUNC_0(VAR_12, VAR_1, VAR_11);
 FUNC_0(VAR_12, VAR_2, VAR_11);
 FUNC_0(VAR_12, VAR_9, VAR_11);
 FUNC_0(VAR_12, VAR_0, VAR_11);
 FUNC_0(VAR_12, VAR_3, VAR_11);
 FUNC_0(VAR_12, VAR_6, VAR_11);
 FUNC_0(VAR_12, VAR_4, VAR_11);
}
