
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; scalar_t__ port_status; int status; int num_dmas; int dma_bt; int dma_start_bt; } ;
struct TYPE_6__ {scalar_t__ kern_data_resid; scalar_t__ kern_data_len; int kern_rel_offset; } ;
union ctl_io {TYPE_4__ io_hdr; TYPE_1__ scsiio; } ;
struct ctl_lba_len_flags {int flags; } ;
struct ctl_be_block_lun {int io_task; int io_taskqueue; int queue_lock; int datamove_queue; } ;
struct ctl_be_block_io {scalar_t__ bio_cmd; int io; struct ctl_be_block_lun* lun; } ;
struct bintime {int dummy; } ;
struct TYPE_8__ {scalar_t__ ptr; } ;


 struct ctl_lba_len_flags* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 TYPE_5__* FUNC_2 (union ctl_io*) ;
 int FUNC_3 (int *,TYPE_4__*,int ) ;
 int FUNC_4 (int *,struct bintime*) ;
 int FUNC_5 (struct bintime*,int *) ;
 int FUNC_6 (union ctl_io*) ;
 int FUNC_7 (struct ctl_be_block_io*) ;
 int FUNC_8 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct bintime*) ;
 int VAR_9 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int
FUNC_15(union ctl_io *VAR_10)
{
 struct ctl_be_block_io *VAR_11;
 struct ctl_be_block_lun *VAR_12;
 struct ctl_lba_len_flags *VAR_13;




 VAR_11 = (struct ctl_be_block_io *)FUNC_2(VAR_10)->ptr;
 VAR_12 = VAR_11->lun;

 FUNC_1("entered\n");






 VAR_10->io_hdr.num_dmas++;
 VAR_10->scsiio.kern_rel_offset += VAR_10->scsiio.kern_data_len;





 if (VAR_10->io_hdr.flags & VAR_1) {
  ;
 } else if ((VAR_10->io_hdr.port_status != 0) &&
     ((VAR_10->io_hdr.status & VAR_6) == VAR_7 ||
      (VAR_10->io_hdr.status & VAR_6) == VAR_8)) {
  FUNC_8(&VAR_10->scsiio, 1,
                      VAR_10->io_hdr.port_status);
 } else if (VAR_10->scsiio.kern_data_resid != 0 &&
     (VAR_10->io_hdr.flags & VAR_2) == VAR_3 &&
     ((VAR_10->io_hdr.status & VAR_6) == VAR_7 ||
      (VAR_10->io_hdr.status & VAR_6) == VAR_8)) {
  FUNC_9(&VAR_10->scsiio);
 } else if ((VAR_10->io_hdr.port_status == 0) &&
     ((VAR_10->io_hdr.status & VAR_6) == VAR_7)) {
  VAR_13 = FUNC_0(VAR_11->io);
  if (VAR_13->flags & VAR_5) {
   FUNC_10(&VAR_10->scsiio);
  } else if (VAR_13->flags & VAR_4) {

   FUNC_6(VAR_10);
  }
 }




 if ((VAR_11->bio_cmd == VAR_0)
  || ((VAR_10->io_hdr.flags & VAR_1) != 0)
  || ((VAR_10->io_hdr.status & VAR_6) != VAR_7)) {
  FUNC_7(VAR_11);
  return (0);
 }
 FUNC_12(&VAR_12->queue_lock);
 FUNC_3(&VAR_12->datamove_queue, &VAR_10->io_hdr, VAR_9);
 FUNC_13(&VAR_12->queue_lock);
 FUNC_14(VAR_12->io_taskqueue, &VAR_12->io_task);

 return (0);
}
