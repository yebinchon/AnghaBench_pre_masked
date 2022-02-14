
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
struct TYPE_7__ {int bdev; } ;
struct TYPE_8__ {TYPE_1__ sc_bus; } ;
typedef TYPE_2__ ehci_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_5(ehci_softc_t *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;

 FUNC_1(VAR_4, VAR_1, 0);
 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  FUNC_4(((void*)0), VAR_3 / 128);
  VAR_5 = FUNC_0(VAR_4, VAR_2) & VAR_0;
  if (VAR_5)
   break;
 }
 if (!VAR_5)





  FUNC_2(VAR_4->sc_bus.bdev, "stop timeout\n");

 return (FUNC_3(VAR_4));
}
