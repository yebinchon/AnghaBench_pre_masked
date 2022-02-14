
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t
FUNC_0(
 const char *VAR_0,
 const char *VAR_1
 )
{
 const char *VAR_2;
 unsigned char VAR_3;


 while (VAR_1 != VAR_0) {
  VAR_3 = VAR_1[-1];
  if (VAR_3 > ' ' && VAR_3 < 128)
   break;
  --VAR_1;
 }

 for (VAR_2 = VAR_0; VAR_2 != VAR_1; ++VAR_2) {
  VAR_3 = VAR_2[0];
  if ((VAR_3 < ' ' || VAR_3 >= 128) && VAR_3 != '\t')
   break;
 }
 return (size_t)(VAR_2 - VAR_0);
}
