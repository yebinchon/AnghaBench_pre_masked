
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int bool_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct timeval VAR_3 ;

bool_t
FUNC_0(int VAR_4, void *VAR_5)
{
 switch (VAR_4) {
 case 130:
  *(struct timeval *)VAR_5 = VAR_3;
  break;
 case 128:
  VAR_3 = *(struct timeval *)VAR_5;
  break;
 case 129:
  VAR_2 = *(int *)VAR_5;
  break;
 case 131:
  *(int *)VAR_5 = VAR_2;
  break;
 default:
  return (VAR_0);
 }
 return (VAR_1);
}
