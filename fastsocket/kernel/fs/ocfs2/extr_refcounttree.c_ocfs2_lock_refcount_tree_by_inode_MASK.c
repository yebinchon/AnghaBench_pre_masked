
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_refcount_tree {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,int *) ;
 int FUNC_3 (int ,int ,int,struct ocfs2_refcount_tree**,struct buffer_head**) ;

int FUNC_4(struct inode *VAR_0, int VAR_1,
          struct ocfs2_refcount_tree **VAR_2,
          struct buffer_head **VAR_3)
{
 int VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_2(VAR_0, &VAR_5);
 if (VAR_4) {
  FUNC_1(VAR_4);
  return VAR_4;
 }

 return FUNC_3(FUNC_0(VAR_0->i_sb), VAR_5,
     VAR_1, VAR_2, VAR_3);
}
