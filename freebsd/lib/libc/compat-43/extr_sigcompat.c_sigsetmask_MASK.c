
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* __bits; } ;
typedef TYPE_1__ sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(int VAR_1)
{
 sigset_t VAR_2, VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2);
 VAR_2.__bits[0] = VAR_1;
 VAR_4 = FUNC_0(VAR_0, &VAR_2, &VAR_3);
 if (VAR_4)
  return (VAR_4);
 return (VAR_3.__bits[0]);
}
