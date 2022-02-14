
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct gt_pci_softc {int * sc_intr_cookies; } ;
typedef int device_t ;


 struct gt_pci_softc* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct resource*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1, struct resource *VAR_2,
    void *VAR_3)
{
 struct gt_pci_softc *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2);
 FUNC_1((void *)&VAR_4->sc_intr_cookies[VAR_5]);

 return (FUNC_2(VAR_3));
}
