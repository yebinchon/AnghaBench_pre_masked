
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_truncate_log {scalar_t__ tl_used; } ;
struct ocfs2_super {int sb; } ;
struct TYPE_2__ {struct ocfs2_truncate_log i_dealloc; } ;
struct ocfs2_dinode {int i_check; TYPE_1__ id2; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; int b_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ocfs2_dinode*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct ocfs2_dinode*) ;
 struct ocfs2_dinode* FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct ocfs2_dinode*,scalar_t__,int ) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,scalar_t__,int *) ;
 int FUNC_13 (struct ocfs2_super*,int,struct inode**,struct buffer_head**) ;
 int FUNC_14 (struct ocfs2_super*,struct buffer_head*,int ) ;

int FUNC_15(struct ocfs2_super *VAR_2,
          int VAR_3,
          struct ocfs2_dinode **VAR_4)
{
 int VAR_5;
 struct inode *VAR_6 = ((void*)0);
 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_dinode *VAR_8;
 struct ocfs2_truncate_log *VAR_9;

 *VAR_4 = ((void*)0);

 FUNC_9(0, "recover truncate log from slot %d\n", VAR_3);

 VAR_5 = FUNC_13(VAR_2, VAR_3, &VAR_6, &VAR_7);
 if (VAR_5 < 0) {
  FUNC_10(VAR_5);
  goto bail;
 }

 VAR_8 = (struct ocfs2_dinode *) VAR_7->b_data;




 FUNC_0(!FUNC_2(VAR_8));

 VAR_9 = &VAR_8->id2.i_dealloc;
 if (FUNC_7(VAR_9->tl_used)) {
  FUNC_9(0, "We'll have %u logs to recover\n",
       FUNC_7(VAR_9->tl_used));

  *VAR_4 = FUNC_6(VAR_7->b_size, VAR_1);
  if (!(*VAR_4)) {
   VAR_5 = -VAR_0;
   FUNC_10(VAR_5);
   goto bail;
  }



  FUNC_8(*VAR_4, VAR_7->b_data, VAR_7->b_size);



  VAR_9->tl_used = 0;

  FUNC_12(VAR_2->sb, VAR_7->b_data, &VAR_8->i_check);
  VAR_5 = FUNC_14(VAR_2, VAR_7, FUNC_1(VAR_6));
  if (VAR_5 < 0) {
   FUNC_10(VAR_5);
   goto bail;
  }
 }

bail:
 if (VAR_6)
  FUNC_4(VAR_6);
 FUNC_3(VAR_7);

 if (VAR_5 < 0 && (*VAR_4)) {
  FUNC_5(*VAR_4);
  *VAR_4 = ((void*)0);
 }

 FUNC_11(VAR_5);
 return VAR_5;
}
