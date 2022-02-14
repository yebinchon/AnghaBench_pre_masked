
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct a10hdmi_softc {int dummy; } ;


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
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct a10hdmi_softc*,int ) ;
 int FUNC_2 (struct a10hdmi_softc*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int
FUNC_3(struct a10hdmi_softc *VAR_21, uint16_t VAR_22, uint8_t VAR_23,
    uint8_t VAR_24, int VAR_25)
{
 uint32_t VAR_26;
 int VAR_27;


 VAR_26 = FUNC_1(VAR_21, VAR_6);
 VAR_26 &= ~VAR_2;
 VAR_26 |= VAR_3;
 FUNC_2(VAR_21, VAR_6, VAR_26);


 VAR_26 = (VAR_22 << VAR_20) | (VAR_23 << VAR_19) |
     (VAR_12 << VAR_17) |
     (VAR_24 << VAR_18);
 FUNC_2(VAR_21, VAR_11, VAR_26);


 VAR_26 = FUNC_1(VAR_21, VAR_8);
 VAR_26 |= VAR_15;
 FUNC_2(VAR_21, VAR_8, VAR_26);


 FUNC_2(VAR_21, VAR_4, VAR_25);


 FUNC_2(VAR_21, VAR_5, VAR_0);


 VAR_26 = FUNC_1(VAR_21, VAR_6);
 VAR_26 |= VAR_1;
 FUNC_2(VAR_21, VAR_6, VAR_26);


 VAR_27 = VAR_10;
 while (--VAR_27 > 0) {
  VAR_26 = FUNC_1(VAR_21, VAR_6);
  if ((VAR_26 & VAR_1) == 0)
   break;
  FUNC_0(VAR_7);
 }
 if (VAR_27 == 0)
  return (VAR_14);


 VAR_26 = FUNC_1(VAR_21, VAR_9);
 if ((VAR_26 & VAR_16) == 0)
  return (VAR_13);

 return (0);
}
