
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fexcept_t ;
struct TYPE_5__ {int __status; } ;
struct TYPE_4__ {int __mxcsr; TYPE_2__ __x87; } ;
typedef TYPE_1__ fenv_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int*) ;

int
FUNC_4(const fexcept_t *VAR_0, int VAR_1)
{
 fenv_t VAR_2;

 FUNC_1(&VAR_2.__x87);
 VAR_2.__x87.__status &= ~VAR_1;
 VAR_2.__x87.__status |= *VAR_0 & VAR_1;
 FUNC_0(&VAR_2.__x87);

 FUNC_3(&VAR_2.__mxcsr);
 VAR_2.__mxcsr &= ~VAR_1;
 VAR_2.__mxcsr |= *VAR_0 & VAR_1;
 FUNC_2(&VAR_2.__mxcsr);

 return (0);
}
