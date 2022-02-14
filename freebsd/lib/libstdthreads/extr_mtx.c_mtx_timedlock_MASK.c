
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int mtx_t ;



 int FUNC_0 (int *,struct timespec const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(mtx_t *restrict VAR_3, const struct timespec *restrict VAR_4)
{

 switch (FUNC_0(VAR_3, VAR_4)) {
 case 0:
  return (VAR_1);
 case 128:
  return (VAR_2);
 default:
  return (VAR_0);
 }
}
