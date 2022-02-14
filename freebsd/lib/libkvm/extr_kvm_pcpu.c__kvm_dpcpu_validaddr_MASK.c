
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dpcpu_start; scalar_t__ dpcpu_stop; scalar_t__ dpcpu_curoff; int dpcpu_initialized; } ;
typedef TYPE_1__ kvm_t ;
typedef scalar_t__ kvaddr_t ;



kvaddr_t
FUNC_0(kvm_t *VAR_0, kvaddr_t VAR_1)
{

 if (VAR_1 == 0)
  return (VAR_1);

 if (!VAR_0->dpcpu_initialized)
  return (VAR_1);

 if (VAR_1 < VAR_0->dpcpu_start || VAR_1 >= VAR_0->dpcpu_stop)
  return (VAR_1);

 return (VAR_0->dpcpu_curoff + VAR_1);
}
