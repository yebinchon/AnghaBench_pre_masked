
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {int ctlr_handle; } ;
typedef int TW_VOID ;
typedef int TW_UINT8 ;
typedef int TW_INT8 ;
typedef scalar_t__ TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,char*,char*,int *,int ,int *,int *) ;
 int FUNC_1 (int,int ,int ,char*) ;
 scalar_t__ FUNC_2 (struct tw_cli_ctlr_context*,int ,int ,int *,int,scalar_t__) ;
 int FUNC_3 () ;

TW_VOID
FUNC_4(struct tw_cli_ctlr_context *VAR_10)
{
 TW_INT8 VAR_11[16];
 TW_INT8 VAR_12[16];
 TW_INT8 VAR_13[16];
 TW_INT32 VAR_14[3];
 TW_UINT8 VAR_15 = 0;

 FUNC_1(5, VAR_10->ctlr_handle, FUNC_3(), "entered");


 VAR_14[0] = FUNC_2(VAR_10, VAR_1,
   VAR_0, &VAR_15,
   1, VAR_8);


 VAR_14[0] = FUNC_2(VAR_10, VAR_5,
   VAR_4, VAR_11, 16, VAR_8);
 VAR_14[1] = FUNC_2(VAR_10, VAR_5,
   VAR_3, VAR_12, 16, VAR_8);
 VAR_14[2] = FUNC_2(VAR_10, VAR_5,
   VAR_2, VAR_13, 16, VAR_8);

 FUNC_0(VAR_10->ctlr_handle, VAR_6,
  VAR_7,
  0x1300, 0x3, VAR_9,
  "Controller details:",
  "Model %.16s, %d ports, Firmware %.16s, BIOS %.16s",
  VAR_14[2]?(TW_INT8 *)VAR_8:VAR_13,
  VAR_15,
  VAR_14[0]?(TW_INT8 *)VAR_8:VAR_11,
  VAR_14[1]?(TW_INT8 *)VAR_8:VAR_12);
}
