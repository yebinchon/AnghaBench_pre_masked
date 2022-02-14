
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int mii_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct mii_softc *VAR_13)
{
 uint16_t VAR_14, VAR_15;
 int VAR_16;


 FUNC_2(VAR_13, VAR_8,
     FUNC_1(VAR_13, VAR_8) & ~VAR_9);
 FUNC_2(VAR_13, VAR_12, VAR_1 | VAR_0);

 for (VAR_16 = 0; VAR_16 < 1000; VAR_16++) {
  FUNC_0(1);
  if ((FUNC_1(VAR_13, VAR_12) & VAR_1) == 0)
   break;
 }

 if ((VAR_13->mii_flags & VAR_10) != 0) {

  VAR_14 = FUNC_1(VAR_13, VAR_11);
  VAR_14 &= ~VAR_2;
  VAR_14 |= 0x2000;
  FUNC_2(VAR_13, VAR_11, VAR_14);

  FUNC_2(VAR_13, VAR_4, VAR_5 |
      VAR_3);
  VAR_15 = FUNC_1(VAR_13, VAR_7);
  VAR_15 &= ~0x0002;
  VAR_15 |= 0x0010 | 0x0001;
  FUNC_2(VAR_13, VAR_7, VAR_15);
  FUNC_2(VAR_13, VAR_4, VAR_6 |
      VAR_3);


  FUNC_0(20 * 1000);

  FUNC_1(VAR_13, VAR_11);
  FUNC_2(VAR_13, VAR_4, VAR_5 |
      VAR_3);
  VAR_15 = FUNC_1(VAR_13, VAR_7);
  VAR_15 &= ~(0x0001 | 0x0002 | 0x0010);
  FUNC_2(VAR_13, VAR_7, VAR_15);
  FUNC_2(VAR_13, VAR_4, VAR_6 |
      VAR_3);

  FUNC_1(VAR_13, VAR_11);
  VAR_14 &= ~VAR_2;
  FUNC_2(VAR_13, VAR_11, VAR_14);
 }
}
