
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct mfi_command {int cm_error; TYPE_4__* cm_frame; } ;
struct TYPE_6__ {int cmd_status; int scsi_status; } ;
struct TYPE_7__ {TYPE_2__ header; } ;
struct TYPE_5__ {int cmd_status; int scsi_status; } ;
struct TYPE_8__ {TYPE_3__ dcmd; TYPE_1__ header; } ;
void
FUNC_0(struct mfi_command *VAR_0, uint8_t VAR_1,
    uint8_t VAR_2)
{
 switch (VAR_1) {
 case 130:
  VAR_0->cm_frame->header.cmd_status = 130;
  VAR_0->cm_frame->dcmd.header.cmd_status = 130;
  VAR_0->cm_error = 130;
  break;

 case 128:
 case 132:
  VAR_0->cm_frame->header.cmd_status = VAR_1;
  VAR_0->cm_frame->header.scsi_status = VAR_2;
  VAR_0->cm_frame->dcmd.header.cmd_status = VAR_1;
  VAR_0->cm_frame->dcmd.header.scsi_status
      = VAR_2;
  break;

 case 129:
  VAR_0->cm_frame->header.cmd_status = VAR_2;
  VAR_0->cm_frame->dcmd.header.cmd_status = VAR_2;
  break;

 case 131:
 case 133:
  VAR_0->cm_frame->header.cmd_status = VAR_1;
  VAR_0->cm_frame->dcmd.header.cmd_status = VAR_1;
  break;

 default:
  VAR_0->cm_frame->header.cmd_status = VAR_1;
  VAR_0->cm_frame->dcmd.header.cmd_status = VAR_1;
  break;
 }
}
