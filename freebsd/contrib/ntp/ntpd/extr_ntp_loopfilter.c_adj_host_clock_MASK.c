
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 scalar_t__ VAR_4 ;
 double FUNC_1 (int) ;
 int FUNC_2 (double) ;
 double VAR_5 ;
 scalar_t__ VAR_6 ;
 double VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void
FUNC_3(
 void
 )
{
 double VAR_17;
 double VAR_18;
 VAR_16 += VAR_6;

 if (!VAR_12 || VAR_11)
  return;






 if (VAR_14 != VAR_1) {
  VAR_17 = 0.;
 } else if (VAR_9 > 0) {
  VAR_17 = VAR_5 / (VAR_0 * FUNC_1(1));
  VAR_9--;




 } else {
  VAR_17 = VAR_5 / (VAR_0 * FUNC_1(VAR_15));
 }
  VAR_18 = VAR_7;


 if (VAR_17 + VAR_18 > VAR_3)
  VAR_17 = VAR_3 - VAR_18;
 else if (VAR_17 + VAR_18 < -VAR_3)
  VAR_17 = -VAR_3 - VAR_18;

 VAR_5 -= VAR_17;







 FUNC_0(VAR_8 == VAR_4);
 VAR_8 = VAR_2;
 FUNC_2(VAR_17 + VAR_18);
 VAR_8 = VAR_4;

}
