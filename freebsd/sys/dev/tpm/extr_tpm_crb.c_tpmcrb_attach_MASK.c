
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tpm_sc {int interrupts; int transmit; int dev; int * mem_res; scalar_t__ mem_rid; } ;
struct tpmcrb_sc {int rsp_off; int cmd_off; scalar_t__ cmd_buf_size; scalar_t__ rsp_buf_size; struct tpm_sc base; } ;
typedef int device_t ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tpm_sc*,int ,int ) ;
 int FUNC_2 (int ,char*,int ,void*) ;
 int VAR_0 ;
 void* FUNC_3 (struct tpm_sc*,int ) ;
 int FUNC_4 (struct tpm_sc*,int ) ;
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
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int ,scalar_t__*,int ) ;
 int FUNC_7 (int ,int ,scalar_t__,int *) ;
 struct tpmcrb_sc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct tpm_sc*) ;
 int FUNC_11 (int ) ;
 int VAR_11 ;
 int FUNC_12 (struct tpm_sc*) ;
 int FUNC_13 (struct tpm_sc*,int ) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_13)
{
 struct tpmcrb_sc *VAR_14;
 struct tpm_sc *VAR_15;
 ACPI_HANDLE VAR_16;
 ACPI_STATUS VAR_17;
 int VAR_18;

 VAR_14 = FUNC_8(VAR_13);
 VAR_15 = &VAR_14->base;
 VAR_16 = FUNC_5(VAR_13);

 VAR_15->dev = VAR_13;

 VAR_15->mem_rid = 0;
 VAR_15->mem_res = FUNC_6(VAR_13, VAR_2, &VAR_15->mem_rid,
          VAR_1);
 if (VAR_15->mem_res == ((void*)0))
  return (VAR_0);

 if(!FUNC_13(VAR_15, 0)) {
  FUNC_7(VAR_13, VAR_2,
      VAR_15->mem_rid, VAR_15->mem_res);
  return (VAR_0);
 }





 FUNC_1(VAR_15, VAR_9, ~VAR_10);
 VAR_15->interrupts = 0;
 VAR_14->rsp_off = FUNC_4(VAR_15, VAR_6);




 VAR_14->cmd_off = FUNC_3(VAR_15, VAR_4);
 VAR_14->cmd_off |= ((uint64_t) FUNC_3(VAR_15, VAR_3) << 32);
 VAR_14->cmd_buf_size = FUNC_3(VAR_15, VAR_5);
 VAR_14->rsp_buf_size = FUNC_3(VAR_15, VAR_8);

 FUNC_12(VAR_15);


 VAR_17 = FUNC_2(VAR_16, "_CRS", VAR_11,
      (void *)VAR_14);
 if (FUNC_0(VAR_17)) {
  FUNC_11(VAR_13);
  return (VAR_0);
 }

 if (VAR_14->rsp_off == VAR_14->cmd_off) {




  if (VAR_14->cmd_buf_size != VAR_14->rsp_buf_size) {
   FUNC_9(VAR_15->dev,
       "Overlapping Tx/Rx buffers have different sizes\n");
   FUNC_11(VAR_13);
   return (VAR_0);
  }
 }

 VAR_15->transmit = VAR_12;

 VAR_18 = FUNC_10(VAR_15);
 if (VAR_18 != 0)
  FUNC_11(VAR_13);

 return (VAR_18);
}
