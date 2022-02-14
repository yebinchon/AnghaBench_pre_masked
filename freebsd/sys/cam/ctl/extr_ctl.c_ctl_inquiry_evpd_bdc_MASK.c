
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int u_int ;
struct scsi_vpd_block_device_characteristics {int device; int wab_wac_ff; int flags; int medium_rotation_rate; int page_length; int page_code; } ;
struct TYPE_4__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; int kern_data_len; int kern_total_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ kern_data_ptr; } ;
struct ctl_lun {TYPE_1__* be_lun; } ;
struct TYPE_3__ {int lun_type; int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
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
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*) ;
 char* FUNC_3 (int ,char*,int *) ;
 scalar_t__ FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char const*,int *,int ) ;

__attribute__((used)) static int
FUNC_8(struct ctl_scsiio *VAR_14, int VAR_15)
{
 struct ctl_lun *VAR_16 = FUNC_0(VAR_14);
 struct scsi_vpd_block_device_characteristics *VAR_17;
 const char *VAR_18;
 u_int VAR_19;

 VAR_14->kern_data_ptr = FUNC_4(sizeof(*VAR_17), VAR_3, VAR_4 | VAR_5);
 VAR_17 = (struct scsi_vpd_block_device_characteristics *)VAR_14->kern_data_ptr;
 VAR_14->kern_sg_entries = 0;
 VAR_14->kern_rel_offset = 0;
 VAR_14->kern_data_len = FUNC_5(sizeof(*VAR_17), VAR_15);
 VAR_14->kern_total_len = VAR_14->kern_data_len;






 if (VAR_16 != ((void*)0))
  VAR_17->device = (VAR_6 << 5) |
      VAR_16->be_lun->lun_type;
 else
  VAR_17->device = (VAR_7 << 5) | VAR_12;
 VAR_17->page_code = VAR_8;
 FUNC_6(sizeof(*VAR_17) - 4, VAR_17->page_length);
 if (VAR_16 != ((void*)0) &&
     (VAR_18 = FUNC_3(VAR_16->be_lun->options, "rpm", ((void*)0))) != ((void*)0))
  VAR_19 = FUNC_7(VAR_18, ((void*)0), 0);
 else
  VAR_19 = VAR_0;
 FUNC_6(VAR_19, VAR_17->medium_rotation_rate);
 if (VAR_16 != ((void*)0) &&
     (VAR_18 = FUNC_3(VAR_16->be_lun->options, "formfactor", ((void*)0))) != ((void*)0))
  VAR_19 = FUNC_7(VAR_18, ((void*)0), 0);
 else
  VAR_19 = 0;
 VAR_17->wab_wac_ff = (VAR_19 & 0x0f);
 VAR_17->flags = VAR_10 | VAR_9 | VAR_11;

 FUNC_2(VAR_14);
 VAR_14->io_hdr.flags |= VAR_1;
 VAR_14->be_move_done = VAR_13;
 FUNC_1((union ctl_io *)VAR_14);
 return (VAR_2);
}
