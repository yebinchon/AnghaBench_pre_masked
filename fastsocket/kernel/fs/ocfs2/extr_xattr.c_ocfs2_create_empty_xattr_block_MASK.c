
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (int *) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,unsigned long long,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_super*,int *) ;
 int FUNC_6 (int *,struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,struct buffer_head**,int) ;
 int FUNC_7 (struct ocfs2_alloc_context*) ;
 int FUNC_8 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int * FUNC_9 (struct ocfs2_super*,int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_1,
       struct buffer_head *VAR_2,
       struct buffer_head **VAR_3,
       int VAR_4)
{
 int VAR_5;
 handle_t *VAR_6;
 struct ocfs2_alloc_context *VAR_7;
 struct ocfs2_super *VAR_8 = FUNC_1(VAR_1->i_sb);

 VAR_5 = FUNC_8(VAR_8, 1, &VAR_7);
 if (VAR_5 < 0) {
  FUNC_4(VAR_5);
  return VAR_5;
 }

 VAR_6 = FUNC_9(VAR_8, VAR_0);
 if (FUNC_0(VAR_6)) {
  VAR_5 = FUNC_2(VAR_6);
  FUNC_4(VAR_5);
  goto out;
 }

 FUNC_3(0, "create new xattr block for inode %llu, index = %d\n",
      (unsigned long long)VAR_2->b_blocknr, VAR_4);
 VAR_5 = FUNC_6(VAR_6, VAR_1, VAR_2,
           VAR_7, VAR_3, VAR_4);
 if (VAR_5)
  FUNC_4(VAR_5);

 FUNC_5(VAR_8, VAR_6);
out:
 FUNC_7(VAR_7);
 return VAR_5;
}
