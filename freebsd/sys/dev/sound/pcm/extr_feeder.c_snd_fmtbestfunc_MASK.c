
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static u_int32_t
FUNC_9(u_int32_t VAR_0, u_int32_t *VAR_1, int VAR_2)
{
 u_int32_t VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;

 if (VAR_0 == 0 || VAR_1 == ((void*)0) || VAR_1[0] == 0)
  return 0;

 if (FUNC_8(VAR_0, VAR_1))
  return VAR_0;

 VAR_3 = 0;
 VAR_4 = FUNC_7(VAR_0);
 VAR_6 = 0;
 for (VAR_7 = 0; VAR_1[VAR_7] != 0; VAR_7++) {
  VAR_5 = FUNC_7(VAR_1[VAR_7]);
  if (VAR_2 && !FUNC_0(VAR_4, VAR_5) &&
      (FUNC_2(VAR_5, VAR_4) ||
      (VAR_6 != 0 && FUNC_1(VAR_5, VAR_6))))
    continue;
  if (VAR_6 == 0 ||
       (FUNC_6(VAR_5) == FUNC_6(VAR_4)) ||
       (FUNC_6(VAR_5) == FUNC_6(VAR_6)) ||
       (FUNC_6(VAR_5) > FUNC_6(VAR_6) &&
       FUNC_6(VAR_5) < FUNC_6(VAR_4)) ||
       (FUNC_6(VAR_5) < FUNC_6(VAR_6) &&
       FUNC_6(VAR_5) > FUNC_6(VAR_4)) ||
       (FUNC_6(VAR_6) < FUNC_6(VAR_4) &&
       FUNC_6(VAR_5) > FUNC_6(VAR_6))) {
   if (FUNC_6(VAR_6) != FUNC_6(VAR_5) ||
        FUNC_3(VAR_4) == FUNC_3(VAR_5) ||
        ((FUNC_3(VAR_6) != FUNC_3(VAR_4) &&
        !FUNC_4(VAR_4, VAR_6) &&
        (FUNC_4(VAR_4, VAR_5) ||
        (!FUNC_5(VAR_4, VAR_6) &&
        FUNC_5(VAR_4, VAR_5)))))) {
    VAR_3 = VAR_1[VAR_7];
    VAR_6 = VAR_5;
   }
  }
 }
 return VAR_3;
}
