
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct usb_phy_softc*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_5 (struct usb_phy_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct usb_phy_softc *VAR_27)
{
 int VAR_28;


 FUNC_5(VAR_27, VAR_22, 0);

 VAR_28 = FUNC_4(VAR_27, VAR_20);

 VAR_28 &= ~(VAR_11);
 VAR_28 &= ~(VAR_10);
 VAR_28 |= (VAR_9);
 FUNC_5(VAR_27, VAR_20, VAR_28);
 FUNC_5(VAR_27, VAR_23, 0);

 VAR_28 = (VAR_0 |
     FUNC_1(0x20));
 FUNC_5(VAR_27, VAR_18, VAR_28);

 VAR_28 = FUNC_4(VAR_27, VAR_21);
 VAR_28 &= ~(VAR_13);
 VAR_28 |= (VAR_12);
 FUNC_5(VAR_27, VAR_21, VAR_28);

 VAR_28 = FUNC_4(VAR_27, VAR_26);
 VAR_28 |= (VAR_16);
 FUNC_5(VAR_27, VAR_26, VAR_28);

 VAR_28 = FUNC_4(VAR_27, VAR_24);
 VAR_28 &= ~(VAR_14);
 VAR_28 &= ~(VAR_15);
 FUNC_5(VAR_27, VAR_24, VAR_28);

 FUNC_5(VAR_27, VAR_25, VAR_17);


 VAR_28 = (VAR_5);
 VAR_28 |= (FUNC_2(VAR_2));
 VAR_28 |= (VAR_3);
 VAR_28 |= (FUNC_3(0x88));
 VAR_28 |= (VAR_7 |
     VAR_6 |
     VAR_8 |
     VAR_1 |
     VAR_4);

 FUNC_5(VAR_27, VAR_19, VAR_28);
 FUNC_0(50000);
 VAR_28 &= ~VAR_4;
 FUNC_5(VAR_27, VAR_19, VAR_28);

 return (0);
}
