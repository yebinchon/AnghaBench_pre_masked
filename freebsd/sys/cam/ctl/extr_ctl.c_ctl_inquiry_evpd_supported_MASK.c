
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_vpd_supported_pages {int device; int length; int * page_list; } ;
struct TYPE_4__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; int kern_data_len; int kern_total_len; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; scalar_t__ kern_data_ptr; } ;
struct ctl_lun {TYPE_1__* be_lun; } ;
struct TYPE_3__ {int lun_type; } ;


 int VAR_0 ;
 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int
FUNC_5(struct ctl_scsiio *VAR_21, int VAR_22)
{
 struct ctl_lun *VAR_23 = FUNC_0(VAR_21);
 struct scsi_vpd_supported_pages *VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_25 = sizeof(struct scsi_vpd_supported_pages) *
     VAR_5;
 VAR_21->kern_data_ptr = FUNC_3(VAR_25, VAR_2, VAR_3 | VAR_4);
 VAR_24 = (struct scsi_vpd_supported_pages *)VAR_21->kern_data_ptr;
 VAR_21->kern_rel_offset = 0;
 VAR_21->kern_sg_entries = 0;
 VAR_21->kern_data_len = FUNC_4(VAR_25, VAR_22);
 VAR_21->kern_total_len = VAR_21->kern_data_len;






 if (VAR_23 != ((void*)0))
  VAR_24->device = (VAR_6 << 5) |
    VAR_23->be_lun->lun_type;
 else
  VAR_24->device = (VAR_7 << 5) | VAR_19;

 VAR_26 = 0;

 VAR_24->page_list[VAR_26++] = VAR_17;

 VAR_24->page_list[VAR_26++] = VAR_18;

 VAR_24->page_list[VAR_26++] = VAR_10;

 VAR_24->page_list[VAR_26++] = VAR_11;

 VAR_24->page_list[VAR_26++] = VAR_13;

 VAR_24->page_list[VAR_26++] = VAR_14;

 VAR_24->page_list[VAR_26++] = VAR_16;

 VAR_24->page_list[VAR_26++] = VAR_15;
 if (VAR_23 != ((void*)0) && VAR_23->be_lun->lun_type == VAR_19) {

  VAR_24->page_list[VAR_26++] = VAR_9;

  VAR_24->page_list[VAR_26++] = VAR_8;

  VAR_24->page_list[VAR_26++] = VAR_12;
 }
 VAR_24->length = VAR_26;

 FUNC_2(VAR_21);
 VAR_21->io_hdr.flags |= VAR_0;
 VAR_21->be_move_done = VAR_20;
 FUNC_1((union ctl_io *)VAR_21);
 return (VAR_1);
}
