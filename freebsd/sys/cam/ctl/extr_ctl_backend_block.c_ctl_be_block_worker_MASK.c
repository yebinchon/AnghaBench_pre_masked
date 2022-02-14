
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ctl_io {int scsiio; int io_hdr; } ;
struct ctl_be_lun {int flags; } ;
struct ctl_be_block_lun {int queue_lock; int input_queue; int config_read_queue; int config_write_queue; int (* dispatch ) (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;int datamove_queue; struct ctl_be_lun cbe_lun; } ;
struct ctl_be_block_io {int dummy; } ;
struct TYPE_2__ {scalar_t__ ptr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (union ctl_io*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (struct ctl_be_block_lun*,union ctl_io*) ;
 int FUNC_5 (struct ctl_be_block_lun*,union ctl_io*) ;
 int FUNC_6 (struct ctl_be_block_lun*,union ctl_io*) ;
 int FUNC_7 (struct ctl_be_block_io*) ;
 int FUNC_8 (union ctl_io*) ;
 int FUNC_9 (union ctl_io*) ;
 int FUNC_10 (union ctl_io*) ;
 int VAR_1 ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;

__attribute__((used)) static void
FUNC_15(void *VAR_3, int VAR_4)
{
 struct ctl_be_block_lun *VAR_5 = (struct ctl_be_block_lun *)VAR_3;
 struct ctl_be_lun *VAR_6 = &VAR_5->cbe_lun;
 union ctl_io *VAR_7;
 struct ctl_be_block_io *VAR_8;

 FUNC_0("entered\n");





 for (;;) {
  FUNC_12(&VAR_5->queue_lock);
  VAR_7 = (union ctl_io *)FUNC_2(&VAR_5->datamove_queue);
  if (VAR_7 != ((void*)0)) {
   FUNC_0("datamove queue\n");
   FUNC_3(&VAR_5->datamove_queue, &VAR_7->io_hdr,
          VAR_1, VAR_2);
   FUNC_13(&VAR_5->queue_lock);
   VAR_8 = (struct ctl_be_block_io *)FUNC_1(VAR_7)->ptr;
   if (VAR_6->flags & VAR_0) {
    FUNC_11(&VAR_7->scsiio);
    FUNC_7(VAR_8);
    return;
   }
   VAR_5->dispatch(VAR_5, VAR_8);
   continue;
  }
  VAR_7 = (union ctl_io *)FUNC_2(&VAR_5->config_write_queue);
  if (VAR_7 != ((void*)0)) {
   FUNC_0("config write queue\n");
   FUNC_3(&VAR_5->config_write_queue, &VAR_7->io_hdr,
          VAR_1, VAR_2);
   FUNC_13(&VAR_5->queue_lock);
   if (VAR_6->flags & VAR_0) {
    FUNC_11(&VAR_7->scsiio);
    FUNC_9(VAR_7);
    return;
   }
   FUNC_5(VAR_5, VAR_7);
   continue;
  }
  VAR_7 = (union ctl_io *)FUNC_2(&VAR_5->config_read_queue);
  if (VAR_7 != ((void*)0)) {
   FUNC_0("config read queue\n");
   FUNC_3(&VAR_5->config_read_queue, &VAR_7->io_hdr,
          VAR_1, VAR_2);
   FUNC_13(&VAR_5->queue_lock);
   if (VAR_6->flags & VAR_0) {
    FUNC_11(&VAR_7->scsiio);
    FUNC_8(VAR_7);
    return;
   }
   FUNC_4(VAR_5, VAR_7);
   continue;
  }
  VAR_7 = (union ctl_io *)FUNC_2(&VAR_5->input_queue);
  if (VAR_7 != ((void*)0)) {
   FUNC_0("input queue\n");
   FUNC_3(&VAR_5->input_queue, &VAR_7->io_hdr,
          VAR_1, VAR_2);
   FUNC_13(&VAR_5->queue_lock);
   if (VAR_6->flags & VAR_0) {
    FUNC_11(&VAR_7->scsiio);
    FUNC_10(VAR_7);
    return;
   }
   FUNC_6(VAR_5, VAR_7);
   continue;
  }





  FUNC_13(&VAR_5->queue_lock);
  break;
 }
}
