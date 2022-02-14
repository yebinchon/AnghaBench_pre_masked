
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdissect_options ;
typedef unsigned int int32_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;

void
FUNC_2(netdissect_options *VAR_1,
                   int32_t VAR_2)
{
 if (VAR_2 < 0) {
  FUNC_0((VAR_1, "-"));
  if (VAR_2 == VAR_0) {
   FUNC_1(VAR_1, 2147483648U);
  } else {




   FUNC_1(VAR_1, -VAR_2);
  }
  return;
 }
 FUNC_1(VAR_1, VAR_2);
}
