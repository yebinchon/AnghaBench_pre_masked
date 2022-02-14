
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt2661_softc {int sc_flags; int * txq; int mgtq; } ;


 int FUNC_0 (struct rt2661_softc*) ;
 int FUNC_1 (struct rt2661_softc*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct rt2661_softc*) ;
 int FUNC_3 (struct rt2661_softc*,int ,int) ;
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
 int FUNC_4 (struct rt2661_softc*) ;
 int FUNC_5 (struct rt2661_softc*) ;
 int FUNC_6 (struct rt2661_softc*) ;
 int FUNC_7 (struct rt2661_softc*) ;
 int FUNC_8 (struct rt2661_softc*,int *) ;
 int FUNC_9 (struct rt2661_softc*) ;

void
FUNC_10(void *VAR_15)
{
 struct rt2661_softc *VAR_16 = VAR_15;
 uint32_t VAR_17, VAR_18;

 FUNC_0(VAR_16);


 FUNC_3(VAR_16, VAR_1, 0xffffff7f);
 FUNC_3(VAR_16, VAR_5, 0xffffffff);


 if (!(VAR_16->sc_flags & VAR_0)) {
  FUNC_2(VAR_16);
  return;
 }

 VAR_17 = FUNC_1(VAR_16, VAR_2);
 FUNC_3(VAR_16, VAR_2, VAR_17);

 VAR_18 = FUNC_1(VAR_16, VAR_6);
 FUNC_3(VAR_16, VAR_6, VAR_18);

 if (VAR_17 & VAR_8)
  FUNC_8(VAR_16, &VAR_16->mgtq);

 if (VAR_17 & VAR_9)
  FUNC_7(VAR_16);

 if (VAR_17 & VAR_10)
  FUNC_8(VAR_16, &VAR_16->txq[0]);

 if (VAR_17 & VAR_11)
  FUNC_8(VAR_16, &VAR_16->txq[1]);

 if (VAR_17 & VAR_12)
  FUNC_8(VAR_16, &VAR_16->txq[2]);

 if (VAR_17 & VAR_13)
  FUNC_8(VAR_16, &VAR_16->txq[3]);

 if (VAR_17 & VAR_14)
  FUNC_9(VAR_16);

 if (VAR_18 & VAR_4)
  FUNC_5(VAR_16);

 if (VAR_18 & VAR_3)
  FUNC_4(VAR_16);

 if (VAR_18 & VAR_7)
  FUNC_6(VAR_16);


 FUNC_3(VAR_16, VAR_1, 0x0000ff10);
 FUNC_3(VAR_16, VAR_5, 0);

 FUNC_2(VAR_16);
}
