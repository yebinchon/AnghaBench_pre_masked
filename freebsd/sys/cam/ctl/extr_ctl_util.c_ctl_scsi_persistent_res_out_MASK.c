
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sense_len; scalar_t__ ext_data_filled; scalar_t__ ext_sg_entries; int ext_data_len; int * ext_data_ptr; int tag_type; scalar_t__ cdb; } ;
struct TYPE_5__ {int flags; int io_type; } ;
union ctl_io {TYPE_3__ scsiio; TYPE_2__ io_hdr; } ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int key; } ;
struct scsi_per_res_out_parms {int serv_act_res_key; TYPE_1__ res_key; } ;
struct scsi_per_res_out {int action; int scope_type; int control; int length; int opcode; } ;
typedef int ctl_tag_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(union ctl_io *VAR_4, uint8_t *VAR_5,
       uint32_t VAR_6, int VAR_7, int VAR_8,
       uint64_t VAR_9, uint64_t VAR_10,
       ctl_tag_type VAR_11, uint8_t VAR_12)
{

 struct scsi_per_res_out *VAR_13;
 struct scsi_per_res_out_parms *VAR_14;

 FUNC_0(VAR_4);

 VAR_13 = (struct scsi_per_res_out *)VAR_4->scsiio.cdb;
 VAR_14 = (struct scsi_per_res_out_parms *)VAR_5;

 VAR_13->opcode = VAR_2;
 if (VAR_7 == 5)
     VAR_13->action = 6;
 else
     VAR_13->action = VAR_7;
 switch(VAR_8)
 {
     case 0:
      VAR_13->scope_type = 1;
   break;
     case 1:
      VAR_13->scope_type = 3;
   break;
     case 2:
      VAR_13->scope_type = 5;
   break;
     case 3:
      VAR_13->scope_type = 6;
   break;
     case 4:
      VAR_13->scope_type = 7;
   break;
     case 5:
      VAR_13->scope_type = 8;
   break;
 }
 FUNC_2(VAR_6, VAR_13->length);
 VAR_13->control = VAR_12;

 FUNC_1(VAR_9, VAR_14->res_key.key);
 FUNC_1(VAR_10, VAR_14->serv_act_res_key);

 VAR_4->io_hdr.io_type = VAR_1;
 VAR_4->io_hdr.flags = VAR_0;
 VAR_4->scsiio.tag_type = VAR_11;
 VAR_4->scsiio.ext_data_ptr = VAR_5;
 VAR_4->scsiio.ext_data_len = VAR_6;
 VAR_4->scsiio.ext_sg_entries = 0;
 VAR_4->scsiio.ext_data_filled = 0;
 VAR_4->scsiio.sense_len = VAR_3;

}
