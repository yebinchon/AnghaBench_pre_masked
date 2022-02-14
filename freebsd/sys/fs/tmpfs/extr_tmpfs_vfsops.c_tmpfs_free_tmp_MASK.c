
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_mount {scalar_t__ tm_refcount; scalar_t__ tm_pages_used; scalar_t__ tm_nodes_inuse; int tm_allnode_lock; int tm_node_pool; int tm_dirent_pool; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct tmpfs_mount*) ;
 int FUNC_2 (struct tmpfs_mount*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct tmpfs_mount *VAR_1)
{

 FUNC_0(VAR_1->tm_refcount > 0);
 VAR_1->tm_refcount--;
 if (VAR_1->tm_refcount > 0) {
  FUNC_1(VAR_1);
  return;
 }
 FUNC_1(VAR_1);

 FUNC_4(VAR_1->tm_dirent_pool);
 FUNC_4(VAR_1->tm_node_pool);

 FUNC_3(&VAR_1->tm_allnode_lock);
 FUNC_0(VAR_1->tm_pages_used == 0);
 FUNC_0(VAR_1->tm_nodes_inuse == 0);

 FUNC_2(VAR_1, VAR_0);
}
