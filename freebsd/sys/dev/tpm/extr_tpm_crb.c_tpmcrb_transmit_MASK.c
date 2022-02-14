
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpmcrb_sc {size_t cmd_buf_size; scalar_t__ rsp_off; int cmd_off; } ;
struct tpm_sc {int pending_data_length; int * buf; int mem_res; int dev; int dev_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tpm_sc*,int ,int) ;
 int FUNC_1 (struct tpm_sc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct tpm_sc*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,scalar_t__,int *,int) ;
 int FUNC_6 (int ,int ,int *,size_t) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct tpm_sc*,int ,int,int,int) ;
 int FUNC_11 (struct tpm_sc*) ;
 int FUNC_12 (struct tpm_sc*) ;
 int FUNC_13 (struct tpm_sc*,int ) ;

int
FUNC_14(struct tpm_sc *VAR_17, size_t VAR_18)
{
 struct tpmcrb_sc *VAR_19;
 uint32_t VAR_20, VAR_21;
 int VAR_22, VAR_23;

 VAR_19 = (struct tpmcrb_sc *)VAR_17;

 FUNC_8(&VAR_17->dev_lock, VAR_3);

 if (VAR_18 > VAR_19->cmd_buf_size) {
  FUNC_7(VAR_17->dev,
      "Requested transfer is bigger than buffer size\n");
  return (VAR_1);
 }

 if (FUNC_1(VAR_17, VAR_12) & VAR_13) {
  FUNC_7(VAR_17->dev,
      "Device has Error bit set\n");
  return (VAR_2);
 }
 if (!FUNC_13(VAR_17, 0)) {
  FUNC_7(VAR_17->dev,
      "Failed to obtain locality\n");
  return (VAR_2);
 }

 FUNC_2(VAR_17, VAR_5, !VAR_6);


 if (!(FUNC_1(VAR_17, VAR_12) & VAR_14)) {
  FUNC_0(VAR_17, VAR_7, VAR_8);

  VAR_20 = VAR_14;
  if (!FUNC_10(VAR_17, VAR_12,
       VAR_20, VAR_20, VAR_16)) {
   FUNC_7(VAR_17->dev,
       "Failed to transition to idle state\n");
   return (VAR_2);
  }
 }

 FUNC_0(VAR_17, VAR_7, VAR_9);

 VAR_20 = VAR_9;
 if (!FUNC_10(VAR_17, VAR_12,
      VAR_20, !VAR_20, VAR_16)) {
  FUNC_7(VAR_17->dev,
      "Failed to transition to ready state\n");
  return (VAR_2);
 }





 VAR_21 = FUNC_3(*(uint32_t *) (&VAR_17->buf[6]));
 VAR_22 = FUNC_9(VAR_21);


 FUNC_6(VAR_17->mem_res, VAR_19->cmd_off,
     VAR_17->buf, VAR_18);
 FUNC_4(VAR_17->mem_res, VAR_19->cmd_off,
     VAR_18, VAR_0);

 FUNC_2(VAR_17, VAR_10, VAR_11);
 FUNC_4(VAR_17->mem_res, VAR_10,
     4, VAR_0);

 VAR_20 = ~0;
 if (!FUNC_10(VAR_17, VAR_10, VAR_20, ~VAR_20, VAR_22)) {
  FUNC_7(VAR_17->dev,
      "Timeout while waiting for device to process cmd\n");
  if (!FUNC_11(VAR_17))
   return (VAR_2);
 }


 FUNC_5(VAR_17->mem_res, VAR_19->rsp_off,
     VAR_17->buf, VAR_15);
 VAR_23 = FUNC_3(*(uint32_t *) (&VAR_17->buf[2]));

 if (VAR_23 > VAR_4 || VAR_23 < VAR_15) {
  FUNC_7(VAR_17->dev,
      "Incorrect response size: %d\n",
      VAR_23);
  return (VAR_2);
 }

 FUNC_5(VAR_17->mem_res, VAR_19->rsp_off + VAR_15,
       &VAR_17->buf[VAR_15], VAR_23 - VAR_15);

 FUNC_0(VAR_17, VAR_7, VAR_8);

 FUNC_12(VAR_17);
 VAR_17->pending_data_length = VAR_23;

 return (0);
}
