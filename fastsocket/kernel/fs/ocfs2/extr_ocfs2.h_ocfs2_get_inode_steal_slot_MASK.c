
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_lock; int s_inode_steal_slot; } ;
typedef int s16 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline s16 FUNC_2(struct ocfs2_super *VAR_0)
{
 s16 VAR_1;

 FUNC_0(&VAR_0->osb_lock);
 VAR_1 = VAR_0->s_inode_steal_slot;
 FUNC_1(&VAR_0->osb_lock);

 return VAR_1;
}
