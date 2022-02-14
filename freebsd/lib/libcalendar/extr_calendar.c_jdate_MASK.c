
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int y; int m; int d; } ;
typedef TYPE_1__ date ;


 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

date *
FUNC_2(int VAR_1, date *VAR_2)
{
 date VAR_3;
 int VAR_4;






 VAR_3.y = VAR_1 / 365;
 VAR_3.m = 0;
 VAR_3.d = 0;
 while ((VAR_4 = FUNC_1(&VAR_3)) > VAR_1)
  VAR_3.y--;






 VAR_4 = VAR_1 - VAR_4;
 for (VAR_3.m = 11; VAR_0[VAR_3.m] > VAR_4; VAR_3.m--)
  ;


 VAR_3.d = VAR_4 - VAR_0[VAR_3.m];


 return (FUNC_0(VAR_2, &VAR_3));
}
