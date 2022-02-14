
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vtype_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(vtype_t VAR_4, uint16_t VAR_5)
{
 int VAR_6 = (VAR_5 & 0xf);

 if ((VAR_4 == VAR_3) && (VAR_6 & VAR_0))
  return (1);
 else if (VAR_6 & VAR_1)
  return (!((VAR_4 == VAR_3) &&
      (VAR_6 & VAR_2)));
 return (0);
}
