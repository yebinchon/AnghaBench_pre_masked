
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int __reg; } ;
union __fpscr {int __d; TYPE_1__ __bits; } ;
typedef int fexcept_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

inline int
FUNC_2(const fexcept_t *VAR_2, int VAR_3)
{
 union __fpscr VAR_4;

 if (VAR_3 & VAR_1)
  VAR_3 |= VAR_0;
 FUNC_0(&VAR_4.__d);
 VAR_4.__bits.__reg &= ~VAR_3;
 VAR_4.__bits.__reg |= *VAR_2 & VAR_3;
 FUNC_1(VAR_4.__d);
 return (0);
}
