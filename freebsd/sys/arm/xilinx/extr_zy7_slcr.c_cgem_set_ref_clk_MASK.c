
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zy7_slcr_softc {int dummy; } ;


 int FUNC_0 (struct zy7_slcr_softc*,int ,int) ;
 int FUNC_1 (struct zy7_slcr_softc*) ;
 int FUNC_2 (struct zy7_slcr_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct zy7_slcr_softc*) ;
 struct zy7_slcr_softc* VAR_9 ;
 int FUNC_4 (struct zy7_slcr_softc*) ;

int
FUNC_5(int VAR_10, int VAR_11)
{
 struct zy7_slcr_softc *VAR_12 = VAR_9;
 int VAR_13, VAR_14;

 if (!VAR_12)
  return (-1);




 for (VAR_14 = 1; VAR_14 <= VAR_3; VAR_14++) {
  VAR_13 = (VAR_8 + VAR_14 * VAR_11 / 2) /
   VAR_14 / VAR_11;
  if (VAR_13 > 0 && VAR_13 <= VAR_5 &&
      ((VAR_8 / VAR_13 / VAR_14) + 500) / 1000 ==
      (VAR_11 + 500) / 1000)
   break;
 }

 if (VAR_14 > VAR_3)
  return (-1);

 FUNC_1(VAR_12);


 FUNC_4(VAR_12);


 FUNC_0(VAR_12, VAR_10 ? VAR_1 : VAR_0,
     (VAR_14 << VAR_4) |
     (VAR_13 << VAR_6) |
     VAR_7 |
     VAR_2);


 FUNC_3(VAR_12);

 FUNC_2(VAR_12);

 return (0);
}
