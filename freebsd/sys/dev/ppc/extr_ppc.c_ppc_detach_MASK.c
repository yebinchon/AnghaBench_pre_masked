
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_data {scalar_t__ res_irq; scalar_t__ res_ioport; scalar_t__ res_drq; int ppc_lock; int rid_drq; int rid_ioport; int rid_irq; int intr_cookie; } ;
typedef int device_t ;


 struct ppc_data* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(device_t VAR_4)
{
 struct ppc_data *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->res_irq == 0) {
  return (VAR_0);
 }


 FUNC_3(VAR_4);

 if (VAR_5->res_irq != 0) {
  FUNC_2(VAR_4, VAR_5->res_irq, VAR_5->intr_cookie);
  FUNC_1(VAR_4, VAR_3, VAR_5->rid_irq,
         VAR_5->res_irq);
 }
 if (VAR_5->res_ioport != 0) {
  FUNC_1(VAR_4, VAR_2, VAR_5->rid_ioport,
         VAR_5->res_ioport);
 }
 if (VAR_5->res_drq != 0) {
  FUNC_1(VAR_4, VAR_1, VAR_5->rid_drq,
         VAR_5->res_drq);
 }

 FUNC_4(&VAR_5->ppc_lock);

 return (0);
}
