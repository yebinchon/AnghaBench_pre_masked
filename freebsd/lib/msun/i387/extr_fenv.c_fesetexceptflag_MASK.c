
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fexcept_t ;
struct TYPE_4__ {int __status; } ;
typedef TYPE_1__ fenv_t ;
typedef int __uint32_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;

int
FUNC_5(const fexcept_t *VAR_0, int VAR_1)
{
 fenv_t VAR_2;
 __uint32_t VAR_3;

 FUNC_2(&VAR_2);
 VAR_2.__status &= ~VAR_1;
 VAR_2.__status |= *VAR_0 & VAR_1;
 FUNC_1(&VAR_2);

 if (FUNC_0()) {
  FUNC_4(&VAR_3);
  VAR_3 &= ~VAR_1;
  VAR_3 |= *VAR_0 & VAR_1;
  FUNC_3(&VAR_3);
 }

 return (0);
}
