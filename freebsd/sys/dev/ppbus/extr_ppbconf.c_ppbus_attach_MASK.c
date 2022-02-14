
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppb_data {int ppc_lock; int * ppc_irq_res; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,uintptr_t*) ;
 int FUNC_1 (int ,int ,int ,uintptr_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct ppb_data* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_11(device_t VAR_5)
{
 struct ppb_data *VAR_6 = FUNC_6(VAR_5);
 int VAR_7, VAR_8;

 VAR_7 = FUNC_0(FUNC_5(VAR_5), VAR_5, VAR_1,
     (uintptr_t *)&VAR_6->ppc_lock);
 if (VAR_7) {
  FUNC_7(VAR_5, "Unable to fetch parent's lock\n");
  return (VAR_7);
 }

 VAR_8 = 0;
 VAR_6->ppc_irq_res = FUNC_2(VAR_5, VAR_3, &VAR_8,
     VAR_2);
 if (VAR_6->ppc_irq_res != ((void*)0)) {
  FUNC_8(VAR_6->ppc_lock);
  VAR_7 = FUNC_1(FUNC_5(VAR_5), VAR_5,
      VAR_0, (uintptr_t)&VAR_4);
  FUNC_9(VAR_6->ppc_lock);
  if (VAR_7) {
   FUNC_7(VAR_5, "Unable to set interrupt handler\n");
   return (VAR_7);
  }
 }


 FUNC_4(VAR_5);



 FUNC_8(VAR_6->ppc_lock);
 FUNC_10(VAR_5);
 FUNC_9(VAR_6->ppc_lock);



 FUNC_3(VAR_5);

 return (0);
}
