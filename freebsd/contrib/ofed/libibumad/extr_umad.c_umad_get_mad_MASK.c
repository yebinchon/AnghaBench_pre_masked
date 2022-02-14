
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkey_index; } ;
struct ib_user_mad {void* data; TYPE_1__ addr; } ;


 scalar_t__ VAR_0 ;

void *FUNC_0(void *VAR_1)
{
 return VAR_0 ? ((struct ib_user_mad *)VAR_1)->data :
     (void *)&((struct ib_user_mad *)VAR_1)->addr.pkey_index;
}
