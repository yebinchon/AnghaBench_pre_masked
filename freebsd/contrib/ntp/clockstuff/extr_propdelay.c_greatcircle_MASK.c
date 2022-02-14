
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (int) ;
 int FUNC_1 (double) ;
 int VAR_2 ;
 int FUNC_2 (char*,double,double,double,double,double) ;
 int FUNC_3 (double) ;

__attribute__((used)) static double
FUNC_4(
 double VAR_3,
 double VAR_4,
 double VAR_5,
 double VAR_6
 )
{
 double VAR_7;
 double VAR_8, VAR_9;

 VAR_8 = VAR_3 * VAR_1;
 VAR_9 = VAR_5 * VAR_1;
 VAR_7 = VAR_0 * FUNC_0(
  (FUNC_1(VAR_8) * FUNC_1(VAR_9) * FUNC_1((VAR_6-VAR_4)*VAR_1))
  + (FUNC_3(VAR_8) * FUNC_3(VAR_9)));
 if (VAR_2 >= 2)
     FUNC_2(
      "greatcircle lat1 %g long1 %g lat2 %g long2 %g dist %g\n",
      VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 return VAR_7;
}
