
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sense_len; int sense_data; } ;
struct TYPE_6__ {int targ_lun; } ;
struct TYPE_4__ {TYPE_3__ nexus; } ;
union ctl_io {TYPE_2__ scsiio; TYPE_1__ io_hdr; } ;
typedef size_t uint32_t ;
struct scsi_sense_data {int dummy; } ;
struct ctl_softc {int ctl_lock; struct ctl_lun** ctl_luns; } ;
struct ctl_port {int dummy; } ;
struct ctl_lun {int lun_lock; struct scsi_sense_data** pending_sense; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 struct ctl_port* FUNC_1 (union ctl_io*) ;
 int VAR_1 ;
 struct ctl_softc* FUNC_2 (union ctl_io*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (union ctl_io*) ;
 size_t FUNC_4 (TYPE_3__*) ;
 size_t FUNC_5 (struct ctl_port*,int ) ;
 size_t VAR_5 ;
 struct scsi_sense_data* FUNC_6 (int,int ,int) ;
 int FUNC_7 (struct scsi_sense_data*,int *,int ) ;
 int FUNC_8 (struct scsi_sense_data*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int
FUNC_11(union ctl_io *VAR_6)
{
 struct ctl_softc *VAR_7 = FUNC_2(VAR_6);
 struct ctl_port *VAR_8 = FUNC_1(VAR_6);
 struct ctl_lun *VAR_9;
 struct scsi_sense_data *VAR_10;
 uint32_t VAR_11, VAR_12, VAR_13;

 FUNC_0(("ctl_queue_sense\n"));

 VAR_13 = FUNC_5(VAR_8, VAR_6->io_hdr.nexus.targ_lun);
 FUNC_9(&VAR_7->ctl_lock);
 if (VAR_13 >= VAR_5 ||
     (VAR_9 = VAR_7->ctl_luns[VAR_13]) == ((void*)0)) {
  FUNC_10(&VAR_7->ctl_lock);
  goto bailout;
 }
 FUNC_9(&VAR_9->lun_lock);
 FUNC_10(&VAR_7->ctl_lock);

 VAR_11 = FUNC_4(&VAR_6->io_hdr.nexus);
 VAR_12 = VAR_11 / VAR_0;
 if (VAR_9->pending_sense[VAR_12] == ((void*)0)) {
  VAR_9->pending_sense[VAR_12] = FUNC_6(sizeof(*VAR_10) * VAR_0,
      VAR_2, VAR_3 | VAR_4);
 }
 if ((VAR_10 = VAR_9->pending_sense[VAR_12]) != ((void*)0)) {
  VAR_10 += VAR_11 % VAR_0;
  FUNC_8(VAR_10, 0, sizeof(*VAR_10));
  FUNC_7(VAR_10, &VAR_6->scsiio.sense_data, VAR_6->scsiio.sense_len);
 }
 FUNC_10(&VAR_9->lun_lock);

bailout:
 FUNC_3(VAR_6);
 return (VAR_1);
}
