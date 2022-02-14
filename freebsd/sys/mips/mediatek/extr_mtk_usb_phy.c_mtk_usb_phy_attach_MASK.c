
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtk_usb_phy_softc {int socid; int * res; int sr_coef; int u2_base; int fm_base; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 struct mtk_usb_phy_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_13)
{
 struct mtk_usb_phy_softc * VAR_14 = FUNC_4(VAR_13);
 phandle_t VAR_15;
 uint32_t VAR_16;
 int VAR_17;

 VAR_14->dev = VAR_13;


 VAR_15 = FUNC_13(VAR_13);



 VAR_16 = FUNC_9(VAR_11);
 if (FUNC_1(VAR_15, "mtk,usb-device"))
  VAR_16 &= ~VAR_10;
 else
  VAR_16 |= VAR_10;
 FUNC_10(VAR_11, VAR_16);


 if (FUNC_1(VAR_15, "clocks"))
  FUNC_6(VAR_13);


 if (FUNC_1(VAR_15, "resets")) {
  FUNC_7(VAR_13);
  FUNC_0(VAR_7);
  FUNC_8(VAR_13);
  FUNC_0(VAR_8);
 }


 if (FUNC_1(VAR_15, "reg")) {
  VAR_17 = 0;
  VAR_14->res = FUNC_2(VAR_13, VAR_12, &VAR_17,
      VAR_9);
  if (VAR_14->res == ((void*)0)) {
   FUNC_5(VAR_13, "could not map memory\n");
   return (VAR_0);
  }
 } else {
  VAR_14->res = ((void*)0);
 }


 switch (VAR_14->socid) {
 case 129:
 case 128:
  if (VAR_14->res == ((void*)0))
   return (VAR_0);
  VAR_14->fm_base = VAR_4;
  VAR_14->u2_base = VAR_6;
  VAR_14->sr_coef = VAR_5;
  FUNC_12(VAR_13);
  break;
 case 130:
  if (VAR_14->res == ((void*)0))
   return (VAR_0);
  VAR_14->fm_base = VAR_1;
  VAR_14->u2_base = VAR_3;
  VAR_14->sr_coef = VAR_2;
  FUNC_11(VAR_13);
  break;
 }


 if (VAR_14->res != ((void*)0))
  FUNC_3(VAR_13, VAR_12, 0, VAR_14->res);

 return (0);
}
