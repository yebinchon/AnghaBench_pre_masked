
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u_long ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 (char const*,char*,...) ;
 size_t FUNC_4 (char const*) ;

int32_t
FUNC_5(
 const char * VAR_3
 )
{
 u_short VAR_4,VAR_5,VAR_6;
 u_long VAR_7;
 int VAR_8, VAR_9;
 size_t VAR_10;

 VAR_10 = FUNC_4(VAR_3);
 VAR_8 = FUNC_3(VAR_3, "%4hu-%2hu-%2hu%n", &VAR_4, &VAR_5, &VAR_6, &VAR_9);
 if (VAR_8 == 3 && (size_t)VAR_9 == VAR_10) {
  if (VAR_5 >= 1 && VAR_5 <= 12 && VAR_6 >= 1 && VAR_6 <= 31)
   return FUNC_2(VAR_4-1, VAR_5-1, VAR_6)
       - VAR_0;
  goto buildstamp;
 }

 VAR_8 = FUNC_3(VAR_3, "%lu%n", &VAR_7, &VAR_9);
 if (VAR_8 == 1 && (size_t)VAR_9 == VAR_10) {
  if (VAR_7 <= VAR_1)
   return (int32_t)VAR_7;
  goto buildstamp;
 }

  buildstamp:
 FUNC_1(VAR_2,
  "basedate string \"%s\" invalid, build date substituted!",
  VAR_3);
 return FUNC_0();
}
