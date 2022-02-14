
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int y; int m; int d; } ;
typedef TYPE_1__ date ;
struct TYPE_10__ {int y; size_t m; int d; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_3__ VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

date *
FUNC_2(int VAR_3, date *VAR_4)
{
 int const *VAR_5;
 date VAR_6;
 int VAR_7;






 VAR_6.y = VAR_3 / 365;
 VAR_6.m = 0;
 VAR_6.d = 0;
 while ((VAR_7 = FUNC_1(&VAR_6)) > VAR_3)
  VAR_6.y--;
 VAR_3 = VAR_3 - VAR_7;
 if (VAR_6.y == 1582)
  VAR_5 = VAR_2;
 else
  VAR_5 = VAR_1;

 for (VAR_6.m = 11; VAR_5[VAR_6.m] > VAR_3; VAR_6.m--)
  ;

 VAR_6.d = VAR_3 - VAR_5[VAR_6.m];


 if (VAR_6.y == VAR_0.y && VAR_6.m == VAR_0.m && VAR_0.d < VAR_6.d)
  VAR_6.d += 10;


 return (FUNC_0(VAR_4, &VAR_6));
}
