
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _citrus_mapper {TYPE_1__* cm_ops; } ;
struct TYPE_2__ {int (* mo_init_state ) () ;} ;


 int FUNC_0 () ;

__attribute__((used)) static __inline void
FUNC_1(struct _citrus_mapper * __restrict VAR_0)
{

 (*VAR_0->cm_ops->mo_init_state)();
}
