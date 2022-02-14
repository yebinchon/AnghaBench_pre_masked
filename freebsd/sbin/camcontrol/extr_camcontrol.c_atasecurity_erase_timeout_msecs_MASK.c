
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;



__attribute__((used)) static u_int32_t
FUNC_0(u_int16_t VAR_0)
{

 if (VAR_0 == 0)
  return 2 * 3600 * 1000;
 else if (VAR_0 > 255)
  return (508 + 60) * 60 * 1000;

 return ((2 * VAR_0) + 5) * 60 * 1000;
}
