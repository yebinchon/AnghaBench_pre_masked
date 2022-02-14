
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u_int ;
struct vt_device {struct vga_softc* vd_softc; } ;
struct vga_softc {int vga_wmode; int vga_curfg; int vga_curbg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct vga_softc*,scalar_t__,int ) ;
 int FUNC_2 (struct vga_softc*,int ) ;
 int FUNC_3 (struct vga_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct vt_device*) ;

__attribute__((used)) static int
FUNC_7(struct vt_device *VAR_46, int VAR_47)
{
 struct vga_softc *VAR_48 = VAR_46->vd_softc;
 uint8_t VAR_49;
 int VAR_50;


 VAR_49 = FUNC_2(VAR_48, VAR_37);
 FUNC_3(VAR_48, VAR_38, VAR_49 | VAR_39);


 FUNC_3(VAR_48, VAR_14, VAR_28);
 VAR_49 = FUNC_2(VAR_48, VAR_20);
 FUNC_3(VAR_48, VAR_20, VAR_49 & ~VAR_29);
 VAR_50 = 10000;
 do {
  FUNC_0(10);
  VAR_49 = FUNC_2(VAR_48, VAR_34);
  VAR_49 &= VAR_36 | VAR_35;
 } while (VAR_49 != (VAR_36 | VAR_35) && --VAR_50 != 0);
 if (VAR_50 == 0) {
  FUNC_5("Timeout initializing vt_vga\n");
  return (VAR_0);
 }


 FUNC_3(VAR_48, VAR_14, VAR_22);
 VAR_49 = FUNC_2(VAR_48, VAR_20);
 FUNC_3(VAR_48, VAR_20, VAR_49 & ~VAR_21);


 FUNC_3(VAR_48, VAR_40, VAR_42);
 FUNC_3(VAR_48, VAR_41, VAR_44);

 if (!VAR_47)
  FUNC_6(VAR_46);

 FUNC_3(VAR_48, VAR_14, VAR_23);
 FUNC_3(VAR_48, VAR_20, 0);
 FUNC_3(VAR_48, VAR_14, VAR_19);
 FUNC_3(VAR_48, VAR_20, VAR_15);
 FUNC_3(VAR_48, VAR_14, VAR_16);
 FUNC_3(VAR_48, VAR_20, 0);
 FUNC_3(VAR_48, VAR_14, VAR_24);
 FUNC_3(VAR_48, VAR_20, 0);
 FUNC_3(VAR_48, VAR_14, VAR_25);
 FUNC_3(VAR_48, VAR_20, 0);
 FUNC_3(VAR_48, VAR_14, VAR_17);
 FUNC_3(VAR_48, VAR_20, 0);
 FUNC_3(VAR_48, VAR_14, VAR_18);
 FUNC_3(VAR_48, VAR_20, 0x59);
 FUNC_3(VAR_48, VAR_14, VAR_27);
 FUNC_3(VAR_48, VAR_20, VAR_26);

 if (VAR_47) {

  FUNC_3(VAR_48, VAR_13, VAR_5);
  FUNC_3(VAR_48, VAR_13, 0);
 } else {

  FUNC_3(VAR_48, VAR_13, VAR_5);
  FUNC_3(VAR_48, VAR_13, VAR_4);
  FUNC_3(VAR_48, VAR_13, VAR_3);
  FUNC_3(VAR_48, VAR_13, 0);
 }
 FUNC_3(VAR_48, VAR_13, FUNC_4(0));
 FUNC_3(VAR_48, VAR_13, 0);
 FUNC_3(VAR_48, VAR_13, FUNC_4(1));
 FUNC_3(VAR_48, VAR_13, VAR_7);
 FUNC_3(VAR_48, VAR_13, FUNC_4(2));
 FUNC_3(VAR_48, VAR_13, VAR_8);
 FUNC_3(VAR_48, VAR_13, FUNC_4(3));
 FUNC_3(VAR_48, VAR_13, VAR_8 | VAR_7);
 FUNC_3(VAR_48, VAR_13, FUNC_4(4));
 FUNC_3(VAR_48, VAR_13, VAR_9);
 FUNC_3(VAR_48, VAR_13, FUNC_4(5));
 FUNC_3(VAR_48, VAR_13, VAR_9 | VAR_7);
 FUNC_3(VAR_48, VAR_13, FUNC_4(6));
 FUNC_3(VAR_48, VAR_13, VAR_11 | VAR_9);
 FUNC_3(VAR_48, VAR_13, FUNC_4(7));
 FUNC_3(VAR_48, VAR_13, VAR_9 | VAR_8 | VAR_7);

 FUNC_3(VAR_48, VAR_13, FUNC_4(8));
 FUNC_3(VAR_48, VAR_13, VAR_12 | VAR_11 |
     VAR_10);
 FUNC_3(VAR_48, VAR_13, FUNC_4(9));
 FUNC_3(VAR_48, VAR_13, VAR_12 | VAR_11 |
     VAR_10 | VAR_7);
 FUNC_3(VAR_48, VAR_13, FUNC_4(10));
 FUNC_3(VAR_48, VAR_13, VAR_12 | VAR_11 |
     VAR_10 | VAR_8);
 FUNC_3(VAR_48, VAR_13, FUNC_4(11));
 FUNC_3(VAR_48, VAR_13, VAR_12 | VAR_11 |
     VAR_10 | VAR_8 | VAR_7);
 FUNC_3(VAR_48, VAR_13, FUNC_4(12));
 FUNC_3(VAR_48, VAR_13, VAR_12 | VAR_11 |
     VAR_10 | VAR_9);
 FUNC_3(VAR_48, VAR_13, FUNC_4(13));
 FUNC_3(VAR_48, VAR_13, VAR_12 | VAR_11 |
     VAR_10 | VAR_9 | VAR_7);
 FUNC_3(VAR_48, VAR_13, FUNC_4(14));
 FUNC_3(VAR_48, VAR_13, VAR_12 | VAR_11 |
     VAR_10 | VAR_9 | VAR_8);
 FUNC_3(VAR_48, VAR_13, FUNC_4(15));
 FUNC_3(VAR_48, VAR_13, VAR_12 | VAR_11 |
     VAR_10 | VAR_9 | VAR_8 | VAR_7);

 FUNC_3(VAR_48, VAR_13, VAR_6);
 FUNC_3(VAR_48, VAR_13, 0);
 FUNC_3(VAR_48, VAR_13, VAR_1);
 FUNC_3(VAR_48, VAR_13, 0x0f);
 FUNC_3(VAR_48, VAR_13, VAR_2);
 FUNC_3(VAR_48, VAR_13, 0);

 if (!VAR_47) {
  u_int VAR_51;






  for (VAR_51 = 0; VAR_51 < VAR_45; VAR_51++) {
   FUNC_1(VAR_48, VAR_51, 0);
  }
 }


 FUNC_3(VAR_48, VAR_40, VAR_42);
 FUNC_3(VAR_48, VAR_41, VAR_44 | VAR_43);

 FUNC_3(VAR_48, VAR_14, VAR_22);
 VAR_49 = FUNC_2(VAR_48, VAR_20);
 FUNC_3(VAR_48, VAR_20, VAR_49 | VAR_21);

 if (!VAR_47) {

  FUNC_3(VAR_48, VAR_30, VAR_33);
  FUNC_3(VAR_48, VAR_31, 3);
  VAR_48->vga_wmode = 3;







  FUNC_3(VAR_48, VAR_30, VAR_32);
  FUNC_3(VAR_48, VAR_31, 0x00);





  VAR_48->vga_curfg = VAR_48->vga_curbg = 0xff;
 }

 return (0);
}
