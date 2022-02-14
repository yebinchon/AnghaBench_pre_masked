
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma_start_bt; } ;
union ctl_io {TYPE_1__ io_hdr; int scsiio; } ;
struct ctl_be_block_lun {int io_lock; int disk_stats; } ;
struct ctl_be_block_io {int first_error; scalar_t__ first_error_offset; scalar_t__ num_bios_done; scalar_t__ send_complete; scalar_t__ num_bios_sent; scalar_t__ bio_cmd; int * beio_cont; int ds_t0; int ds_trans_type; int ds_tag_type; int io_len; struct ctl_be_block_lun* lun; union ctl_io* io; } ;
struct bio {int bio_error; scalar_t__ bio_offset; struct ctl_be_block_io* bio_caller1; } ;
struct TYPE_4__ {int flags; } ;


 TYPE_2__* FUNC_0 (union ctl_io*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ctl_be_block_io*) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_12 (struct bio*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void
FUNC_16(struct bio *VAR_11)
{
 struct ctl_be_block_io *VAR_12;
 struct ctl_be_block_lun *VAR_13;
 union ctl_io *VAR_14;
 int VAR_15;

 VAR_12 = VAR_11->bio_caller1;
 VAR_13 = VAR_12->lun;
 VAR_14 = VAR_12->io;

 FUNC_1("entered\n");

 VAR_15 = VAR_11->bio_error;
 FUNC_14(&VAR_13->io_lock);
 if (VAR_15 != 0 &&
     (VAR_12->first_error == 0 ||
      VAR_11->bio_offset < VAR_12->first_error_offset)) {
  VAR_12->first_error = VAR_15;
  VAR_12->first_error_offset = VAR_11->bio_offset;
 }

 VAR_12->num_bios_done++;





 FUNC_12(VAR_11);





 if ((VAR_12->send_complete == 0)
  || (VAR_12->num_bios_done < VAR_12->num_bios_sent)) {
  FUNC_15(&VAR_13->io_lock);
  return;
 }





 FUNC_11(VAR_12->lun->disk_stats, VAR_12->io_len,
     VAR_12->ds_tag_type, VAR_12->ds_trans_type,
             ((void*)0), &VAR_12->ds_t0);
 FUNC_15(&VAR_13->io_lock);





 VAR_15 = VAR_12->first_error;
 if (VAR_15 != 0) {
  if (VAR_15 == VAR_9) {
   FUNC_7(&VAR_14->scsiio);
  } else if (VAR_15 == VAR_8 || VAR_15 == VAR_7) {
   FUNC_9(&VAR_14->scsiio);
  } else if (VAR_15 == VAR_10 || VAR_15 == VAR_6) {
   FUNC_5(&VAR_14->scsiio);
  } else if (VAR_12->bio_cmd == VAR_1) {

   FUNC_6(&VAR_14->scsiio,
                     1,
                       0xbad2);
  } else {
   FUNC_8(&VAR_14->scsiio,
       VAR_12->bio_cmd == VAR_2);
  }
  FUNC_2(VAR_12);
  return;
 }





 if ((VAR_12->bio_cmd == VAR_3)
  || (VAR_12->bio_cmd == VAR_1)
  || (VAR_12->bio_cmd == VAR_0)
  || (FUNC_0(VAR_14)->flags & VAR_5)) {
  FUNC_10(&VAR_14->scsiio);
  FUNC_2(VAR_12);
 } else {
  if ((FUNC_0(VAR_14)->flags & VAR_4) &&
      VAR_12->beio_cont == ((void*)0)) {
   FUNC_10(&VAR_14->scsiio);
   FUNC_4(VAR_14);
  }



  FUNC_3(VAR_14);
 }
}
