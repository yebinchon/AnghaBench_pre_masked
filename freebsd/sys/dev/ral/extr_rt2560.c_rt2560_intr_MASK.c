
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt2560_softc {int sc_flags; } ;


 int FUNC_0 (struct rt2560_softc*) ;
 int FUNC_1 (struct rt2560_softc*,int ) ;
 int FUNC_2 (struct rt2560_softc*) ;
 int FUNC_3 (struct rt2560_softc*,int ,int) ;
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
 int FUNC_4 (struct rt2560_softc*) ;
 int FUNC_5 (struct rt2560_softc*) ;
 int FUNC_6 (struct rt2560_softc*) ;
 int FUNC_7 (struct rt2560_softc*) ;
 int FUNC_8 (struct rt2560_softc*) ;
 int FUNC_9 (struct rt2560_softc*) ;
 int FUNC_10 (struct rt2560_softc*) ;

void
FUNC_11(void *VAR_11)
{
 struct rt2560_softc *VAR_12 = VAR_11;
 uint32_t VAR_13;

 FUNC_0(VAR_12);


 FUNC_3(VAR_12, VAR_2, 0xffffffff);


 if (!(VAR_12->sc_flags & VAR_5)) {
  FUNC_2(VAR_12);
  return;
 }

 VAR_13 = FUNC_1(VAR_12, VAR_1);
 FUNC_3(VAR_12, VAR_1, VAR_13);

 if (VAR_13 & VAR_0)
  FUNC_4(VAR_12);

 if (VAR_13 & VAR_10)
  FUNC_10(VAR_12);

 if (VAR_13 & VAR_4)
  FUNC_6(VAR_12);

 if (VAR_13 & VAR_9)
  FUNC_9(VAR_12);

 if (VAR_13 & VAR_7)
  FUNC_7(VAR_12);

 if (VAR_13 & VAR_3)
  FUNC_5(VAR_12);

 if (VAR_13 & VAR_8) {
  FUNC_8(VAR_12);
  FUNC_6(VAR_12);
 }


 FUNC_3(VAR_12, VAR_2, VAR_6);

 FUNC_2(VAR_12);
}
