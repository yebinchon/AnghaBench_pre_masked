
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zy7_slcr_softc {int dummy; } ;


 int FUNC_0 (struct zy7_slcr_softc*,int ) ;
 int FUNC_1 (struct zy7_slcr_softc*,int ,int) ;
 int FUNC_2 (struct zy7_slcr_softc*) ;
 int FUNC_3 (struct zy7_slcr_softc*) ;



 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct zy7_slcr_softc*) ;
 struct zy7_slcr_softc* VAR_8 ;
 int FUNC_7 (struct zy7_slcr_softc*) ;

int
FUNC_8(int VAR_9, int VAR_10)
{
 struct zy7_slcr_softc *VAR_11 = VAR_8;
 int VAR_12, VAR_13;
 int VAR_14;
 uint32_t VAR_15;
 int VAR_16;

 if (!VAR_11)
  return (-1);

 VAR_16 = FUNC_5(VAR_9);
 switch (VAR_16) {
  case 128:
   VAR_14 = VAR_7;
   break;

  case 130:
   VAR_14 = VAR_5;
   break;

  case 129:
   VAR_14 = VAR_6;
   break;

  default:
   return (-1);
 }




 for (VAR_13 = 1; VAR_13 <= VAR_4; VAR_13++) {
  VAR_12 = (VAR_14 + VAR_13 * VAR_10 / 2) /
   VAR_13 / VAR_10;
  if (VAR_12 > 0 && VAR_12 <= VAR_4 &&
      ((VAR_14 / VAR_12 / VAR_13) + 500) / 1000 ==
      (VAR_10 + 500) / 1000)
   break;
 }

 if (VAR_13 > VAR_4)
  return (-1);

 FUNC_2(VAR_11);


 FUNC_7(VAR_11);


 VAR_15 = FUNC_0(VAR_11, FUNC_4(VAR_9));
 VAR_15 &= ~(VAR_2 |
     VAR_0);
 VAR_15 |= (VAR_13 << VAR_3) |
     (VAR_12 << VAR_1);
 FUNC_1(VAR_11, FUNC_4(VAR_9), VAR_15);


 FUNC_6(VAR_11);

 FUNC_3(VAR_11);

 return (VAR_14 / VAR_12 / VAR_13);
}
