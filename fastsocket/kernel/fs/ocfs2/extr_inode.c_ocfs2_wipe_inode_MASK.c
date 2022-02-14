
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_orphaned_slot; } ;
struct inode {int i_mutex; int i_mode; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ocfs2_super*,int) ;
 int FUNC_9 (struct inode*,struct buffer_head*) ;
 struct inode* FUNC_10 (struct ocfs2_super*,int ,int) ;
 int FUNC_11 (struct inode*,struct buffer_head**,int) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct inode*,struct buffer_head*,struct inode*,struct buffer_head*) ;
 int FUNC_14 (struct inode*,struct buffer_head*) ;
 int FUNC_15 (struct ocfs2_super*,int) ;
 int FUNC_16 (struct ocfs2_super*,struct inode*,struct buffer_head*) ;
 int FUNC_17 (struct inode*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_2,
       struct buffer_head *VAR_3)
{
 int VAR_4, VAR_5;
 struct inode *VAR_6 = ((void*)0);
 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_super *VAR_8 = FUNC_0(VAR_2->i_sb);
 struct ocfs2_dinode *VAR_9;

 VAR_9 = (struct ocfs2_dinode *) VAR_3->b_data;
 VAR_5 = FUNC_4(VAR_9->i_orphaned_slot);

 VAR_4 = FUNC_8(VAR_8, VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_6 = FUNC_10(VAR_8,
             VAR_1,
             VAR_5);
 if (!VAR_6) {
  VAR_4 = -VAR_0;
  FUNC_5(VAR_4);
  goto bail;
 }




 FUNC_6(&VAR_6->i_mutex);
 VAR_4 = FUNC_11(VAR_6, &VAR_7, 1);
 if (VAR_4 < 0) {
  FUNC_7(&VAR_6->i_mutex);

  FUNC_5(VAR_4);
  goto bail;
 }





 VAR_4 = FUNC_16(VAR_8, VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_5(VAR_4);
  goto bail_unlock_dir;
 }


 if (FUNC_1(VAR_2->i_mode)) {
  VAR_4 = FUNC_9(VAR_2, VAR_3);
  if (VAR_4) {
   FUNC_5(VAR_4);
   goto bail_unlock_dir;
  }
 }


 VAR_4 = FUNC_17(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_5(VAR_4);
  goto bail_unlock_dir;
 }

 VAR_4 = FUNC_14(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_5(VAR_4);
  goto bail_unlock_dir;
 }

 VAR_4 = FUNC_13(VAR_2, VAR_3, VAR_6,
        VAR_7);
 if (VAR_4 < 0)
  FUNC_5(VAR_4);

bail_unlock_dir:
 FUNC_12(VAR_6, 1);
 FUNC_7(&VAR_6->i_mutex);
 FUNC_2(VAR_7);
bail:
 FUNC_3(VAR_6);
 FUNC_15(VAR_8, VAR_5);

 return VAR_4;
}
