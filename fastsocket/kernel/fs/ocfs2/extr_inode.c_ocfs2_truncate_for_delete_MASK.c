
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_truncate_context {int dummy; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {scalar_t__ i_clusters; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct ocfs2_super*,int *) ;
 int FUNC_9 (struct ocfs2_super*,struct inode*,struct buffer_head*,struct ocfs2_truncate_context*) ;
 int FUNC_10 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_11 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_12 (struct ocfs2_super*,struct inode*,struct buffer_head*,struct ocfs2_truncate_context**) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int * FUNC_14 (struct ocfs2_super*,int ) ;

__attribute__((used)) static int FUNC_15(struct ocfs2_super *VAR_2,
         struct inode *VAR_3,
         struct buffer_head *VAR_4)
{
 int VAR_5 = 0;
 struct ocfs2_truncate_context *VAR_6 = ((void*)0);
 struct ocfs2_dinode *VAR_7;
 handle_t *VAR_8 = ((void*)0);

 FUNC_4();

 VAR_7 = (struct ocfs2_dinode *) VAR_4->b_data;





 if (VAR_7->i_clusters) {
  if (FUNC_13(VAR_3))
   FUNC_7(VAR_3, 0);

  VAR_8 = FUNC_14(VAR_2, VAR_0);
  if (FUNC_1(VAR_8)) {
   VAR_5 = FUNC_2(VAR_8);
   FUNC_5(VAR_5);
   goto out;
  }

  VAR_5 = FUNC_10(VAR_8, FUNC_0(VAR_3),
       VAR_4,
       VAR_1);
  if (VAR_5 < 0) {
   FUNC_5(VAR_5);
   goto out;
  }

  FUNC_3(VAR_3, 0);

  VAR_5 = FUNC_11(VAR_8, VAR_3, VAR_4);
  if (VAR_5 < 0) {
   FUNC_5(VAR_5);
   goto out;
  }

  FUNC_8(VAR_2, VAR_8);
  VAR_8 = ((void*)0);

  VAR_5 = FUNC_12(VAR_2, VAR_3, VAR_4, &VAR_6);
  if (VAR_5 < 0) {
   FUNC_5(VAR_5);
   goto out;
  }

  VAR_5 = FUNC_9(VAR_2, VAR_3, VAR_4, VAR_6);
  if (VAR_5 < 0) {
   FUNC_5(VAR_5);
   goto out;
  }
 }

out:
 if (VAR_8)
  FUNC_8(VAR_2, VAR_8);
 FUNC_6(VAR_5);
 return VAR_5;
}
