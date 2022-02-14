
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {uintptr_t dtms_scratch_base; uintptr_t dtms_scratch_ptr; } ;
typedef TYPE_1__ dtrace_mstate_t ;



__attribute__((used)) static int
FUNC_0(uintptr_t VAR_0, size_t VAR_1, dtrace_mstate_t *VAR_2)
{
 if (VAR_0 < VAR_2->dtms_scratch_base)
  return (0);

 if (VAR_0 + VAR_1 < VAR_0)
  return (0);

 if (VAR_0 + VAR_1 > VAR_2->dtms_scratch_ptr)
  return (0);

 return (1);
}
