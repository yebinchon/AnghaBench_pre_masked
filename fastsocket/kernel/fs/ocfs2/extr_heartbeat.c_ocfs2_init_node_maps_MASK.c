
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_recovering_orphan_dirs; int node_map_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ocfs2_super *VAR_0)
{
 FUNC_1(&VAR_0->node_map_lock);
 FUNC_0(&VAR_0->osb_recovering_orphan_dirs);
}
