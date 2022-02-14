
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; } ;
typedef TYPE_1__ date ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(date *VAR_2)
{
 int VAR_3;


 if (VAR_1 == 0)
  VAR_1 = FUNC_0(&VAR_0);
 if ((VAR_3 = FUNC_0(VAR_2)) == -1)
  return (-1);
 if (VAR_2->y >= 1600)
  VAR_3 = (VAR_3 - 10 - (VAR_2->y - 1600) / 100 + (VAR_2->y - 1600) / 400);
 else if (VAR_3 > VAR_1)
  VAR_3 -= 10;
 return (VAR_3);
}
