
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mc_dspace; int mc_space; int mc_deferred; int mc_alloc; } ;
typedef TYPE_1__ metaslab_class_t ;
typedef int int64_t ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(metaslab_class_t *VAR_0, int64_t VAR_1,
    int64_t VAR_2, int64_t VAR_3, int64_t VAR_4)
{
 FUNC_0(&VAR_0->mc_alloc, VAR_1);
 FUNC_0(&VAR_0->mc_deferred, VAR_2);
 FUNC_0(&VAR_0->mc_space, VAR_3);
 FUNC_0(&VAR_0->mc_dspace, VAR_4);
}
