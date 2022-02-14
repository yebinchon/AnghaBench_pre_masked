
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__*) ;

u_int32_t
FUNC_6(u_int32_t VAR_0, u_int32_t *VAR_1)
{
 u_int32_t VAR_2, VAR_3;
 u_int32_t VAR_4, VAR_5, VAR_6;

 if (FUNC_5(VAR_0, VAR_1))
  return VAR_0;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 VAR_3 = FUNC_2(VAR_0, VAR_1);

 if (VAR_2 != 0 && VAR_3 != 0 && VAR_2 != VAR_3) {

  if (FUNC_0(VAR_0) > 1)
   return VAR_2;
  else {
   VAR_4 = FUNC_1(FUNC_4(VAR_0));
   VAR_5 = FUNC_1(FUNC_4(VAR_2));
   VAR_6 = FUNC_1(FUNC_4(VAR_3));
   if (VAR_5 == VAR_6 || VAR_5 == VAR_4)
    return VAR_2;
   else if (VAR_6 == VAR_4)
    return VAR_3;
   else if (VAR_5 > VAR_6)
    return VAR_2;
   return VAR_3;
  }
 } else if (VAR_3 == 0)
  return VAR_2;
 else
  return VAR_3;
}
