
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_usbmisc_softc {int * mmio; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct imx_usbmisc_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct imx_usbmisc_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->mmio != ((void*)0))
  FUNC_0(VAR_1, VAR_0, 0, VAR_2->mmio);

 return (0);
}
