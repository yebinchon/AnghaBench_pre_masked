
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct alc_softc {int alc_phyaddr; int alc_dev; TYPE_1__* alc_ident; } ;
struct TYPE_2__ {scalar_t__ deviceid; } ;


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
 int FUNC_0 (struct alc_softc*,int ) ;
 int FUNC_1 (struct alc_softc*,int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct alc_softc *VAR_47)
{
 uint16_t VAR_48;


 FUNC_1(VAR_47, VAR_0, VAR_41);
 FUNC_0(VAR_47, VAR_0);
 FUNC_2(10 * 1000);

 FUNC_1(VAR_47, VAR_0, VAR_40 |
     VAR_41);
 FUNC_0(VAR_47, VAR_0);
 FUNC_2(10 * 1000);


 if (VAR_47->alc_ident->deviceid == VAR_38) {
  FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
      VAR_1, 0x000A);
  VAR_48 = FUNC_3(VAR_47->alc_dev, VAR_47->alc_phyaddr,
      VAR_2);
  FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
      VAR_2, VAR_48 & 0xDFFF);
 }
 if (VAR_47->alc_ident->deviceid == VAR_36 ||
     VAR_47->alc_ident->deviceid == VAR_37 ||
     VAR_47->alc_ident->deviceid == VAR_38 ||
     VAR_47->alc_ident->deviceid == VAR_39) {
  FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
      VAR_1, 0x003B);
  VAR_48 = FUNC_3(VAR_47->alc_dev, VAR_47->alc_phyaddr,
      VAR_2);
  FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
      VAR_2, VAR_48 & 0xFFF7);
  FUNC_2(20 * 1000);
 }
 if (VAR_47->alc_ident->deviceid == VAR_36) {
  FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
      VAR_1, 0x0029);
  FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
      VAR_2, 0x929D);
 }
 if (VAR_47->alc_ident->deviceid == VAR_34 ||
     VAR_47->alc_ident->deviceid == VAR_35 ||
     VAR_47->alc_ident->deviceid == VAR_37 ||
     VAR_47->alc_ident->deviceid == VAR_39) {
  FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
      VAR_1, 0x0029);
  FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
      VAR_2, 0xB6DD);
 }


 VAR_48 = VAR_20 | VAR_7 | VAR_5 |
     ((1 << VAR_17) & VAR_16);
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_1, VAR_43);
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_2, VAR_48);

 VAR_48 = ((2 << VAR_28) & VAR_27) |
     VAR_29 | VAR_32 | VAR_31 |
     VAR_30;
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_1, VAR_45);
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_2, VAR_48);

 VAR_48 = ((44 << VAR_19) &
     VAR_18) |
     ((33 << VAR_33) &
     VAR_33) |
     VAR_3 | VAR_4;
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_1, VAR_46);
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_2, VAR_48);

 VAR_48 = ((11 << VAR_15) & VAR_14) |
     ((11 << VAR_13) & VAR_12) |
     ((8 << VAR_11) & VAR_10) |
     ((8 << VAR_9) & VAR_8);
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_1, VAR_44);
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_2, VAR_48);

 VAR_48 = ((7 & VAR_22) & VAR_21) |
     VAR_25 | VAR_23 | VAR_26 | VAR_6 |
     VAR_24;
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_1, VAR_42);
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_2, VAR_48);
 FUNC_2(1000);


 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr, VAR_1,
     0x0029);
 VAR_48 = FUNC_3(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_2);
 VAR_48 &= ~0x8000;
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr, VAR_2,
     VAR_48);

 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr, VAR_1,
     0x000B);
 VAR_48 = FUNC_3(VAR_47->alc_dev, VAR_47->alc_phyaddr,
     VAR_2);
 VAR_48 &= ~0x8000;
 FUNC_4(VAR_47->alc_dev, VAR_47->alc_phyaddr, VAR_2,
     VAR_48);
}
