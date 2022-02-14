
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static inline bool
FUNC_0(u_int16_t VAR_10,
      u_int8_t VAR_11,
      u_int8_t VAR_12,
      u_int8_t VAR_13)
{

 return (VAR_10 == VAR_2 || VAR_10 == VAR_3
  || VAR_10 == VAR_4
  || VAR_10 == VAR_1 || VAR_10 == VAR_0)
  && !(VAR_11 & VAR_5)
  && (VAR_12 == VAR_8
      || VAR_12 == VAR_6
      || VAR_12 == VAR_7)
  && VAR_13 <= VAR_9;
}
