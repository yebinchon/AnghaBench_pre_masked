
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenpci_softc {int dummy; } ;
typedef int device_t ;


 struct xenpci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct xenpci_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct xenpci_softc *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_0, "xenpci_allocate_resources failed(%d).\n",
      VAR_2);
  goto errexit;
 }




 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_0, "xenpci_irq_init failed(%d).\n",
   VAR_2);
  goto errexit;
 }

 return (0);

errexit:



 FUNC_3(VAR_0);
 return (VAR_2);
}
