
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* flags; char* status; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int ocs_textbuf_t ;
typedef int ocs_scsi_ddump_type_e ;
struct TYPE_5__ {scalar_t__ app; int state; } ;
struct TYPE_6__ {TYPE_2__ tgt_io; } ;
typedef TYPE_3__ ocs_io_t ;
 int FUNC_0 (int *,char*,char*,char*) ;

void
FUNC_1(ocs_textbuf_t *VAR_0, ocs_scsi_ddump_type_e VAR_1, void *VAR_2)
{
 switch(VAR_1) {
 case 132: {

  break;
 }
 case 131: {

  break;
 }
 case 128: {

  break;
 }
 case 129: {

  break;
 }
 case 130: {
  ocs_io_t *VAR_3 = VAR_2;
  char *VAR_4 = ((void*)0);

  switch (VAR_3->tgt_io.state) {
  case 134:
   VAR_4 = "FREE";
   break;
  case 137:
   VAR_4 = "COMMAND";
   break;
  case 136:
   VAR_4 = "DATA";
   break;
  case 135:
   VAR_4 = "DATA_DONE";
   break;
  case 133:
   VAR_4 = "RESP";
   break;
  default:
   VAR_4 = "xxx BAD xxx";
  }
  FUNC_0(VAR_0, "cam_st", "%s", VAR_4);
  if (VAR_3->tgt_io.app) {
   FUNC_0(VAR_0, "cam_flags", "%#x",
    ((union ccb *)(VAR_3->tgt_io.app))->ccb_h.flags);
   FUNC_0(VAR_0, "cam_status", "%#x",
    ((union ccb *)(VAR_3->tgt_io.app))->ccb_h.status);
  }

  break;
 }
 default: {
  break;
 }
 }
}
