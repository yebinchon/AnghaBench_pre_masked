
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_usbmisc_softc {int * mmio; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ,int ,int*,int ) ;
 struct imx_usbmisc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct imx_usbmisc_softc *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = 0;


 VAR_6 = 0;
 VAR_4->mmio = FUNC_2(VAR_3, VAR_2, &VAR_6,
     VAR_1);
 if (VAR_4->mmio == ((void*)0)) {
  FUNC_4(VAR_3, "Cannot allocate memory resources\n");
  return (VAR_0);
 }

 FUNC_0(FUNC_1(FUNC_5(VAR_3)), VAR_3);

 return (0);
}
