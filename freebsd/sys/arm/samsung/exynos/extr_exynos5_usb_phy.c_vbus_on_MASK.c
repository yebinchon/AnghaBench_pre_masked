
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy_softc {int dev; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int,char*,int *,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct usb_phy_softc *VAR_2)
{
 pcell_t VAR_3[3];
 device_t VAR_4;
 phandle_t VAR_5;
 pcell_t VAR_6;
 int VAR_7;

 if ((VAR_5 = FUNC_7(VAR_2->dev)) == -1)
  return (-1);


 if ((VAR_7 = FUNC_3(VAR_5, "vbus-supply")) <= 0)
  return (-1);
 FUNC_2(VAR_5, "vbus-supply", VAR_3, VAR_7);
 VAR_6 = VAR_3[0];

 VAR_4 = FUNC_5(FUNC_4("gpio"), 0);
 if (VAR_4 == ((void*)0)) {
  FUNC_6(VAR_2->dev, "can't find gpio_dev\n");
  return (1);
 }

 FUNC_1(VAR_4, VAR_6, VAR_1);
 FUNC_0(VAR_4, VAR_6, VAR_0);

 return (0);
}
