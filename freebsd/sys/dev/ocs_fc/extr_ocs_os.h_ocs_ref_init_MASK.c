
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; void* arg; int release; } ;
typedef TYPE_1__ ocs_ref_t ;
typedef int ocs_ref_release_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void
FUNC_1(ocs_ref_t *VAR_0, ocs_ref_release_t VAR_1, void *VAR_2)
{
 VAR_0->release = VAR_1;
 VAR_0->arg = VAR_2;
 FUNC_0(&VAR_0->count, 1);
}
