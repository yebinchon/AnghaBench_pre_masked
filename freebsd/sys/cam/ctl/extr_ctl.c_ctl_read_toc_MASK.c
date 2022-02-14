
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint32_t ;
struct scsi_read_toc_type01_descr {int addr_ctl; int track_number; int track_start; } ;
struct scsi_read_toc_hdr {int first; int last; int data_length; } ;
struct scsi_read_toc {int byte2; int format; int data_len; } ;
struct TYPE_4__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; scalar_t__ kern_data_ptr; int kern_data_len; int kern_total_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ cdb; } ;
struct ctl_lun {TYPE_1__* be_lun; } ;
struct TYPE_3__ {scalar_t__ maxlba; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (scalar_t__,int ) ;

int
FUNC_9(struct ctl_scsiio *VAR_7)
{
 struct ctl_lun *VAR_8 = FUNC_0(VAR_7);
 struct scsi_read_toc_hdr *VAR_9;
 struct scsi_read_toc_type01_descr *VAR_10;
 struct scsi_read_toc *VAR_11;
 uint32_t VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = (struct scsi_read_toc *)VAR_7->cdb;
 VAR_15 = (VAR_11->byte2 & VAR_0) != 0;
 VAR_14 = VAR_11->format;
 VAR_12 = FUNC_6(VAR_11->data_len);

 VAR_13 = sizeof(struct scsi_read_toc_hdr);
 if (VAR_14 == 0)
  VAR_13 += 2 * sizeof(struct scsi_read_toc_type01_descr);
 else
  VAR_13 += sizeof(struct scsi_read_toc_type01_descr);
 VAR_7->kern_data_ptr = FUNC_4(VAR_13, VAR_3, VAR_4 | VAR_5);
 VAR_7->kern_sg_entries = 0;
 VAR_7->kern_rel_offset = 0;
 VAR_7->kern_data_len = FUNC_5(VAR_13, VAR_12);
 VAR_7->kern_total_len = VAR_7->kern_data_len;

 VAR_9 = (struct scsi_read_toc_hdr *)VAR_7->kern_data_ptr;
 if (VAR_14 == 0) {
  FUNC_7(0x12, VAR_9->data_length);
  VAR_9->first = 1;
  VAR_9->last = 1;
  VAR_10 = (struct scsi_read_toc_type01_descr *)(VAR_9 + 1);
  VAR_10->addr_ctl = 0x14;
  VAR_10->track_number = 1;
  if (VAR_15)
   FUNC_3(0, VAR_10->track_start);
  else
   FUNC_8(0, VAR_10->track_start);
  VAR_10++;
  VAR_10->addr_ctl = 0x14;
  VAR_10->track_number = 0xaa;
  if (VAR_15)
   FUNC_3(VAR_8->be_lun->maxlba+1, VAR_10->track_start);
  else
   FUNC_8(VAR_8->be_lun->maxlba+1, VAR_10->track_start);
 } else {
  FUNC_7(0x0a, VAR_9->data_length);
  VAR_9->first = 1;
  VAR_9->last = 1;
  VAR_10 = (struct scsi_read_toc_type01_descr *)(VAR_9 + 1);
  VAR_10->addr_ctl = 0x14;
  VAR_10->track_number = 1;
  if (VAR_15)
   FUNC_3(0, VAR_10->track_start);
  else
   FUNC_8(0, VAR_10->track_start);
 }

 FUNC_2(VAR_7);
 VAR_7->io_hdr.flags |= VAR_1;
 VAR_7->be_move_done = VAR_6;
 FUNC_1((union ctl_io *)VAR_7);
 return (VAR_2);
}
