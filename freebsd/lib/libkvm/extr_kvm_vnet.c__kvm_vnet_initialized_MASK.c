
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vnet_initialized; } ;
typedef TYPE_1__ kvm_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;

int
FUNC_2(kvm_t *VAR_0, int VAR_1)
{

 if (VAR_0->vnet_initialized || !VAR_1)
  return (VAR_0->vnet_initialized);

 (void) FUNC_0(VAR_0, FUNC_1());

 return (VAR_0->vnet_initialized);
}
