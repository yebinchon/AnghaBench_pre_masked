
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bce_softc {int bce_phy_flags; } ;


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
 int FUNC_0 (struct bce_softc*,int ) ;

__attribute__((used)) static u32
FUNC_1(struct bce_softc *VAR_16)
{
 u32 VAR_17, VAR_18;
 int VAR_19;

 VAR_17 = 0;
 VAR_19 = 0;
 if ((VAR_16->bce_phy_flags & VAR_13) != 0)
  VAR_18 = FUNC_0(VAR_16, VAR_15);
 else
  VAR_18 = FUNC_0(VAR_16, VAR_14);
 if (VAR_18 & VAR_0)
  VAR_17 |= VAR_0;
 if (VAR_18 & VAR_10)
  VAR_17 |= VAR_10;
 if (VAR_18 & VAR_9) {
  VAR_17 |= VAR_9;
  VAR_19++;
 }
 if (VAR_18 & VAR_8)
  VAR_17 |= VAR_8;
 if (VAR_18 & VAR_7) {
  VAR_17 |= VAR_7;
  VAR_19++;
 }
 if (VAR_18 & VAR_6)
  VAR_17 |= VAR_6;
 if (VAR_18 & VAR_5) {
  VAR_17 |= VAR_5;
  VAR_19++;
 }
 if (VAR_18 & VAR_12)
  VAR_17 |= VAR_12;
 if (VAR_18 & VAR_11) {
  VAR_17 |= VAR_11;
  VAR_19++;
 }
 if (VAR_19)
  VAR_17 |= VAR_3 |
      VAR_2;
 if ((VAR_16->bce_phy_flags & VAR_13) == 0)
  VAR_17 |= VAR_4 |
      VAR_1;

 return (VAR_17);
}
