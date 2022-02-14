
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int target_lun; int target_id; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint8_t ;
typedef int uint16_t ;
struct mpt_softc {TYPE_4__* tmf_req; int request_pending_list; int request_timeout_list; } ;
struct TYPE_9__ {int index; int serno; union ccb* ccb; TYPE_3__* req_vbuf; } ;
typedef TYPE_2__ request_t ;
struct TYPE_11__ {int state; int ResponseCode; int IOCStatus; } ;
struct TYPE_10__ {int Function; } ;
typedef TYPE_3__ MSG_REQUEST_HEADER ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (struct mpt_softc*) ;
 int FUNC_7 (struct mpt_softc*) ;
 int FUNC_8 (struct mpt_softc*,char*,...) ;
 int FUNC_9 (struct mpt_softc*,int ) ;
 int FUNC_10 (struct mpt_softc*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (union ccb*,int ) ;
 int FUNC_12 (struct mpt_softc*,TYPE_4__*,int ,int ,int ,int) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_13(struct mpt_softc *VAR_11)
{
 request_t *VAR_12;
 union ccb *VAR_13;
 int VAR_14;

 if (FUNC_0(&VAR_11->request_timeout_list) != 0) {



  FUNC_8(VAR_11, "mpt_recover_commands: no requests.\n");
  return;
 }




 FUNC_7(VAR_11);

 if (FUNC_0(&VAR_11->request_timeout_list) != 0) {
  FUNC_8(VAR_11, "Timedout requests already complete. "
      "Interrupts may not be functioning.\n");
  FUNC_6(VAR_11);
  return;
 }
 while ((VAR_12 = FUNC_1(&VAR_11->request_timeout_list)) != ((void*)0)) {
  uint16_t VAR_15;
  uint8_t VAR_16;
  MSG_REQUEST_HEADER *VAR_17 = VAR_12->req_vbuf;

  FUNC_8(VAR_11, "attempting to abort req %p:%u function %x\n",
      VAR_12, VAR_12->serno, VAR_17->Function);
  VAR_13 = VAR_12->ccb;
  if (VAR_13 == ((void*)0)) {
   FUNC_8(VAR_11, "null ccb in timed out request. "
       "Resetting Controller.\n");
   FUNC_9(VAR_11, VAR_8);
   continue;
  }
  FUNC_11(VAR_13, VAR_0);





  switch (VAR_17->Function) {
  case 128:
  case 129:
   break;
  default:



   FUNC_8(VAR_11, "just putting it back on the pend q\n");
   FUNC_3(&VAR_11->request_timeout_list, VAR_12, VAR_9);
   FUNC_2(&VAR_11->request_pending_list, VAR_12,
       VAR_9);
   continue;
  }

  VAR_14 = FUNC_10(VAR_11,
      VAR_5,
      0, 0, VAR_13->ccb_h.target_id, VAR_13->ccb_h.target_lun,
      FUNC_4(VAR_12->index | VAR_10), VAR_8);

  if (VAR_14 != 0) {





   continue;
  }

  VAR_14 = FUNC_12(VAR_11, VAR_11->tmf_req, VAR_6,
      VAR_6, VAR_8, 500);

  VAR_15 = FUNC_5(VAR_11->tmf_req->IOCStatus);
  VAR_16 = VAR_11->tmf_req->ResponseCode;
  VAR_11->tmf_req->state = VAR_7;

  if (VAR_14 != 0) {



   FUNC_8(VAR_11, "mpt_recover_commands: abort timed-out. "
       "Resetting controller\n");
   FUNC_9(VAR_11, VAR_8);
   continue;
  }

  if ((VAR_15 & VAR_1) != VAR_2) {
   FUNC_8(VAR_11, "mpt_recover_commands: IOC Status 0x%x. "
       "Resetting controller.\n", VAR_15);
   FUNC_9(VAR_11, VAR_8);
   continue;
  }

  if (VAR_16 != VAR_4 &&
      VAR_16 != VAR_3) {
   FUNC_8(VAR_11, "mpt_recover_commands: TMF Response 0x%x. "
       "Resetting controller.\n", VAR_16);
   FUNC_9(VAR_11, VAR_8);
   continue;
  }
  FUNC_8(VAR_11, "abort of req %p:%u completed\n", VAR_12, VAR_12->serno);
 }
}
