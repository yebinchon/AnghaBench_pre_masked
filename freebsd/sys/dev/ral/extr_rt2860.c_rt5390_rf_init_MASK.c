
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct rt2860_softc {int mac_ver; int rf24_20mhz; int rf24_40mhz; int mac_rev; int ntxchains; int nrxchains; } ;
struct TYPE_4__ {int reg; int val; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2860_softc*,int ) ;
 int FUNC_2 (struct rt2860_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct rt2860_softc*,int) ;
 int FUNC_5 (struct rt2860_softc*,int,int) ;
 int FUNC_6 (struct rt2860_softc*,int) ;
 int FUNC_7 (struct rt2860_softc*,int,int) ;
 int FUNC_8 (struct rt2860_softc*,int ) ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void
FUNC_9(struct rt2860_softc *VAR_9)
{
 uint8_t VAR_10, VAR_11;
 int VAR_12;

 VAR_10 = FUNC_6(VAR_9, 2);

 FUNC_7(VAR_9, 2, VAR_10 | VAR_3);
 FUNC_0(1000);
 FUNC_7(VAR_9, 2, VAR_10 & ~VAR_3);


 if (VAR_9->mac_ver == 0x5392) {
  for (VAR_12 = 0; VAR_12 < FUNC_3(VAR_8); VAR_12++) {
   FUNC_7(VAR_9, VAR_8[VAR_12].reg,
       VAR_8[VAR_12].val);
  }
 } else {
  for (VAR_12 = 0; VAR_12 < FUNC_3(VAR_7); VAR_12++) {
   FUNC_7(VAR_9, VAR_7[VAR_12].reg,
       VAR_7[VAR_12].val);
  }
 }

 VAR_9->rf24_20mhz = 0x1f;
 VAR_9->rf24_40mhz = 0x2f;

 if (VAR_9->mac_rev < 0x0211)
  FUNC_7(VAR_9, 27, 0x03);


 FUNC_2(VAR_9, VAR_2, FUNC_1(VAR_9, VAR_2) | 1);

 FUNC_2(VAR_9, VAR_0, 0);
 FUNC_2(VAR_9, VAR_1, 0);

 if (VAR_9->mac_ver == 0x5390)
  FUNC_8(VAR_9, 0);


 FUNC_5(VAR_9, 79, 0x13);
 FUNC_5(VAR_9, 80, 0x05);
 FUNC_5(VAR_9, 81, 0x33);


 if (VAR_9->mac_rev >= 0x0211)
  FUNC_5(VAR_9, 103, 0xc0);

 VAR_11 = FUNC_4(VAR_9, 138);
 if (VAR_9->ntxchains == 1)
  VAR_11 |= 0x20;
 if (VAR_9->nrxchains == 1)
  VAR_11 &= ~0x02;
 FUNC_5(VAR_9, 138, VAR_11);


 FUNC_7(VAR_9, 38, FUNC_6(VAR_9, 38) & ~VAR_5);
 FUNC_7(VAR_9, 39, FUNC_6(VAR_9, 39) & ~VAR_6);


 FUNC_5(VAR_9, 4,
     FUNC_4(VAR_9, 4) | VAR_4);

 VAR_10 = FUNC_6(VAR_9, 30);
 VAR_10 = (VAR_10 & ~0x18) | 0x10;
 FUNC_7(VAR_9, 30, VAR_10);
}
