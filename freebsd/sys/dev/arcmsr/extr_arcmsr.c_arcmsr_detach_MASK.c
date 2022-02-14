
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int isr_lock; int psim; int ppath; int ** sys_res_arcmsr; int * rid; int devmap_callout; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct AdapterControlBlock*) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(device_t VAR_3)
{
 struct AdapterControlBlock *VAR_4=(struct AdapterControlBlock *)FUNC_10(VAR_3);
 int VAR_5;

 FUNC_7(&VAR_4->devmap_callout);
 FUNC_5(VAR_3, VAR_4);
 FUNC_4(VAR_3);
 FUNC_2(VAR_4);
 for(VAR_5=0; (VAR_4->sys_res_arcmsr[VAR_5]!=((void*)0)) && (VAR_5<2); VAR_5++) {
  FUNC_6(VAR_3, VAR_1, VAR_4->rid[VAR_5], VAR_4->sys_res_arcmsr[VAR_5]);
 }
 FUNC_0(&VAR_4->isr_lock);
 FUNC_11(VAR_0, VAR_4->ppath, ((void*)0));
 FUNC_13(VAR_4->ppath);
 FUNC_12(FUNC_9(VAR_4->psim));
 FUNC_8(VAR_4->psim, VAR_2);
 FUNC_1(&VAR_4->isr_lock);
 FUNC_3(VAR_4);
 return (0);
}
