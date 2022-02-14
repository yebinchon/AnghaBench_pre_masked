
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int mii_dev; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct mii_softc*,int ,int) ;
 int FUNC_2 (struct mii_softc*,int ) ;
 int FUNC_3 (struct mii_softc*,int ,int) ;
 int FUNC_4 (struct mii_softc*,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (struct mii_softc*,char*) ;

__attribute__((used)) static void
FUNC_7(struct mii_softc *VAR_16)
{
 uint16_t VAR_17;
 uint16_t VAR_18, VAR_19;
 uint16_t VAR_20;

 VAR_17 = FUNC_0(FUNC_2(VAR_16, VAR_13));
 VAR_18 = FUNC_2(VAR_16, VAR_10);
 VAR_19 = VAR_18 & VAR_3;

 if (FUNC_6(VAR_16, "nfe")) {

  VAR_20 = FUNC_2(VAR_16, VAR_11);
  VAR_20 &= ~(VAR_5 | VAR_4);
  VAR_20 |= (VAR_7 | VAR_6);
  FUNC_4(VAR_16, VAR_11, VAR_20);

  VAR_20 = FUNC_2(VAR_16, VAR_10);
  VAR_20 |= VAR_2;
  FUNC_4(VAR_16, VAR_10, VAR_20);
  VAR_20 = FUNC_2(VAR_16, VAR_9);
  VAR_20 |= VAR_0;
  FUNC_4(VAR_16, VAR_9, VAR_20);
 }

 switch (VAR_17) {
 case 133:
 case 136:


  FUNC_3(VAR_16, VAR_10, VAR_2);





  if ((VAR_19 == VAR_14 || VAR_19 == VAR_15) &&
      (VAR_18 & VAR_1)) {
   FUNC_3(VAR_16, VAR_9, VAR_0);
  } else {
   FUNC_1(VAR_16, VAR_9, VAR_0);
  }


  FUNC_3(VAR_16, VAR_12, VAR_8);

  break;

 case 135:
 case 134:





  if ((VAR_19 == VAR_14 || VAR_19 == VAR_15) &&
      (VAR_18 & VAR_1)) {
   FUNC_3(VAR_16, VAR_9, VAR_0);
  } else {
   FUNC_1(VAR_16, VAR_9, VAR_0);
  }

  break;
 case 131:
 case 130:
 case 132:
 case 129:
 case 128:
  break;
 default:
  FUNC_5(VAR_16->mii_dev, "unknown CICADA PHY model %x\n",
      VAR_17);
  break;
 }
}
