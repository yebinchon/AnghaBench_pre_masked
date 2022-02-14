
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int slot_num; } ;
struct ocfs2_dir_lookup_result {int dummy; } ;
struct ocfs2_dinode {int i_orphaned_slot; int i_flags; } ;
struct inode {int i_nlink; int i_mode; int i_ino; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,struct inode*,char*,int ,struct inode*,scalar_t__,struct buffer_head*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,char*,unsigned long long,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct ocfs2_dinode*,int) ;
 int FUNC_12 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_13 (int *,struct buffer_head*) ;
 int FUNC_14 (struct inode*,struct buffer_head**) ;
 int FUNC_15 (struct ocfs2_dinode*) ;

__attribute__((used)) static int FUNC_16(struct ocfs2_super *VAR_3,
       handle_t *VAR_4,
       struct inode *VAR_5,
       struct ocfs2_dinode *VAR_6,
       char *VAR_7,
       struct ocfs2_dir_lookup_result *VAR_8,
       struct inode *VAR_9)
{
 struct buffer_head *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 struct ocfs2_dinode *VAR_12;

 FUNC_8("(inode->i_ino = %lu)\n", VAR_5->i_ino);

 VAR_11 = FUNC_14(VAR_9, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_9(VAR_11);
  goto leave;
 }

 VAR_11 = FUNC_12(VAR_4,
      FUNC_0(VAR_9),
      VAR_10,
      VAR_0);
 if (VAR_11 < 0) {
  FUNC_9(VAR_11);
  goto leave;
 }



 VAR_12 = (struct ocfs2_dinode *) VAR_10->b_data;
 if (FUNC_2(VAR_5->i_mode))
  FUNC_11(VAR_12, 1);
 VAR_9->i_nlink = FUNC_15(VAR_12);

 VAR_11 = FUNC_13(VAR_4, VAR_10);
 if (VAR_11 < 0) {
  FUNC_9(VAR_11);
  goto leave;
 }

 VAR_11 = FUNC_3(VAR_4, VAR_9, VAR_7,
       VAR_2, VAR_5,
       FUNC_1(VAR_5)->ip_blkno,
       VAR_10, VAR_8);
 if (VAR_11 < 0) {
  FUNC_9(VAR_11);
  goto leave;
 }

 FUNC_6(&VAR_6->i_flags, VAR_1);




 VAR_6->i_orphaned_slot = FUNC_5(VAR_3->slot_num);

 FUNC_7(0, "Inode %llu orphaned in slot %d\n",
      (unsigned long long)FUNC_1(VAR_5)->ip_blkno, VAR_3->slot_num);

leave:
 FUNC_4(VAR_10);

 FUNC_10(VAR_11);
 return VAR_11;
}
