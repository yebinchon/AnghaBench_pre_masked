
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int8_t ;
typedef scalar_t__ const u_int16_t ;
typedef enum xt_multiport_flags { ____Placeholder_xt_multiport_flags } xt_multiport_flags ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(const u_int16_t *VAR_2, enum xt_multiport_flags VAR_3,
        u_int8_t VAR_4, u_int16_t VAR_5, u_int16_t VAR_6)
{
 unsigned int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_3 != VAR_0 && VAR_2[VAR_7] == VAR_5)
   return 1;

  if (VAR_3 != VAR_1 && VAR_2[VAR_7] == VAR_6)
   return 1;
 }

 return 0;
}
