
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct TYPE_2__ {int * le_prev; int * le_next; } ;
struct unionfs_node {TYPE_1__ un_hash; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct unionfs_node*,int ) ;
 struct vnode* VAR_0 ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct unionfs_node *VAR_2, struct vnode *VAR_3)
{
 FUNC_0((VAR_2 != ((void*)0)), ("unionfs_rem_cached_vnode: null node"));
 FUNC_0((VAR_3 != VAR_0),
     ("unionfs_rem_cached_vnode: null parent vnode"));
 FUNC_0((VAR_2->un_hash.le_prev != ((void*)0)),
     ("unionfs_rem_cached_vnode: null hash"));

 FUNC_2(VAR_3);
 FUNC_1(VAR_2, VAR_1);
 VAR_2->un_hash.le_next = ((void*)0);
 VAR_2->un_hash.le_prev = ((void*)0);
 FUNC_3(VAR_3);
}
