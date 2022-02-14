
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int nvpair_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_4(nvpair_t *VAR_4, nvpair_t *VAR_5, uint32_t VAR_6)
{
 boolean_t VAR_7 = VAR_0;
 if (VAR_6 & VAR_3) {
  if (FUNC_3(FUNC_1(VAR_4), FUNC_1(VAR_5)) == 0 &&
      FUNC_2(VAR_4) == FUNC_2(VAR_5))
   VAR_7 = VAR_1;
 } else {
  FUNC_0(VAR_6 == 0 || VAR_6 & VAR_2);
  if (FUNC_3(FUNC_1(VAR_4), FUNC_1(VAR_5)) == 0)
   VAR_7 = VAR_1;
 }
 return (VAR_7);
}
