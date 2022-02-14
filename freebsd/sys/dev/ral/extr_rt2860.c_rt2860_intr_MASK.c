
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt2860_softc {int dummy; } ;


 int FUNC_0 (struct rt2860_softc*) ;
 int FUNC_1 (struct rt2860_softc*,int ) ;
 int FUNC_2 (struct rt2860_softc*) ;
 int FUNC_3 (struct rt2860_softc*,int ,int) ;
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
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct rt2860_softc*) ;
 int FUNC_6 (struct rt2860_softc*) ;
 int FUNC_7 (struct rt2860_softc*) ;
 int FUNC_8 (struct rt2860_softc*) ;
 int FUNC_9 (struct rt2860_softc*) ;
 int FUNC_10 (struct rt2860_softc*,int) ;

void
FUNC_11(void *VAR_13)
{
 struct rt2860_softc *VAR_14 = VAR_13;
 uint32_t VAR_15;

 FUNC_0(VAR_14);

 VAR_15 = FUNC_1(VAR_14, VAR_0);
 if (FUNC_4(VAR_15 == 0xffffffff)) {
  FUNC_2(VAR_14);
  return;
 }
 if (VAR_15 == 0) {
  FUNC_2(VAR_14);
  return;
 }


 FUNC_3(VAR_14, VAR_0, VAR_15);

 if (VAR_15 & VAR_12)
  FUNC_7(VAR_14);

 if (VAR_15 & VAR_2)
  FUNC_5(VAR_14);

 if (VAR_15 & VAR_11)
  FUNC_10(VAR_14, 5);

 if (VAR_15 & VAR_5)
  FUNC_8(VAR_14);

 if (VAR_15 & VAR_10)
  FUNC_10(VAR_14, 4);

 if (VAR_15 & VAR_9)
  FUNC_10(VAR_14, 3);

 if (VAR_15 & VAR_8)
  FUNC_10(VAR_14, 2);

 if (VAR_15 & VAR_7)
  FUNC_10(VAR_14, 1);

 if (VAR_15 & VAR_6)
  FUNC_10(VAR_14, 0);

 if (VAR_15 & VAR_1)
  FUNC_9(VAR_14);

 if (VAR_15 & VAR_3)
                  ;

 if (VAR_15 & VAR_4)
  FUNC_6(VAR_14);

 FUNC_2(VAR_14);
}
