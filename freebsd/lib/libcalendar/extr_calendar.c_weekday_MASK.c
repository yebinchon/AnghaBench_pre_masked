
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; int member_2; } ;
typedef TYPE_1__ date ;


 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(int VAR_0)
{
 date VAR_1 = {1997, 8, 16};
 static int VAR_2;


 if (VAR_2 == 0)
  VAR_2 = FUNC_0(&VAR_1);


 VAR_0 = (VAR_0 - VAR_2) % 7;
 if (VAR_0 < 0)
  return (VAR_0 + 7);
 else
  return (VAR_0);
}
