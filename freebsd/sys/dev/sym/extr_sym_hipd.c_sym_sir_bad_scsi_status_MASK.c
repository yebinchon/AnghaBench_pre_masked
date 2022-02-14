
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef int u_char ;
typedef int u32 ;
typedef TYPE_9__* tcb_p ;
typedef TYPE_10__* hcb_p ;
typedef TYPE_11__* ccb_p ;
struct TYPE_32__ {int options; int scsi_version; int offset; int width; } ;
struct TYPE_33__ {TYPE_3__ current; } ;
struct TYPE_38__ {TYPE_4__ tinfo; } ;
struct TYPE_35__ {void* start; } ;
struct TYPE_36__ {TYPE_6__ go; void* lastp; void* goalp; void* savep; } ;
struct TYPE_34__ {void* size; void* addr; } ;
struct TYPE_31__ {void* size; void* addr; } ;
struct TYPE_30__ {void* size; void* addr; } ;
struct TYPE_37__ {TYPE_7__ head; TYPE_5__ sense; TYPE_2__ cmd; TYPE_1__ smsg; } ;
struct TYPE_29__ {size_t target; int ssss_status; int host_flags; int lun; int sv_scsi_status; int* scsi_smsg2; int* sensecmd; int data_len; TYPE_8__ phys; int extra_bytes; int xerr_status; int nego_status; int host_status; int actualquirks; void* startp; int sns_bbuf; int sv_resid; int sv_xerr_status; } ;
struct TYPE_28__ {int squeue_ba; int * last_cp; TYPE_9__* target; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_11__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_11__*) ;
 int FUNC_4 (TYPE_10__*,int ) ;
 int FUNC_5 (TYPE_10__*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int VAR_12 ;


 int VAR_13 ;


 int FUNC_7 (int ,int) ;
 void* FUNC_8 (int) ;
 int VAR_14 ;
 int FUNC_9 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (TYPE_10__*,TYPE_11__*) ;
 int FUNC_11 (TYPE_10__*,TYPE_11__*) ;
 int FUNC_12 (TYPE_10__*,int,size_t,int,int) ;
 int FUNC_13 (TYPE_10__*,int ) ;
 int FUNC_14 (TYPE_10__*,TYPE_11__*,int,int*) ;
 int FUNC_15 (TYPE_10__*,TYPE_11__*) ;
 int VAR_20 ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(hcb_p VAR_21, ccb_p VAR_22)
{
 tcb_p VAR_23 = &VAR_21->target[VAR_22->target];
 u32 VAR_24;
 u_char VAR_25 = VAR_22->ssss_status;
 u_char VAR_26 = VAR_22->host_flags;
 int VAR_27;
 int VAR_28;
 int VAR_29;

 FUNC_6(VAR_5);




 VAR_29 = (FUNC_1 (VAR_14) - VAR_21->squeue_ba) / 4;
 switch(VAR_25) {
 case 131:
 case 129:
  if (VAR_20 >= 2) {
   FUNC_3(VAR_22);
   FUNC_9 (VAR_25 == 131 ? "BUSY" : "QUEUE FULL\n");
  }
 default:
  FUNC_10 (VAR_21, VAR_22);
  break;
 case 128:
 case 130:



  if (VAR_26 & VAR_2) {
   FUNC_10 (VAR_21, VAR_22);
   break;
  }





  (void) FUNC_12(VAR_21, VAR_29, VAR_22->target, VAR_22->lun, -1);
  FUNC_2 (FUNC_4 (VAR_21, VAR_19));





  VAR_22->sv_scsi_status = VAR_22->ssss_status;
  VAR_22->sv_xerr_status = VAR_22->xerr_status;
  VAR_22->sv_resid = FUNC_11(VAR_21, VAR_22);
  VAR_22->scsi_smsg2[0] = VAR_6 | VAR_22->lun;
  VAR_27 = 1;
  VAR_22->nego_status = 0;
  VAR_28 = 0;
  if (VAR_23->tinfo.current.options & VAR_10)
   VAR_28 = VAR_7;
  else if (VAR_23->tinfo.current.width != VAR_0)
   VAR_28 = VAR_9;
  else if (VAR_23->tinfo.current.offset != 0)
   VAR_28 = VAR_8;
  if (VAR_28)
   VAR_27 +=
   FUNC_14 (VAR_21,VAR_22, VAR_28, &VAR_22->scsi_smsg2[VAR_27]);



  VAR_22->phys.smsg.addr = FUNC_8(FUNC_0 (VAR_22, VAR_15));
  VAR_22->phys.smsg.size = FUNC_8(VAR_27);




  VAR_22->phys.cmd.addr = FUNC_8(FUNC_0 (VAR_22, VAR_18));
  VAR_22->phys.cmd.size = FUNC_8(6);




  VAR_22->sensecmd[0] = 0x03;
  VAR_22->sensecmd[1] = VAR_22->lun << 5;
  if (VAR_23->tinfo.current.scsi_version > 2 || VAR_22->lun > 7)
   VAR_22->sensecmd[1] = 0;
  VAR_22->sensecmd[4] = VAR_12;
  VAR_22->data_len = VAR_12;




  FUNC_7(VAR_22->sns_bbuf, VAR_12);
  VAR_22->phys.sense.addr = FUNC_8(FUNC_16(VAR_22->sns_bbuf));
  VAR_22->phys.sense.size = FUNC_8(VAR_12);




  VAR_24 = FUNC_5 (VAR_21, VAR_16);

  VAR_22->phys.head.savep = FUNC_8(VAR_24);
  VAR_22->phys.head.goalp = FUNC_8(VAR_24 + 16);
  VAR_22->phys.head.lastp = FUNC_8(VAR_24);
  VAR_22->startp = FUNC_8(VAR_24);

  VAR_22->actualquirks = VAR_11;
  VAR_22->host_status = VAR_22->nego_status ? VAR_4 : VAR_3;
  VAR_22->ssss_status = VAR_13;
  VAR_22->host_flags = (VAR_2|VAR_1);
  VAR_22->xerr_status = 0;
  VAR_22->extra_bytes = 0;

  VAR_22->phys.head.go.start = FUNC_8(FUNC_4 (VAR_21, VAR_17));




  FUNC_15(VAR_21, VAR_22);




  FUNC_13(VAR_21, 0);
  break;
 }
}
