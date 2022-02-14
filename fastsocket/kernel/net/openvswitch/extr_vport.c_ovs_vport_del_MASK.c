
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {TYPE_1__* ops; int hash_node; } ;
struct TYPE_2__ {int (* destroy ) (struct vport*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vport*) ;

void FUNC_3(struct vport *VAR_0)
{
 FUNC_0();

 FUNC_1(&VAR_0->hash_node);

 VAR_0->ops->destroy(VAR_0);
}
