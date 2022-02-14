
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int __reg; } ;
union __fpscr {int __d; TYPE_1__ __bits; } ;
typedef int fenv_t ;


 int FUNC_0 (int ) ;

inline int
FUNC_1(const fenv_t *VAR_0)
{
 union __fpscr VAR_1;

 VAR_1.__bits.__reg = *VAR_0;
 FUNC_0(VAR_1.__d);
 return (0);
}
