
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* __bits; } ;
typedef TYPE_1__ sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 size_t FUNC_1 (int) ;
 int VAR_2 ;

int
FUNC_2(const sigset_t *VAR_3, int VAR_4)
{

 if (VAR_4 <= 0 || VAR_4 > VAR_1) {
  VAR_2 = VAR_0;
  return (-1);
 }
 return ((VAR_3->__bits[FUNC_1(VAR_4)] & FUNC_0(VAR_4)) ? 1 : 0);
}
