
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (int ,struct timespec*) ;

int
FUNC_1(struct timespec *VAR_1, int VAR_2)
{

 switch (VAR_2) {
 case 128:
  if (FUNC_0(VAR_0, VAR_1) == -1)
   return 0;
  break;
 default:
  return 0;
 }

 return VAR_2;
}
