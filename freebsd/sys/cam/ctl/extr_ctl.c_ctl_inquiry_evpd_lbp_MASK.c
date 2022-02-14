
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_vpd_logical_block_prov {int device; int flags; void* prov_type; int threshold_exponent; int page_length; int page_code; } ;
struct TYPE_4__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; int kern_data_len; int kern_total_len; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ kern_data_ptr; } ;
struct ctl_lun {TYPE_1__* be_lun; } ;
struct TYPE_3__ {int lun_type; int flags; int options; } ;


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
 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*) ;
 char* FUNC_3 (int ,char*,int *) ;
 scalar_t__ FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int
FUNC_8(struct ctl_scsiio *VAR_19, int VAR_20)
{
 struct ctl_lun *VAR_21 = FUNC_0(VAR_19);
 struct scsi_vpd_logical_block_prov *VAR_22;
 const char *VAR_23;

 VAR_19->kern_data_ptr = FUNC_4(sizeof(*VAR_22), VAR_4, VAR_5 | VAR_6);
 VAR_22 = (struct scsi_vpd_logical_block_prov *)VAR_19->kern_data_ptr;
 VAR_19->kern_sg_entries = 0;
 VAR_19->kern_rel_offset = 0;
 VAR_19->kern_data_len = FUNC_5(sizeof(*VAR_22), VAR_20);
 VAR_19->kern_total_len = VAR_19->kern_data_len;






 if (VAR_21 != ((void*)0))
  VAR_22->device = (VAR_7 << 5) |
      VAR_21->be_lun->lun_type;
 else
  VAR_22->device = (VAR_8 << 5) | VAR_17;

 VAR_22->page_code = VAR_9;
 FUNC_6(sizeof(*VAR_22) - 4, VAR_22->page_length);
 VAR_22->threshold_exponent = VAR_1;
 if (VAR_21 != ((void*)0) && VAR_21->be_lun->flags & VAR_2) {
  VAR_22->flags = VAR_14 | VAR_16 |
      VAR_15 | VAR_12 | VAR_10;
  VAR_23 = FUNC_3(VAR_21->be_lun->options,
      "provisioning_type", ((void*)0));
  if (VAR_23 != ((void*)0)) {
   if (FUNC_7(VAR_23, "resource") == 0)
    VAR_22->prov_type = VAR_11;
   else if (FUNC_7(VAR_23, "thin") == 0)
    VAR_22->prov_type = VAR_13;
  } else
   VAR_22->prov_type = VAR_13;
 }

 FUNC_2(VAR_19);
 VAR_19->io_hdr.flags |= VAR_0;
 VAR_19->be_move_done = VAR_18;
 FUNC_1((union ctl_io *)VAR_19);
 return (VAR_3);
}
