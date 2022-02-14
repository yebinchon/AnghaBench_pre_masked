
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_sc {int interrupts; int intr_type; int transmit; int intr_cookie; int * irq_res; scalar_t__ irq_rid; int * mem_res; scalar_t__ mem_rid; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *,int ,struct tpm_sc*,int *) ;
 struct tpm_sc* FUNC_2 (int ) ;
 int FUNC_3 (struct tpm_sc*) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (struct tpm_sc*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_9)
{
 struct tpm_sc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_9);
 VAR_10->dev = VAR_9;

 VAR_10->mem_rid = 0;
 VAR_10->mem_res = FUNC_0(VAR_9, VAR_6, &VAR_10->mem_rid,
      VAR_3);
 if (VAR_10->mem_res == ((void*)0))
  return (VAR_0);

 VAR_10->irq_rid = 0;
 VAR_10->irq_res = FUNC_0(VAR_9, VAR_5, &VAR_10->irq_rid,
      VAR_3 | VAR_4);
 if (VAR_10->irq_res != ((void*)0)) {
  if (FUNC_1(VAR_9, VAR_10->irq_res, VAR_2 | VAR_1,
      ((void*)0), VAR_7, VAR_10, &VAR_10->intr_cookie))
   VAR_10->interrupts = 0;
  else
   VAR_10->interrupts = FUNC_5(VAR_10);
 } else {
  VAR_10->interrupts = 0;
 }

 VAR_10->intr_type = -1;

 VAR_10->transmit = VAR_8;

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11 != 0)
  FUNC_4(VAR_9);

 return (VAR_11);
}
