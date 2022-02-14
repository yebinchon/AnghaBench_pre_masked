
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_refcount_tree {int rf_getcnt; int rf_blkno; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ocfs2_refcount_tree* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ocfs2_refcount_tree*,int ) ;

__attribute__((used)) static struct ocfs2_refcount_tree*
FUNC_3(struct ocfs2_super *VAR_1, u64 VAR_2)
{
 struct ocfs2_refcount_tree *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct ocfs2_refcount_tree), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->rf_blkno = VAR_2;
 FUNC_0(&VAR_3->rf_getcnt);
 FUNC_2(VAR_3, VAR_1->sb);

 return VAR_3;
}
