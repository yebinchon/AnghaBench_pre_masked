
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* qla_unlock; int hw_lock; scalar_t__ hw_lock_held; } ;
typedef TYPE_1__ qla_host_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __inline void
FUNC_2(qla_host_t *VAR_0, const char *VAR_1)
{
 FUNC_0(&VAR_0->hw_lock);
 VAR_0->hw_lock_held = 0;
 VAR_0->qla_unlock = VAR_1;
 FUNC_1(&VAR_0->hw_lock);
}
