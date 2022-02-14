
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_sb_info {int mid; scalar_t__ state; int conn_error; int xmitq; } ;
struct smb_request {scalar_t__* rq_header; int rq_flags; scalar_t__ rq_rcls; int rq_errno; int rq_err; int rq_mid; int rq_queue; int rq_wait; int * rq_buffer; scalar_t__ rq_trans2_command; struct smb_sb_info* rq_server; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int VAR_8 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (struct smb_request*) ;
 int VAR_9 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_10 ;
 int FUNC_9 (struct smb_request*) ;
 int VAR_11 ;
 int FUNC_10 (struct smb_sb_info*) ;
 scalar_t__ FUNC_11 (struct smb_sb_info*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (struct smb_request*) ;
 int FUNC_13 (struct smb_request*) ;
 int FUNC_14 (struct smb_request*) ;
 int FUNC_15 (struct smb_request*) ;
 int FUNC_16 (struct smb_request*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_17 (struct smb_sb_info*) ;
 int VAR_17 ;
 int FUNC_18 (struct smb_sb_info*) ;
 int FUNC_19 () ;
 long FUNC_20 (int ,int,int) ;

int FUNC_21(struct smb_request *VAR_18)
{
 long VAR_19;
 struct smb_sb_info *VAR_20 = VAR_18->rq_server;
 int VAR_21 = 0;

 FUNC_15(VAR_18);
 if (VAR_18->rq_trans2_command) {
  if (VAR_18->rq_buffer == ((void*)0)) {
   FUNC_0("trans2 attempted without response buffer!\n");
   return -VAR_3;
  }
  VAR_21 = FUNC_16(VAR_18);
 }
 if (VAR_21 < 0)
  return VAR_21;






 if (FUNC_11(VAR_20))
  return -VAR_2;
 if (VAR_20->mid > 0xf000)
  VAR_20->mid = 0;
 VAR_18->rq_mid = VAR_20->mid++;
 FUNC_2(VAR_18->rq_header, VAR_12, VAR_18->rq_mid);

 VAR_21 = 0;
 if (VAR_20->state == VAR_1) {
  if (FUNC_7(&VAR_20->xmitq))
   VAR_21 = FUNC_12(VAR_18);
  if (VAR_21 < 0) {

   VAR_20->conn_error = VAR_21;
   VAR_20->state = VAR_0;
  }
 }
 if (VAR_21 != 1)
  FUNC_5(&VAR_18->rq_queue, &VAR_20->xmitq);
 FUNC_13(VAR_18);

 if (VAR_20->state != VAR_1)
  FUNC_18(VAR_20);

 FUNC_17(VAR_20);

 FUNC_19();

 VAR_19 = FUNC_20(VAR_18->rq_wait,
        VAR_18->rq_flags & VAR_8, 30*VAR_7);
 if (!VAR_19 || FUNC_8(VAR_9)) {






  FUNC_10(VAR_20);
  if (!FUNC_7(&VAR_18->rq_queue)) {
   FUNC_6(&VAR_18->rq_queue);
   FUNC_14(VAR_18);
  }
  FUNC_17(VAR_20);
 }

 if (!VAR_19) {
  FUNC_0("request [%p, mid=%d] timed out!\n",
    VAR_18, VAR_18->rq_mid);
  FUNC_1("smb_com:  %02x\n", *(VAR_18->rq_header + VAR_10));
  FUNC_1("smb_rcls: %02x\n", *(VAR_18->rq_header + VAR_14));
  FUNC_1("smb_flg:  %02x\n", *(VAR_18->rq_header + VAR_11));
  FUNC_1("smb_tid:  %04x\n", FUNC_3(VAR_18->rq_header, VAR_15));
  FUNC_1("smb_pid:  %04x\n", FUNC_3(VAR_18->rq_header, VAR_13));
  FUNC_1("smb_uid:  %04x\n", FUNC_3(VAR_18->rq_header, VAR_16));
  FUNC_1("smb_mid:  %04x\n", FUNC_3(VAR_18->rq_header, VAR_12));
  FUNC_1("smb_wct:  %02x\n", *(VAR_18->rq_header + VAR_17));

  VAR_18->rq_rcls = VAR_5;
  VAR_18->rq_err = VAR_6;


  FUNC_19();
 }
 FUNC_1("woke up, rcls=%d\n", VAR_18->rq_rcls);

 if (VAR_18->rq_rcls != 0)
  VAR_18->rq_errno = FUNC_9(VAR_18);
 if (FUNC_8(VAR_9))
  VAR_18->rq_errno = -VAR_4;
 return VAR_18->rq_errno;
}
