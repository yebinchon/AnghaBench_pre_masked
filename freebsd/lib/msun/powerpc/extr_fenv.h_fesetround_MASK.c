
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int __reg; } ;
union __fpscr {int __d; TYPE_1__ __bits; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

inline int
FUNC_2(int VAR_1)
{
 union __fpscr VAR_2;

 if (VAR_1 & ~VAR_0)
  return (-1);
 FUNC_0(&VAR_2.__d);
 VAR_2.__bits.__reg &= ~VAR_0;
 VAR_2.__bits.__reg |= VAR_1;
 FUNC_1(VAR_2.__d);
 return (0);
}
