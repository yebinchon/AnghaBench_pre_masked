
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtkswitch_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtkswitch_softc*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mtkswitch_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;



 int FUNC_6 (int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static uint32_t
FUNC_9(struct mtkswitch_softc *VAR_11, int VAR_12)
{
 uint32_t VAR_13, VAR_14;

 FUNC_0(VAR_11, VAR_0);
 VAR_14 = 0;
 VAR_13 = FUNC_2(VAR_11, VAR_3);

 if (VAR_13 & FUNC_8(VAR_12))
  VAR_14 |= VAR_2;
 if (VAR_13 & FUNC_7(VAR_12))
  VAR_14 |= VAR_1;

 if (FUNC_1(VAR_12)) {
  if (VAR_13 & FUNC_3(VAR_12))
   VAR_14 |= VAR_6;
  if (VAR_13 & FUNC_4(VAR_12))
   VAR_14 |= (VAR_8 | VAR_4);
 } else {
  switch (FUNC_5(VAR_13, VAR_12)) {
  case 130:
   VAR_14 |= VAR_5;
   break;
  case 129:
   VAR_14 |= VAR_6;
   break;
  case 128:
   VAR_14 |= VAR_7;
   break;
  }

  VAR_13 = FUNC_6(VAR_13, VAR_12);
  if (VAR_13 & VAR_10)
   VAR_14 |= VAR_8;
  if (VAR_13 & VAR_9)
   VAR_14 |= VAR_4;
 }

 return (VAR_14);
}
