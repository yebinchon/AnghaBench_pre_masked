
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int ocs; } ;
typedef TYPE_1__ ocs_node_t ;


 int FUNC_0 (int ,int *,char*) ;

__attribute__((used)) static inline void
FUNC_1(ocs_node_t *VAR_0)
{
 FUNC_0(VAR_0->ocs, &VAR_0->lock, "node rlock");
}
