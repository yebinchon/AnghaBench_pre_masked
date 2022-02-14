
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {scalar_t__ device_id; int io_lock; int reset_phase1_in_progress; struct tw_cl_ctlr_handle* ctlr_handle; } ;
struct tw_cl_ctlr_handle {int dummy; } ;
typedef int TW_UINT32 ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tw_cl_ctlr_handle*) ;
 int FUNC_1 (struct tw_cl_ctlr_handle*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (struct tw_cl_ctlr_handle*,int ,int ,int,int,int ,char*,char*,...) ;
 int FUNC_3 (int,struct tw_cl_ctlr_handle*,int ,char*) ;
 int FUNC_4 (struct tw_cli_ctlr_context*) ;
 int FUNC_5 (struct tw_cli_ctlr_context*) ;
 int FUNC_6 (struct tw_cli_ctlr_context*,int ) ;
 scalar_t__ FUNC_7 (struct tw_cli_ctlr_context*,int ) ;
 int FUNC_8 (struct tw_cli_ctlr_context*,int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct tw_cl_ctlr_handle*,int ) ;
 int FUNC_12 (struct tw_cl_ctlr_handle*,int ) ;

TW_INT32
FUNC_13(struct tw_cli_ctlr_context *VAR_17)
{
 struct tw_cl_ctlr_handle *VAR_18 = VAR_17->ctlr_handle;
 int VAR_19;
 int VAR_20;
 TW_UINT32 VAR_21;

 FUNC_3(1, VAR_18, FUNC_9(), "entered");

 FUNC_2(VAR_18, VAR_10,
  VAR_12,
  0x1108, 0x3, VAR_14,
  "Resetting controller...",
  " ");


 FUNC_12(VAR_18, VAR_17->io_lock);

 FUNC_0(VAR_18);

 if ((VAR_17->device_id == VAR_9) ||
     (VAR_17->device_id == VAR_7) ||
     (VAR_17->device_id == VAR_8)) {
  VAR_17->reset_phase1_in_progress = VAR_15;
  VAR_20 = 0;
  do {
   VAR_19 = (FUNC_7(VAR_17, VAR_2) == VAR_16);
   FUNC_10(10);
   VAR_20++;
   VAR_21 = 0x7888;
  } while (!VAR_19 && (VAR_20 < 6000000));

  if (!VAR_19) {
   FUNC_2(VAR_18, VAR_10,
    VAR_12,
    0x1109, 0x1, VAR_13,
    "Missed firmware handshake after soft-reset",
    "error = %d", VAR_21);
   FUNC_11(VAR_18, VAR_17->io_lock);
   return(VAR_21);
  }

  FUNC_10(VAR_3 * 1000);
  VAR_17->reset_phase1_in_progress = VAR_10;
 }

 if ((VAR_21 = FUNC_8(VAR_17,
   VAR_5 |
   VAR_4,
   VAR_6))) {
  FUNC_2(VAR_18, VAR_10,
   VAR_12,
   0x1109, 0x1, VAR_13,
   "Micro-ctlr not ready/No attn intr after reset",
   "error = %d", VAR_21);
  FUNC_11(VAR_18, VAR_17->io_lock);
  return(VAR_21);
 }

 FUNC_1(VAR_18,
  VAR_1);

 if ((VAR_21 = FUNC_5(VAR_17))) {
  FUNC_2(VAR_18, VAR_10,
   VAR_11,
   0x110A, 0x1, VAR_13,
   "Can't drain response queue after reset",
   "error = %d", VAR_21);
  FUNC_11(VAR_18, VAR_17->io_lock);
  return(VAR_21);
 }

 FUNC_11(VAR_18, VAR_17->io_lock);

 if ((VAR_21 = FUNC_4(VAR_17))) {
  FUNC_2(VAR_18, VAR_10,
   VAR_11,
   0x110B, 0x1, VAR_13,
   "Can't drain AEN queue after reset",
   "error = %d", VAR_21);
  return(VAR_21);
 }

 if ((VAR_21 = FUNC_6(VAR_17, VAR_0))) {
  FUNC_2(VAR_18, VAR_10,
   VAR_12,
   0x110C, 0x1, VAR_13,
   "Reset not reported by controller",
   "error = %d", VAR_21);
  return(VAR_21);
 }

 return(VAR_16);
}
