
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;



__attribute__((used)) static int
FUNC_0(size_t *VAR_0, u_long VAR_1, char VAR_2)
{
 if (((void*)0) == VAR_0)
  return (-1);

 switch(VAR_2) {
 case 'B':
 case ' ':

  *VAR_0 = (size_t)VAR_1;
  break;

 case 'K':

  *VAR_0 = (size_t)VAR_1 * 1024;
  break;

 case 'M':

  *VAR_0 = (size_t)VAR_1 * 1024 * 1024;
  break;

 case 'G':

  *VAR_0 = (size_t)VAR_1 * 1024 * 1024 * 1024;
  break;

 default:
  return (-1);
 }
 return (0);
}
