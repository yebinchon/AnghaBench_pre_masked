
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int m; scalar_t__ d; } ;
typedef TYPE_1__ date ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(int VAR_0)
{
 date VAR_1;
 int VAR_2, VAR_3;

 VAR_1.y = VAR_0 - 1;
 VAR_1.m = 10;
 VAR_1.d = 0;

 VAR_2 = FUNC_0(&VAR_1);






 if ((VAR_3 = FUNC_1(VAR_2)) > 3)
  return (VAR_2 - VAR_3 + 7);
 else
  return (VAR_2 - VAR_3);
}
