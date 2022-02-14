
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_usb_phy_softc {int * res; } ;
typedef int phandle_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 struct mtk_usb_phy_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct mtk_usb_phy_softc *VAR_2 = FUNC_2(VAR_1);
 phandle_t VAR_3;


 VAR_3 = FUNC_5(VAR_1);


 if (FUNC_0(VAR_3, "resets"))
  FUNC_4(VAR_1);


 if (FUNC_0(VAR_3, "clocks"))
  FUNC_3(VAR_1);


 if (VAR_2->res != ((void*)0))
  FUNC_1(VAR_1, VAR_0, 0, VAR_2->res);

 return (0);
}
