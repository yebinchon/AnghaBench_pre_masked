
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; } ;
typedef TYPE_1__ date ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,TYPE_1__*) ;

int
FUNC_2(int VAR_0, int *VAR_1)
{
 date VAR_2;
 int VAR_3;

 FUNC_1(VAR_0, &VAR_2);
 for (*VAR_1 = VAR_2.y + 1; VAR_0 < (VAR_3 = FUNC_0(*VAR_1)); (*VAR_1)--)
  ;
 return ((VAR_0 - VAR_3) / 7 + 1);
}
