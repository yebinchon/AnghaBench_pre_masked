
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xpt_opcode ;
typedef union ccb {int dummy; } ccb ;
struct ccb_scsiio {int dummy; } ;
struct ccb_relsim {int dummy; } ;
struct ccb_pathinq {int dummy; } ;
struct ccb_immediate_notify {int dummy; } ;
struct ccb_immed_notify {int dummy; } ;
struct ccb_en_lun {int dummy; } ;
struct ccb_debug {int dummy; } ;
struct ccb_accept_tio {int dummy; } ;
struct ccb_abort {int dummy; } ;
__attribute__((used)) static size_t
FUNC_0(xpt_opcode VAR_0)
{
 int VAR_1;


 switch (VAR_0) {
 case 135:
 case 128:
  VAR_1 = sizeof(struct ccb_scsiio);
  break;
 case 136:
  VAR_1 = sizeof(struct ccb_accept_tio);
  break;
 case 131:
  VAR_1 = sizeof(struct ccb_immed_notify);
  break;
 case 132:
  VAR_1 = sizeof(struct ccb_immediate_notify);
  break;
 case 129:
  VAR_1 = sizeof(struct ccb_relsim);
  break;
 case 130:
  VAR_1 = sizeof(struct ccb_pathinq);
  break;
 case 134:
  VAR_1 = sizeof(struct ccb_debug);
  break;
 case 137:
  VAR_1 = sizeof(struct ccb_abort);
  break;
 case 133:
  VAR_1 = sizeof(struct ccb_en_lun);
  break;
 default:
  VAR_1 = sizeof(union ccb);
  break;
 }

 return (VAR_1);
}
