
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * v_data; } ;
typedef TYPE_1__ vnode_t ;
typedef int sfs_node_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void *
FUNC_1(vnode_t *VAR_0)
{
 sfs_node_t *VAR_1;
 void *VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = VAR_0->v_data;
 VAR_0->v_data = ((void*)0);
 return (VAR_2);
}
