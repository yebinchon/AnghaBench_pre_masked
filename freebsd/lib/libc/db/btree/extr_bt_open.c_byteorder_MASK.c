
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(void)
{
 u_int32_t VAR_2;
 u_char *VAR_3;

 VAR_2 = 0x01020304;
 VAR_3 = (u_char *)&VAR_2;
 switch (*VAR_3) {
 case 1:
  return (VAR_0);
 case 4:
  return (VAR_1);
 default:
  return (0);
 }
}
