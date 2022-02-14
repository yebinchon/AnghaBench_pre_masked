
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct bwi_softc {int sc_card_flags; } ;
struct bwi_rf {int rf_curchan; scalar_t__ rf_type; } ;
struct bwi_mac {struct bwi_rf mac_rf; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct bwi_softc*,int ,int) ;
 int VAR_7 ;
 int FUNC_1 (struct bwi_mac*,int,int) ;
 int FUNC_2 (struct bwi_mac*,int,int) ;
 int FUNC_3 (struct bwi_mac*) ;
 int FUNC_4 (struct bwi_mac*,int *) ;
 int FUNC_5 (struct bwi_mac*) ;
 int FUNC_6 (struct bwi_mac*) ;
 int FUNC_7 (struct bwi_mac*) ;
 int FUNC_8 (struct bwi_mac*,int,int ) ;
 int FUNC_9 (struct bwi_mac*) ;

__attribute__((used)) static void
FUNC_10(struct bwi_mac *VAR_8)
{
 struct bwi_softc *VAR_9 = VAR_8->mac_sc;
 struct bwi_rf *VAR_10 = &VAR_8->mac_rf;
 uint16_t VAR_11, VAR_12;
 u_int VAR_13;

 FUNC_0(VAR_9, VAR_0, VAR_1);

 FUNC_1(VAR_8, 0x20, 0x301c);
 FUNC_1(VAR_8, 0x26, 0);
 FUNC_1(VAR_8, 0x30, 0xc6);
 FUNC_1(VAR_8, 0x88, 0x3e00);

 for (VAR_12 = 0, VAR_11 = 0x3c3d; VAR_12 < 30; ++VAR_12, VAR_11 -= 0x202)
  FUNC_1(VAR_8, 0x89 + VAR_12, VAR_11);

 FUNC_0(VAR_9, VAR_3, VAR_4);

 VAR_13 = VAR_10->rf_curchan;
 if (VAR_13 == VAR_7)
  VAR_13 = 6;
 FUNC_8(VAR_8, VAR_13, 0);

 if (VAR_10->rf_type != VAR_6) {
  FUNC_2(VAR_8, 0x75, 0x80);
  FUNC_2(VAR_8, 0x79, 0x81);
 }

 FUNC_2(VAR_8, 0x50, 0x20);
 FUNC_2(VAR_8, 0x50, 0x23);

 if (VAR_10->rf_type == VAR_6) {
  FUNC_2(VAR_8, 0x50, 0x20);
  FUNC_2(VAR_8, 0x5a, 0x70);
  FUNC_2(VAR_8, 0x5b, 0x7b);
  FUNC_2(VAR_8, 0x5c, 0xb0);
  FUNC_2(VAR_8, 0x7a, 0xf);
  FUNC_1(VAR_8, 0x38, 0x677);
  FUNC_6(VAR_8);
 }

 FUNC_1(VAR_8, 0x14, 0x80);
 FUNC_1(VAR_8, 0x32, 0xca);
 if (VAR_10->rf_type == VAR_6)
  FUNC_1(VAR_8, 0x32, 0xe0);
 FUNC_1(VAR_8, 0x35, 0x7c2);

 FUNC_7(VAR_8);

 FUNC_1(VAR_8, 0x26, 0xcc00);
 if (VAR_10->rf_type == VAR_6)
  FUNC_1(VAR_8, 0x26, 0xce00);

 FUNC_0(VAR_9, VAR_5, 0x1100);

 FUNC_1(VAR_8, 0x2a, 0x88a3);
 if (VAR_10->rf_type == VAR_6)
  FUNC_1(VAR_8, 0x2a, 0x88c2);

 FUNC_4(VAR_8, ((void*)0));
 if (VAR_9->sc_card_flags & VAR_2) {
  FUNC_5(VAR_8);
  FUNC_9(VAR_8);
 }
 FUNC_3(VAR_8);
}
