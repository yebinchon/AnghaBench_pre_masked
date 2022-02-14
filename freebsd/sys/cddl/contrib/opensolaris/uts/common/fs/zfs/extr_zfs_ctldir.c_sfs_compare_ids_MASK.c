
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_data; } ;
struct TYPE_2__ {scalar_t__ sn_id; scalar_t__ sn_parent_id; } ;
typedef TYPE_1__ sfs_node_t ;



__attribute__((used)) static int
FUNC_0(struct vnode *VAR_0, void *VAR_1)
{
 sfs_node_t *VAR_2 = VAR_0->v_data;
 sfs_node_t *VAR_3 = VAR_1;
 bool VAR_4;

 VAR_4 = VAR_2->sn_id == VAR_3->sn_id &&
     VAR_2->sn_parent_id == VAR_3->sn_parent_id;


 return (!VAR_4);
}
