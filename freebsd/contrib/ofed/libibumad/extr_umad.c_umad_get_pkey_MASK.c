
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkey_index; } ;
struct ib_user_mad {TYPE_1__ addr; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(void *VAR_1)
{
 struct ib_user_mad *VAR_2 = VAR_1;

 if (VAR_0)
  return VAR_2->addr.pkey_index;

 return 0;
}
