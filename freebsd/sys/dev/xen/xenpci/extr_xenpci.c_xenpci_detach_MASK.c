
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenpci_softc {int * intr_cookie; int res_irq; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 struct xenpci_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct xenpci_softc *VAR_1 = FUNC_2(VAR_0);
 device_t VAR_2 = FUNC_1(VAR_0);





 if (VAR_1->intr_cookie != ((void*)0)) {
  if (FUNC_0(VAR_2, VAR_0,
      VAR_1->res_irq, VAR_1->intr_cookie) != 0)
   FUNC_3(VAR_0,
       "intr teardown failed.. continuing\n");
  VAR_1->intr_cookie = ((void*)0);
 }





 return (FUNC_4(VAR_0));
}
