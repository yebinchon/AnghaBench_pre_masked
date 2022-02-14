
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zy7_slcr_softc {int dummy; } ;


 int FUNC_0 (struct zy7_slcr_softc*,int ) ;
 int FUNC_1 (struct zy7_slcr_softc*) ;
 int FUNC_2 (struct zy7_slcr_softc*) ;



 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 struct zy7_slcr_softc* VAR_7 ;

int
FUNC_5(int VAR_8)
{
 struct zy7_slcr_softc *VAR_9 = VAR_7;
 int VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;
 uint32_t VAR_14;
 int VAR_15;

 if (!VAR_9)
  return (-1);

 VAR_15 = FUNC_4(VAR_8);
 switch (VAR_15) {
  case 128:
   VAR_12 = VAR_6;
   break;

  case 130:
   VAR_12 = VAR_4;
   break;

  case 129:
   VAR_12 = VAR_5;
   break;

  default:
   return (-1);
 }

 FUNC_1(VAR_9);


 VAR_14 = FUNC_0(VAR_9, FUNC_3(VAR_8));
 VAR_11 = (VAR_14 & VAR_2) >>
     VAR_3;
 VAR_10 = (VAR_14 & VAR_0) >>
     VAR_1;

 FUNC_2(VAR_9);

 if (VAR_10 == 0)
  VAR_10 = 1;

 if (VAR_11 == 0)
  VAR_11 = 1;

 VAR_13 = (VAR_12 / VAR_10 / VAR_11);

 VAR_13 = (VAR_13 + 500) / 1000;
 VAR_13 = VAR_13 * 1000;

 return (VAR_13);
}
