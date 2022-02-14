
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dpcpu_initialized; } ;
typedef TYPE_1__ kvm_t ;


 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(kvm_t *VAR_0, int VAR_1)
{

 if (VAR_0->dpcpu_initialized || !VAR_1)
  return (VAR_0->dpcpu_initialized);

 (void)FUNC_0(VAR_0);

 return (VAR_0->dpcpu_initialized);
}
