
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_refcount_tree {int rf_lockres; int rf_sem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ocfs2_super*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ocfs2_super *VAR_0,
     struct ocfs2_refcount_tree *VAR_1,
     u64 VAR_2, u32 VAR_3)
{
 FUNC_0(&VAR_1->rf_sem);
 FUNC_1(&VAR_1->rf_lockres, VAR_0,
         VAR_2, VAR_3);
}
