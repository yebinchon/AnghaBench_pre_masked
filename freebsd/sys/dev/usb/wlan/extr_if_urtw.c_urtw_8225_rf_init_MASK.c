
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct urtw_softc {int sc_mtx; } ;
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
 unsigned int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct urtw_softc*,int ) ;
 scalar_t__ FUNC_2 (struct urtw_softc*) ;
 scalar_t__ FUNC_3 (struct urtw_softc*,int) ;
 int FUNC_4 (struct urtw_softc*,int,int) ;
 int FUNC_5 (struct urtw_softc*,int,int) ;
 int* VAR_17 ;
 TYPE_1__* VAR_18 ;
 TYPE_1__* VAR_19 ;
 TYPE_1__* VAR_20 ;
 scalar_t__ FUNC_6 (struct urtw_softc*,int) ;
 int* VAR_21 ;
 scalar_t__ FUNC_7 (struct urtw_softc*,int) ;
 scalar_t__ FUNC_8 (struct urtw_softc*,int) ;
 scalar_t__ FUNC_9 (struct urtw_softc*) ;
 int FUNC_10 (struct urtw_softc*,int,int) ;
 int FUNC_11 (struct urtw_softc*,int ,int *) ;
 scalar_t__ FUNC_12 (struct urtw_softc*,int ) ;
 int FUNC_13 (struct urtw_softc*,int ,int) ;
 int FUNC_14 (struct urtw_softc*,int ,int) ;
 int FUNC_15 (struct urtw_softc*,int ,int) ;
 int FUNC_16 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_17(struct urtw_softc *VAR_22)
{
 unsigned int VAR_23;
 uint16_t VAR_24;
 usb_error_t VAR_25;

 VAR_25 = FUNC_1(VAR_22, VAR_8);
 if (VAR_25)
  goto fail;

 VAR_25 = FUNC_9(VAR_22);
 if (VAR_25)
  goto fail;

 FUNC_14(VAR_22, VAR_15, 0x000a8008);
 FUNC_11(VAR_22, VAR_9, &VAR_24);
 FUNC_13(VAR_22, VAR_9, 0xffff);
 FUNC_14(VAR_22, VAR_14, 0x100044);

 VAR_25 = FUNC_12(VAR_22, VAR_11);
 if (VAR_25)
  goto fail;
 FUNC_15(VAR_22, VAR_10, 0x44);
 VAR_25 = FUNC_12(VAR_22, VAR_12);
 if (VAR_25)
  goto fail;

 VAR_25 = FUNC_2(VAR_22);
 if (VAR_25)
  goto fail;
 FUNC_16(&VAR_22->sc_mtx, 1000);

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_18); VAR_23++) {
  FUNC_10(VAR_22, VAR_18[VAR_23].reg,
      VAR_18[VAR_23].val);
  FUNC_16(&VAR_22->sc_mtx, 1);
 }
 FUNC_16(&VAR_22->sc_mtx, 100);
 FUNC_10(VAR_22,
     VAR_7, VAR_5);
 FUNC_16(&VAR_22->sc_mtx, 200);
 FUNC_10(VAR_22,
     VAR_7, VAR_6);
 FUNC_16(&VAR_22->sc_mtx, 200);
 FUNC_10(VAR_22,
     VAR_3, VAR_0);

 for (VAR_23 = 0; VAR_23 < 95; VAR_23++) {
  FUNC_10(VAR_22, VAR_4, (uint8_t)(VAR_23 + 1));
  FUNC_10(VAR_22, VAR_7, VAR_21[VAR_23]);
 }

 FUNC_10(VAR_22,
     VAR_3, VAR_1);
 FUNC_10(VAR_22,
     VAR_3, VAR_2);

 for (VAR_23 = 0; VAR_23 < 128; VAR_23++) {
  FUNC_5(VAR_22, 0xb, VAR_17[VAR_23]);
  FUNC_16(&VAR_22->sc_mtx, 1);
  FUNC_5(VAR_22, 0xa, (uint8_t)VAR_23 + 0x80);
  FUNC_16(&VAR_22->sc_mtx, 1);
 }

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_19); VAR_23++) {
  FUNC_5(VAR_22, VAR_19[VAR_23].reg,
      VAR_19[VAR_23].val);
  FUNC_16(&VAR_22->sc_mtx, 1);
 }

 VAR_25 = FUNC_8(VAR_22, 4);
 if (VAR_25)
  goto fail;

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_20); VAR_23++) {
  FUNC_4(VAR_22, VAR_20[VAR_23].reg,
      VAR_20[VAR_23].val);
  FUNC_16(&VAR_22->sc_mtx, 1);
 }

 FUNC_15(VAR_22, VAR_16, 0x0d);

 VAR_25 = FUNC_7(VAR_22, 1);
 if (VAR_25)
  goto fail;

 FUNC_4(VAR_22, 0x10, 0x9b);
 FUNC_16(&VAR_22->sc_mtx, 1);
 FUNC_5(VAR_22, 0x26, 0x90);
 FUNC_16(&VAR_22->sc_mtx, 1);


 VAR_25 = FUNC_3(VAR_22, 0x3);
 if (VAR_25)
  goto fail;
 FUNC_14(VAR_22, VAR_13, 0x3dc00002);

 VAR_25 = FUNC_6(VAR_22, 1);
fail:
 return (VAR_25);
}
