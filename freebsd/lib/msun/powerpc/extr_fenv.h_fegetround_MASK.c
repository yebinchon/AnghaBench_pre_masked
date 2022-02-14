
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int __reg; } ;
union __fpscr {TYPE_1__ __bits; int __d; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

inline int
FUNC_1(void)
{
 union __fpscr VAR_1;

 FUNC_0(&VAR_1.__d);
 return (VAR_1.__bits.__reg & VAR_0);
}
