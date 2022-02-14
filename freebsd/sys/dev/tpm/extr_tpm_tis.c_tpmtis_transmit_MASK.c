
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpm_sc {size_t pending_data_length; int dev; int * buf; void* intr_type; int mem_res; int dev_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_sc*,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct tpm_sc*,int ,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct tpm_sc*,int ,int,int,int) ;
 int FUNC_8 (struct tpm_sc*) ;
 int FUNC_9 (struct tpm_sc*,size_t,int *) ;
 int FUNC_10 (struct tpm_sc*) ;
 int FUNC_11 (struct tpm_sc*,int ) ;
 int FUNC_12 (struct tpm_sc*,size_t,int *) ;

__attribute__((used)) static int
FUNC_13(struct tpm_sc *VAR_13, size_t VAR_14)
{
 size_t VAR_15;
 uint32_t VAR_16, VAR_17;
 int VAR_18;

 FUNC_5(&VAR_13->dev_lock, VAR_2);

 if (!FUNC_11(VAR_13, 0)) {
  FUNC_4(VAR_13->dev,
      "Failed to obtain locality\n");
  return (VAR_1);
 }
 if (!FUNC_8(VAR_13)) {
  FUNC_4(VAR_13->dev,
      "Failed to switch to ready state\n");
  return (VAR_1);
 }
 if (!FUNC_12(VAR_13, VAR_14, VAR_13->buf)) {
  FUNC_4(VAR_13->dev,
      "Failed to write cmd to device\n");
  return (VAR_1);
 }

 VAR_16 = VAR_11;
 VAR_13->intr_type = VAR_6;
 if (!FUNC_7(VAR_13, VAR_7, VAR_16, VAR_16, VAR_12)) {
  FUNC_4(VAR_13->dev,
      "Timeout while waiting for valid bit\n");
  return (VAR_1);
 }
 if (FUNC_0(VAR_13, VAR_7) & VAR_10) {
  FUNC_4(VAR_13->dev,
      "Device expects more data even though we already"
      " sent everything we had\n");
  return (VAR_1);
 }





 VAR_17 = FUNC_2(*(uint32_t *) (&VAR_13->buf[6]));
 VAR_18 = FUNC_6(VAR_17);

 FUNC_1(VAR_13, VAR_7, VAR_8);
 FUNC_3(VAR_13->mem_res, VAR_7, 4, VAR_0);

 VAR_16 = VAR_9 | VAR_11;
 VAR_13->intr_type = VAR_5;
 if (!FUNC_7(VAR_13, VAR_7, VAR_16, VAR_16, VAR_18)) {
  FUNC_4(VAR_13->dev,
      "Timeout while waiting for device to process cmd\n");




  if (!FUNC_8(VAR_13))
   return (VAR_1);





  VAR_13->intr_type = VAR_5;
  if (!FUNC_7(VAR_13, VAR_7, VAR_16, VAR_16, VAR_12))
   return (VAR_1);
 }

 if(!FUNC_9(VAR_13, VAR_4, VAR_13->buf)) {
  FUNC_4(VAR_13->dev,
      "Failed to read response header\n");
  return (VAR_1);
 }
 VAR_15 = FUNC_2(*(uint32_t *) (&VAR_13->buf[2]));

 if (VAR_15 > VAR_3 || VAR_15 < VAR_4) {
  FUNC_4(VAR_13->dev,
      "Incorrect response size: %zu\n",
      VAR_15);
  return (VAR_1);
 }
 if(!FUNC_9(VAR_13, VAR_15 - VAR_4,
     &VAR_13->buf[VAR_4])) {
  FUNC_4(VAR_13->dev,
      "Failed to read response\n");
  return (VAR_1);
 }
 FUNC_10(VAR_13);
 VAR_13->pending_data_length = VAR_15;

 return (0);
}
