
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usbmprops ;
struct imx_ehci_softc {int dev; } ;
typedef int ssize_t ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int * device_t ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct imx_ehci_softc *VAR_1)
{
 device_t VAR_2;
 pcell_t VAR_3[2];
 phandle_t VAR_4;
 ssize_t VAR_5;
 int VAR_6;


 VAR_4 = FUNC_4(VAR_1->dev);
 VAR_5 = FUNC_1(VAR_4, "fsl,usbmisc", VAR_3,
     sizeof(VAR_3));
 if (VAR_5 < sizeof(VAR_3)) {
  FUNC_2(VAR_1->dev, "failed to retrieve fsl,usbmisc "
     "property, cannot disable overcurrent protection");
  return;
 }

 VAR_2 = FUNC_0(VAR_3[0]);
 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_1->dev, "usbmisc device not found, "
      "cannot disable overcurrent protection");
  return;
 }

 VAR_6 = VAR_3[1];
 FUNC_3(VAR_2, VAR_6, VAR_0);
}
