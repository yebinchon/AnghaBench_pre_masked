
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_log_sense {int page; int subpage; int length; } ;
struct scsi_log_header {int page; int subpage; int datalen; } ;
struct TYPE_4__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; scalar_t__ kern_data_ptr; int kern_data_len; int kern_total_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ cdb; } ;
struct ctl_page_index {int page_code; int subpage; int page_len; int page_data; int (* sense_handler ) (struct ctl_scsiio*,struct ctl_page_index*,int) ;} ;
struct TYPE_3__ {struct ctl_page_index* index; } ;
struct ctl_lun {TYPE_1__ log_pages; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (struct ctl_scsiio*,int,int,int,int ,int ) ;
 int FUNC_5 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_6 (int,int ,int) ;
 int FUNC_7 (struct scsi_log_header*,int ,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (struct ctl_scsiio*,struct ctl_page_index*,int) ;

int
FUNC_12(struct ctl_scsiio *VAR_13)
{
 struct ctl_lun *VAR_14 = FUNC_1(VAR_13);
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;
 struct ctl_page_index *VAR_21;
 struct scsi_log_sense *VAR_22;
 struct scsi_log_header *VAR_23;

 FUNC_0(("ctl_log_sense\n"));

 VAR_22 = (struct scsi_log_sense *)VAR_13->cdb;
 VAR_16 = (VAR_22->page & VAR_8) >> 6;
 VAR_17 = VAR_22->page & VAR_7;
 VAR_18 = VAR_22->subpage;
 VAR_19 = FUNC_9(VAR_22->length);

 VAR_21 = ((void*)0);
 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  VAR_21 = &VAR_14->log_pages.index[VAR_15];


  if ((VAR_21->page_code & VAR_10) != VAR_17)
   continue;


  if (VAR_21->subpage != VAR_18)
   continue;

  break;
 }
 if (VAR_15 >= VAR_1) {
  FUNC_4(VAR_13,
                        1,
                      1,
                    2,
                        0,
                  0);
  FUNC_3((union ctl_io *)VAR_13);
  return (VAR_2);
 }

 VAR_20 = sizeof(struct scsi_log_header) + VAR_21->page_len;

 VAR_13->kern_data_ptr = FUNC_6(VAR_20, VAR_3, VAR_4 | VAR_5);
 VAR_13->kern_sg_entries = 0;
 VAR_13->kern_rel_offset = 0;
 VAR_13->kern_data_len = FUNC_8(VAR_20, VAR_19);
 VAR_13->kern_total_len = VAR_13->kern_data_len;

 VAR_23 = (struct scsi_log_header *)VAR_13->kern_data_ptr;
 VAR_23->page = VAR_21->page_code;
 if (VAR_21->page_code == VAR_6)
  VAR_23->page |= VAR_9;
 if (VAR_21->subpage) {
  VAR_23->page |= VAR_11;
  VAR_23->subpage = VAR_21->subpage;
 }
 FUNC_10(VAR_21->page_len, VAR_23->datalen);





 if (VAR_21->sense_handler != ((void*)0))
  VAR_21->sense_handler(VAR_13, VAR_21, VAR_16);

 FUNC_7(VAR_23 + 1, VAR_21->page_data, VAR_21->page_len);

 FUNC_5(VAR_13);
 VAR_13->io_hdr.flags |= VAR_0;
 VAR_13->be_move_done = VAR_12;
 FUNC_2((union ctl_io *)VAR_13);
 return (VAR_2);
}
