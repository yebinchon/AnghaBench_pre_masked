
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_sc {int * mem_res; int mem_rid; int * irq_res; int irq_rid; int * intr_cookie; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 struct tpm_sc* FUNC_2 (int ) ;
 int FUNC_3 (struct tpm_sc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct tpm_sc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 FUNC_3(VAR_3);

 if (VAR_3->intr_cookie != ((void*)0))
  FUNC_1(VAR_2, VAR_3->irq_res, VAR_3->intr_cookie);

 if (VAR_3->irq_res != ((void*)0))
  FUNC_0(VAR_2, VAR_0,
      VAR_3->irq_rid, VAR_3->irq_res);

 if (VAR_3->mem_res != ((void*)0))
  FUNC_0(VAR_2, VAR_1,
      VAR_3->mem_rid, VAR_3->mem_res);

 return (0);
}
