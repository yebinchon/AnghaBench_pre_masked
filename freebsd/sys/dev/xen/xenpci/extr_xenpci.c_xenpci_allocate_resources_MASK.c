
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenpci_softc {int * res_irq; int rid_irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,int *,int) ;
 struct xenpci_softc* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 struct xenpci_softc *VAR_5 = FUNC_1(VAR_4);

 VAR_5->res_irq = FUNC_0(VAR_4, VAR_3,
   &VAR_5->rid_irq, VAR_2|VAR_1);
 if (VAR_5->res_irq == ((void*)0)) {
  FUNC_2("xenpci Could not allocate irq.\n");
  goto errexit;
 }

 return (0);

errexit:

 FUNC_3(VAR_4);
 return (VAR_0);
}
