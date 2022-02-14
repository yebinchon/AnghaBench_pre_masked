
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_nlink; int i_mode; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,unsigned long long,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_dinode*,int) ;
 int FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (int *,struct inode*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_10 (char*,int ,struct inode*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_11 (struct ocfs2_dir_lookup_result*) ;
 int FUNC_12 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_13 (int *,struct buffer_head*) ;
 int FUNC_14 (struct ocfs2_dinode*) ;

int FUNC_15(struct ocfs2_super *VAR_2,
       handle_t *VAR_3,
       struct inode *VAR_4,
       struct inode *VAR_5,
       struct buffer_head *VAR_6)
{
 char VAR_7[VAR_1 + 1];
 struct ocfs2_dinode *VAR_8;
 int VAR_9 = 0;
 struct ocfs2_dir_lookup_result VAR_10 = { ((void*)0), };

 FUNC_4();

 VAR_9 = FUNC_8(FUNC_1(VAR_5)->ip_blkno, VAR_7);
 if (VAR_9 < 0) {
  FUNC_5(VAR_9);
  goto leave;
 }

 FUNC_3(0, "removing '%s' from orphan dir %llu (namelen=%d)\n",
      VAR_7, (unsigned long long)FUNC_1(VAR_4)->ip_blkno,
      VAR_1);


 VAR_9 = FUNC_10(VAR_7, VAR_1, VAR_4,
      &VAR_10);
 if (VAR_9) {
  FUNC_5(VAR_9);
  goto leave;
 }


 VAR_9 = FUNC_9(VAR_3, VAR_4, &VAR_10);
 if (VAR_9 < 0) {
  FUNC_5(VAR_9);
  goto leave;
 }

 VAR_9 = FUNC_12(VAR_3,
      FUNC_0(VAR_4),
      VAR_6,
      VAR_0);
 if (VAR_9 < 0) {
  FUNC_5(VAR_9);
  goto leave;
 }


 VAR_8 = (struct ocfs2_dinode *) VAR_6->b_data;
 if (FUNC_2(VAR_5->i_mode))
  FUNC_7(VAR_8, -1);
 VAR_4->i_nlink = FUNC_14(VAR_8);

 VAR_9 = FUNC_13(VAR_3, VAR_6);
 if (VAR_9 < 0) {
  FUNC_5(VAR_9);
  goto leave;
 }

leave:
 FUNC_11(&VAR_10);

 FUNC_6(VAR_9);
 return VAR_9;
}
