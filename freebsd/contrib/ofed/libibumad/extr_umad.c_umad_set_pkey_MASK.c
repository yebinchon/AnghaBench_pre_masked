
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkey_index; } ;
struct ib_user_mad {TYPE_1__ addr; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(void *VAR_1, int VAR_2)
{
 struct ib_user_mad *VAR_3 = VAR_1;

 if (VAR_0)
  VAR_3->addr.pkey_index = VAR_2;

 return 0;
}
