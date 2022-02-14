
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* __bits; } ;
typedef TYPE_1__ sigset_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(int VAR_0)
{
 sigset_t VAR_1;

 FUNC_1(&VAR_1);
 VAR_1.__bits[0] = VAR_0;
 return (FUNC_0(&VAR_1));
}
