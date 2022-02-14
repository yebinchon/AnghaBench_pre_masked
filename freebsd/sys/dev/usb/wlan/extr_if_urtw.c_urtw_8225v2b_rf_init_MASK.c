
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct ieee80211com {int* ic_macaddr; int ic_vaps; } ;
struct urtw_softc {int sc_acmctl; int sc_mtx; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int* iv_myaddr; } ;
struct TYPE_5__ {int reg; int val; } ;


 struct ieee80211vap* FUNC_0 (int *) ;
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
 unsigned int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct urtw_softc*,int,int) ;
 int FUNC_3 (struct urtw_softc*,int,int) ;
 int FUNC_4 (struct urtw_softc*,int,int) ;
 TYPE_1__* VAR_39 ;
 TYPE_1__* VAR_40 ;
 TYPE_1__* VAR_41 ;
 int* VAR_42 ;
 int* VAR_43 ;
 int FUNC_5 (struct urtw_softc*,int,int*) ;
 scalar_t__ FUNC_6 (struct urtw_softc*,int const*) ;
 scalar_t__ FUNC_7 (struct urtw_softc*,int ) ;
 int FUNC_8 (struct urtw_softc*,int ,int) ;
 int FUNC_9 (struct urtw_softc*,int,int) ;
 int FUNC_10 (struct urtw_softc*,int,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_12(struct urtw_softc *VAR_44)
{
 struct ieee80211com *VAR_45 = &VAR_44->sc_ic;
 struct ieee80211vap *VAR_46 = FUNC_0(&VAR_45->ic_vaps);
 const uint8_t *VAR_47;
 unsigned int VAR_48;
 uint8_t VAR_49;
 usb_error_t VAR_50;

 VAR_50 = FUNC_7(VAR_44, VAR_19);
 if (VAR_50)
  goto fail;




 FUNC_8(VAR_44, VAR_13, 0xfff);


 FUNC_5(VAR_44, VAR_17, &VAR_49);
 VAR_49 |= VAR_18;
 FUNC_10(VAR_44, VAR_17, VAR_49);


 FUNC_5(VAR_44, VAR_33, &VAR_49);
 VAR_49 |= VAR_34;
 FUNC_10(VAR_44, VAR_33, VAR_49);



 FUNC_8(VAR_44, 0x1e0, 0xfff);
 FUNC_5(VAR_44, VAR_25, &VAR_49);
 FUNC_10(VAR_44, VAR_25,
     VAR_49 | VAR_26);

 FUNC_5(VAR_44, VAR_23, &VAR_49);
 FUNC_10(VAR_44, VAR_23, VAR_49 & 0xf3);
 FUNC_5(VAR_44, VAR_23, &VAR_49);
 FUNC_10(VAR_44, VAR_23, VAR_49 | VAR_24);
 FUNC_10(VAR_44, VAR_9, VAR_44->sc_acmctl);

 FUNC_8(VAR_44, VAR_11, 2);
 FUNC_8(VAR_44, VAR_12, 100);

 FUNC_8(VAR_44, 0x1d4, 0xffff);


 FUNC_5(VAR_44, VAR_14, &VAR_49);
 VAR_49 = (VAR_49 & 0x3f) | 0x80;
 FUNC_10(VAR_44, VAR_14, VAR_49);


 VAR_47 = VAR_46 ? VAR_46->iv_myaddr : VAR_45->ic_macaddr;
 VAR_50 = FUNC_6(VAR_44, VAR_47);
 if (VAR_50)
  goto fail;

 VAR_50 = FUNC_7(VAR_44, VAR_20);
 if (VAR_50)
  goto fail;

 FUNC_10(VAR_44, VAR_38, 0);




 for (VAR_48 = 0; VAR_48 < FUNC_1(VAR_40); VAR_48++)
  FUNC_10(VAR_44, VAR_40[VAR_48].reg,
      VAR_40[VAR_48].val);
 FUNC_8(VAR_44, VAR_32, 0xfa50);
 FUNC_8(VAR_44, VAR_22, 0x0000);
 FUNC_9(VAR_44, 0x1f0, 0);
 FUNC_9(VAR_44, 0x1f4, 0);
 FUNC_10(VAR_44, 0x1f8, 0);
 FUNC_9(VAR_44, VAR_31, 0x4001);


 FUNC_8(VAR_44, 0x272, 0x569a);




 VAR_50 = FUNC_7(VAR_44, VAR_19);
 if (VAR_50)
  goto fail;
 FUNC_5(VAR_44, VAR_15, &VAR_49);
 FUNC_10(VAR_44, VAR_15,
     VAR_49 | VAR_16);

 VAR_50 = FUNC_7(VAR_44, VAR_20);
 if (VAR_50)
  goto fail;


 FUNC_8(VAR_44, VAR_29, 0x0480);
 FUNC_8(VAR_44, VAR_30, 0x2488);
 FUNC_8(VAR_44, VAR_28, 0x1fff);
 FUNC_11(&VAR_44->sc_mtx, 1100);

 for (VAR_48 = 0; VAR_48 < FUNC_1(VAR_39); VAR_48++) {
  FUNC_4(VAR_44, VAR_39[VAR_48].reg,
      VAR_39[VAR_48].val);
  FUNC_11(&VAR_44->sc_mtx, 1);
 }
 FUNC_4(VAR_44, 0x00, 0x01b7);

 for (VAR_48 = 0; VAR_48 < 95; VAR_48++) {
  FUNC_4(VAR_44, VAR_5, (uint8_t)(VAR_48 + 1));
  FUNC_11(&VAR_44->sc_mtx, 1);
  FUNC_4(VAR_44, VAR_6,
      VAR_42[VAR_48]);
  FUNC_11(&VAR_44->sc_mtx, 1);
 }

 FUNC_4(VAR_44, VAR_7, 0x080);
 FUNC_11(&VAR_44->sc_mtx, 1);
 FUNC_4(VAR_44, VAR_8, 0x004);
 FUNC_11(&VAR_44->sc_mtx, 1);
 FUNC_4(VAR_44, VAR_4, 0x0b7);
 FUNC_11(&VAR_44->sc_mtx, 1);
 FUNC_11(&VAR_44->sc_mtx, 3000);
 FUNC_4(VAR_44, VAR_6, 0xc4d);
 FUNC_11(&VAR_44->sc_mtx, 2000);
 FUNC_4(VAR_44, VAR_6, 0x44d);
 FUNC_11(&VAR_44->sc_mtx, 1);
 FUNC_4(VAR_44, VAR_4, 0x2bf);
 FUNC_11(&VAR_44->sc_mtx, 1);

 FUNC_10(VAR_44, VAR_36, 0x03);
 FUNC_10(VAR_44, VAR_37, 0x07);
 FUNC_10(VAR_44, VAR_35, 0x03);

 FUNC_3(VAR_44, 0x80, 0x12);
 for (VAR_48 = 0; VAR_48 < 128; VAR_48++) {
  uint32_t VAR_51, VAR_52;

  VAR_52 = (VAR_43[VAR_48] << 8) | 0x0000008f;
  VAR_51 = ((VAR_48 + 0x80) << 8) | 0x0000008e;

  FUNC_3(VAR_44, VAR_52 & 0x7f, (VAR_52 >> 8) & 0xff);
  FUNC_3(VAR_44, VAR_51 & 0x7f, (VAR_51 >> 8) & 0xff);
  FUNC_3(VAR_44, 0x0e, 0x00);
 }
 FUNC_3(VAR_44, 0x80, 0x10);

 for (VAR_48 = 0; VAR_48 < FUNC_1(VAR_41); VAR_48++)
  FUNC_3(VAR_44, VAR_48, VAR_41[VAR_48].val);

 FUNC_9(VAR_44, VAR_3, (7 << 12) | (3 << 8) | 0x1c);
 FUNC_9(VAR_44, VAR_2, (7 << 12) | (3 << 8) | 0x1c);
 FUNC_9(VAR_44, VAR_0, (7 << 12) | (3 << 8) | 0x1c);
 FUNC_9(VAR_44, VAR_1, (7 << 12) | (3 << 8) | 0x1c);

 FUNC_3(VAR_44, 0x97, 0x46);
 FUNC_3(VAR_44, 0xa4, 0xb6);
 FUNC_3(VAR_44, 0x85, 0xfc);
 FUNC_2(VAR_44, 0xc1, 0x88);

fail:
 return (VAR_50);
}
