
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int path; } ;
union ccb {TYPE_5__ ccb_h; } ;
typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int16_t ;
struct TYPE_14__ {int valid; int sync_offset; int sync_period; } ;
struct TYPE_15__ {TYPE_3__ spi; } ;
struct ccb_trans_settings {int ccb_h; TYPE_4__ xport_specific; } ;
typedef int neg ;
struct TYPE_19__ {scalar_t__ DeviceCnt; TYPE_7__* pLinkDCB; } ;
struct TYPE_12__ {int offset; int period; } ;
struct TYPE_13__ {TYPE_1__ goal; } ;
struct TYPE_18__ {int IdentifyMsg; scalar_t__ TargetID; struct TYPE_18__* pNextDCB; int SyncMode; int SyncOffset; int SyncPeriod; TYPE_2__ tinfo; } ;
struct TYPE_17__ {union ccb* pccb; } ;
typedef TYPE_6__* PSRB ;
typedef TYPE_7__* PDCB ;
typedef TYPE_8__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ccb_trans_settings*,int ,int) ;
 int FUNC_2 (int ,int ,struct ccb_trans_settings*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(PACB VAR_3,PSRB VAR_4, PDCB VAR_5)
{
 union ccb *VAR_6;
 struct ccb_trans_settings VAR_7;
 u_int16_t VAR_8, VAR_9;
 u_int8_t VAR_10;
 PDCB VAR_11;




 FUNC_0("trm_SetXferRate\n");
 VAR_6 = VAR_4->pccb;
 FUNC_1(&VAR_7, 0, sizeof (VAR_7));
 VAR_7.xport_specific.spi.sync_period = VAR_5->tinfo.goal.period;
 VAR_7.xport_specific.spi.sync_offset = VAR_5->tinfo.goal.offset;
 VAR_7.xport_specific.spi.valid =
     VAR_2 | VAR_1;
 FUNC_3(&VAR_7.ccb_h, VAR_6->ccb_h.path, 1);
 FUNC_2(VAR_0, VAR_6->ccb_h.path, &VAR_7);
 if (!(VAR_5->IdentifyMsg & 0x07)) {
  VAR_11 = VAR_3->pLinkDCB;
  VAR_8 = VAR_3->DeviceCnt;
  VAR_10 = VAR_5->TargetID;
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
   if (VAR_11->TargetID == VAR_10) {
    VAR_11->SyncPeriod = VAR_5->SyncPeriod;
    VAR_11->SyncOffset = VAR_5->SyncOffset;
    VAR_11->SyncMode = VAR_5->SyncMode;
   }
   VAR_11 = VAR_11->pNextDCB;
  }
 }
 return;
}
