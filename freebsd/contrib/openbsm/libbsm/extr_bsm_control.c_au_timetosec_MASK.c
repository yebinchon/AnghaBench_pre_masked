
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int time_t ;



__attribute__((used)) static int
FUNC_0(time_t *VAR_0, u_long VAR_1, char VAR_2)
{
 if (((void*)0) == VAR_0)
  return (-1);

 switch(VAR_2) {
 case 's':

  *VAR_0 = (time_t)VAR_1;
  break;

 case 'h':

  *VAR_0 = (time_t)VAR_1 * 60 * 60;
  break;

 case 'd':

  *VAR_0 = (time_t)VAR_1 * 60 * 60 * 24;
  break;

 case 'y':

  *VAR_0 = (time_t)VAR_1 * 60 * 60 * 24 * 364 +
      ((time_t)VAR_1 / 4) * 60 * 60 * 24;
  break;

 default:
  return (-1);
 }
 return (0);
}
