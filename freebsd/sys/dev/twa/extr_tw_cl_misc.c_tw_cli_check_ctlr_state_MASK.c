
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {scalar_t__ device_id; struct tw_cl_ctlr_handle* ctlr_handle; int reset_in_progress; int reset_phase1_in_progress; } ;
struct tw_cl_ctlr_handle {int dummy; } ;
typedef int TW_UINT32 ;
typedef int TW_INT8 ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct tw_cl_ctlr_handle*,int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct tw_cl_ctlr_handle*,int ,int ,int,int,int ,char*,char*,int,int ) ;
 int FUNC_2 (int,struct tw_cl_ctlr_handle*,int ,char*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct tw_cl_ctlr_handle*,int ,int ,int) ;

TW_INT32
FUNC_7(struct tw_cli_ctlr_context *VAR_18, TW_UINT32 VAR_19)
{
 struct tw_cl_ctlr_handle *VAR_20 = VAR_18->ctlr_handle;
 TW_INT32 VAR_21 = VAR_17;

 FUNC_2(8, VAR_18->ctlr_handle, FUNC_4(), "entered");


 if (!(VAR_19 & VAR_5)) {
  TW_INT8 VAR_22[200];

  FUNC_5(VAR_22, 200);
  if (!(VAR_18->reset_phase1_in_progress)) {
   FUNC_1(VAR_20, VAR_13,
    VAR_14,
    0x1301, 0x1, VAR_15,
    "Missing expected status bit(s)",
    "status reg = 0x%x; Missing bits: %s",
    VAR_19,
    FUNC_3(
     VAR_5,
     VAR_22));
   VAR_21 = VAR_16;
  }
 }


 if ((VAR_19 & VAR_9) != 0) {
  TW_INT8 VAR_23[200];

  FUNC_5(VAR_23, 200);


  if (((VAR_18->device_id != VAR_11) &&
       (VAR_18->device_id != VAR_12)) ||
      (!(VAR_18->reset_in_progress)) ||
      ((VAR_19 & VAR_8) == 0))
  FUNC_1(VAR_20, VAR_13,
   VAR_14,
   0x1302, 0x1, VAR_15,
   "Unexpected status bit(s)",
   "status reg = 0x%x Unexpected bits: %s",
   VAR_19 & VAR_9,
   FUNC_3(VAR_19 &
    VAR_9, VAR_23));

  if (VAR_19 & VAR_7) {
   FUNC_1(VAR_20, VAR_13,
    VAR_14,
    0x1303, 0x1, VAR_15,
    "PCI parity error: clearing... "
    "Re-seat/move/replace card",
    "status reg = 0x%x %s",
    VAR_19,
    FUNC_3(VAR_19, VAR_23));
   FUNC_0(VAR_18->ctlr_handle,
    VAR_0);







  }

  if (VAR_19 & VAR_6) {
   FUNC_1(VAR_20, VAR_13,
    VAR_14,
    0x1304, 0x1, VAR_15,
    "PCI abort: clearing... ",
    "status reg = 0x%x %s",
    VAR_19,
    FUNC_3(VAR_19, VAR_23));
   FUNC_0(VAR_18->ctlr_handle,
    VAR_1);







  }

  if (VAR_19 & VAR_8) {

   if (((VAR_18->device_id != VAR_11) &&
        (VAR_18->device_id != VAR_12)) ||
       (!(VAR_18->reset_in_progress)))
    FUNC_1(VAR_20, VAR_13,
         VAR_14,
         0x1305, 0x1, VAR_15,
         "Controller queue error: clearing... ",
         "status reg = 0x%x %s",
         VAR_19,
         FUNC_3(VAR_19, VAR_23));
   FUNC_0(VAR_18->ctlr_handle,
    VAR_2);
  }
 }
 return(VAR_21);
}
