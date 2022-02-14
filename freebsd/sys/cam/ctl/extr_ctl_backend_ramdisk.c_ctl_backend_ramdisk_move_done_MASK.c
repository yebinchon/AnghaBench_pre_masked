
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ kern_sg_entries; scalar_t__ kern_data_resid; scalar_t__ kern_data_len; int kern_rel_offset; int kern_data_ptr; } ;
struct TYPE_8__ {int flags; scalar_t__ port_status; int status; int num_dmas; int dma_bt; int dma_start_bt; } ;
union ctl_io {TYPE_1__ scsiio; TYPE_4__ io_hdr; } ;
struct ctl_be_ramdisk_lun {int io_task; int io_taskqueue; int queue_lock; int cont_queue; } ;
struct ctl_be_lun {struct ctl_be_ramdisk_lun* be_lun; } ;
struct bintime {int dummy; } ;
struct TYPE_10__ {int flags; scalar_t__ len; } ;
struct TYPE_9__ {scalar_t__ len; } ;


 TYPE_6__* FUNC_0 (union ctl_io*) ;
 struct ctl_be_lun* FUNC_1 (union ctl_io*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__* FUNC_3 (union ctl_io*) ;
 int FUNC_4 (int *,TYPE_4__*,int ) ;
 int FUNC_5 (int *,struct bintime*) ;
 int FUNC_6 (struct bintime*,int *) ;
 scalar_t__ FUNC_7 (union ctl_io*) ;
 int FUNC_8 (union ctl_io*) ;
 int FUNC_9 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct bintime*) ;
 int VAR_8 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static int
FUNC_17(union ctl_io *VAR_9)
{
 struct ctl_be_lun *VAR_10 = FUNC_1(VAR_9);
 struct ctl_be_ramdisk_lun *VAR_11 = VAR_10->be_lun;




 FUNC_2(("ctl_backend_ramdisk_move_done\n"));





 VAR_9->io_hdr.num_dmas++;
 if (VAR_9->scsiio.kern_sg_entries > 0)
  FUNC_12(VAR_9->scsiio.kern_data_ptr, VAR_7);
 VAR_9->scsiio.kern_rel_offset += VAR_9->scsiio.kern_data_len;
 if (VAR_9->io_hdr.flags & VAR_0) {
  ;
 } else if (VAR_9->io_hdr.port_status != 0 &&
     ((VAR_9->io_hdr.status & VAR_4) == VAR_5 ||
      (VAR_9->io_hdr.status & VAR_4) == VAR_6)) {
  FUNC_9(&VAR_9->scsiio, 1,
                      VAR_9->io_hdr.port_status);
 } else if (VAR_9->scsiio.kern_data_resid != 0 &&
     (VAR_9->io_hdr.flags & VAR_1) == VAR_2 &&
     ((VAR_9->io_hdr.status & VAR_4) == VAR_5 ||
      (VAR_9->io_hdr.status & VAR_4) == VAR_6)) {
  FUNC_10(&VAR_9->scsiio);
 } else if ((VAR_9->io_hdr.port_status == 0) &&
     ((VAR_9->io_hdr.status & VAR_4) == VAR_5)) {
  if (FUNC_0(VAR_9)->flags & VAR_3) {

   if (FUNC_7(VAR_9))
    goto done;
  }
  if (FUNC_0(VAR_9)->len > FUNC_3(VAR_9)->len) {
   FUNC_14(&VAR_11->queue_lock);
   FUNC_4(&VAR_11->cont_queue,
       &VAR_9->io_hdr, VAR_8);
   FUNC_15(&VAR_11->queue_lock);
   FUNC_16(VAR_11->io_taskqueue,
       &VAR_11->io_task);
   return (0);
  }
  FUNC_11(&VAR_9->scsiio);
 }
done:
 FUNC_8(VAR_9);
 return(0);
}
