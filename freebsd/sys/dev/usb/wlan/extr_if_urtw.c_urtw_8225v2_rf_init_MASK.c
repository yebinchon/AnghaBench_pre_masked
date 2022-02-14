
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct urtw_softc {int sc_mtx; int sc_dev; } ;
struct TYPE_5__ {int reg; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 int FUNC_0 (int ,char*,...) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct urtw_softc*,int ) ;
 scalar_t__ FUNC_3 (struct urtw_softc*) ;
 scalar_t__ FUNC_4 (struct urtw_softc*,int) ;
 int FUNC_5 (struct urtw_softc*,int,int) ;
 int FUNC_6 (struct urtw_softc*,int,int) ;
 int* VAR_24 ;
 scalar_t__ FUNC_7 (struct urtw_softc*,int ,int*) ;
 scalar_t__ FUNC_8 (struct urtw_softc*,int) ;
 scalar_t__ FUNC_9 (struct urtw_softc*) ;
 int FUNC_10 (struct urtw_softc*,int,int) ;
 TYPE_1__* VAR_25 ;
 TYPE_1__* VAR_26 ;
 TYPE_1__* VAR_27 ;
 int* VAR_28 ;
 scalar_t__ FUNC_11 (struct urtw_softc*,int) ;
 scalar_t__ FUNC_12 (struct urtw_softc*,int) ;
 int FUNC_13 (struct urtw_softc*,int ,int *) ;
 scalar_t__ FUNC_14 (struct urtw_softc*,int ) ;
 int FUNC_15 (struct urtw_softc*,int ,int) ;
 int FUNC_16 (struct urtw_softc*,int ,int) ;
 int FUNC_17 (struct urtw_softc*,int ,int) ;
 int FUNC_18 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_19(struct urtw_softc *VAR_29)
{
 unsigned int VAR_30;
 uint16_t VAR_31;
 uint32_t VAR_32;
 usb_error_t VAR_33;

 VAR_33 = FUNC_2(VAR_29, VAR_15);
 if (VAR_33)
  goto fail;

 VAR_33 = FUNC_9(VAR_29);
 if (VAR_33)
  goto fail;

 FUNC_16(VAR_29, VAR_22, 0x000a8008);
 FUNC_13(VAR_29, VAR_16, &VAR_31);
 FUNC_15(VAR_29, VAR_16, 0xffff);
 FUNC_16(VAR_29, VAR_21, 0x100044);

 VAR_33 = FUNC_14(VAR_29, VAR_18);
 if (VAR_33)
  goto fail;
 FUNC_17(VAR_29, VAR_17, 0x44);
 VAR_33 = FUNC_14(VAR_29, VAR_19);
 if (VAR_33)
  goto fail;

 VAR_33 = FUNC_3(VAR_29);
 if (VAR_33)
  goto fail;

 FUNC_18(&VAR_29->sc_mtx, 500);

 for (VAR_30 = 0; VAR_30 < FUNC_1(VAR_25); VAR_30++) {
  FUNC_10(VAR_29, VAR_25[VAR_30].reg,
      VAR_25[VAR_30].val);
 }
 FUNC_18(&VAR_29->sc_mtx, 50);

 FUNC_10(VAR_29,
     VAR_3, VAR_0);

 for (VAR_30 = 0; VAR_30 < 95; VAR_30++) {
  FUNC_10(VAR_29, VAR_4, (uint8_t)(VAR_30 + 1));
  FUNC_10(VAR_29, VAR_7,
      VAR_28[VAR_30]);
 }

 FUNC_10(VAR_29,
     VAR_9, VAR_8);
 FUNC_10(VAR_29,
     VAR_11, VAR_10);
 FUNC_10(VAR_29,
     VAR_3, VAR_1);
 FUNC_10(VAR_29,
     VAR_7, VAR_5);
 FUNC_18(&VAR_29->sc_mtx, 100);
 FUNC_10(VAR_29,
     VAR_7, VAR_6);
 FUNC_18(&VAR_29->sc_mtx, 100);

 VAR_33 = FUNC_7(VAR_29, VAR_14, &VAR_32);
 if (VAR_33 != 0)
  goto fail;
 if (VAR_32 != VAR_12)
  FUNC_0(VAR_29->sc_dev, "expect 0xe6!! (0x%x)\n", VAR_32);
 if (!(VAR_32 & VAR_13)) {
  FUNC_10(VAR_29,
      VAR_7, VAR_5);
  FUNC_18(&VAR_29->sc_mtx, 100);
  FUNC_10(VAR_29,
      VAR_7, VAR_6);
  FUNC_18(&VAR_29->sc_mtx, 50);
  VAR_33 = FUNC_7(VAR_29, VAR_14, &VAR_32);
  if (VAR_33 != 0)
   goto fail;
  if (!(VAR_32 & VAR_13))
   FUNC_0(VAR_29->sc_dev, "RF calibration failed\n");
 }
 FUNC_18(&VAR_29->sc_mtx, 100);

 FUNC_10(VAR_29,
     VAR_3, VAR_2);
 for (VAR_30 = 0; VAR_30 < 128; VAR_30++) {
  FUNC_6(VAR_29, 0xb, VAR_24[VAR_30]);
  FUNC_6(VAR_29, 0xa, (uint8_t)VAR_30 + 0x80);
 }

 for (VAR_30 = 0; VAR_30 < FUNC_1(VAR_26); VAR_30++) {
  FUNC_6(VAR_29, VAR_26[VAR_30].reg,
      VAR_26[VAR_30].val);
 }

 VAR_33 = FUNC_12(VAR_29, 4);
 if (VAR_33)
  goto fail;

 for (VAR_30 = 0; VAR_30 < FUNC_1(VAR_27); VAR_30++) {
  FUNC_5(VAR_29, VAR_27[VAR_30].reg,
      VAR_27[VAR_30].val);
 }

 FUNC_17(VAR_29, VAR_23, 0x0d);

 VAR_33 = FUNC_11(VAR_29, 1);
 if (VAR_33)
  goto fail;

 FUNC_5(VAR_29, 0x10, 0x9b);
 FUNC_6(VAR_29, 0x26, 0x90);


 VAR_33 = FUNC_4(VAR_29, 0x3);
 if (VAR_33)
  goto fail;
 FUNC_16(VAR_29, VAR_20, 0x3dc00002);

 VAR_33 = FUNC_8(VAR_29, 1);
fail:
 return (VAR_33);
}
