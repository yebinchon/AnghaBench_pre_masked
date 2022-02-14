
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

u_int8_t
FUNC_0(u_int32_t VAR_4)
{
 if (VAR_4 & (VAR_3 | VAR_2))
  return (0x00);
 else if (VAR_4 & VAR_1)
  return (0x7f);
 else if (VAR_4 & VAR_0)
  return (0x55);
 return (0x80);
}
