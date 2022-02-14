
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_intc_softc {int dummy; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct bcm_intc_softc*,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct bcm_intc_softc *VAR_24)
{
 uint32_t VAR_25, VAR_26;

 VAR_25 = FUNC_1(VAR_24, VAR_6) & VAR_23;
 if (VAR_25 == 0)
  return (-1);
 if (VAR_25 & VAR_7)
  return (FUNC_0(VAR_25) - 1);
 if (VAR_25 & VAR_13) {
  if (VAR_25 & VAR_11)
   return (VAR_0 + 7);
  if (VAR_25 & VAR_12)
   return (VAR_0 + 9);
  if (VAR_25 & VAR_8)
   return (VAR_0 + 10);
  if (VAR_25 & VAR_9)
   return (VAR_0 + 18);
  if (VAR_25 & VAR_10)
   return (VAR_0 + 19);
 }
 if (VAR_25 & VAR_21) {
  if (VAR_25 & VAR_15)
   return (VAR_1 + 21);
  if (VAR_25 & VAR_16)
   return (VAR_1 + 22);
  if (VAR_25 & VAR_17)
   return (VAR_1 + 23);
  if (VAR_25 & VAR_18)
   return (VAR_1 + 24);
  if (VAR_25 & VAR_19)
   return (VAR_1 + 25);
  if (VAR_25 & VAR_20)
   return (VAR_1 + 30);
 }
 if (VAR_25 & VAR_14) {
  VAR_26 = FUNC_1(VAR_24, VAR_2);
  VAR_26 &= VAR_3;
  if (VAR_26 != 0)
   return (VAR_0 + FUNC_0(VAR_26) - 1);
 }
 if (VAR_25 & VAR_22) {
  VAR_26 = FUNC_1(VAR_24, VAR_4);
  VAR_26 &= VAR_5;
  if (VAR_26 != 0)
   return (VAR_1 + FUNC_0(VAR_26) - 1);
 }
 return (-1);
}
