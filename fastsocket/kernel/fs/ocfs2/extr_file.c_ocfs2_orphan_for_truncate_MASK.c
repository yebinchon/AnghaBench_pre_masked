
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_mtime_nsec; int i_ctime_nsec; void* i_mtime; void* i_ctime; void* i_size; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct inode {TYPE_1__ i_ctime; TYPE_1__ i_mtime; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct ocfs2_super*,int *) ;
 int FUNC_11 (struct inode*,struct buffer_head*,int ) ;
 int FUNC_12 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_13 (int *,struct buffer_head*) ;
 int * FUNC_14 (struct ocfs2_super*,int ) ;
 int FUNC_15 (struct inode*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct ocfs2_super *VAR_3,
         struct inode *VAR_4,
         struct buffer_head *VAR_5,
         u64 VAR_6)
{
 int VAR_7;
 handle_t *VAR_8;
 struct ocfs2_dinode *VAR_9;
 u64 VAR_10;

 FUNC_6();






 VAR_7 = FUNC_11(VAR_4, VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_7(VAR_7);
  return VAR_7;
 }




 VAR_8 = FUNC_14(VAR_3, VAR_1);
 if (FUNC_1(VAR_8)) {
  VAR_7 = FUNC_2(VAR_8);
  FUNC_7(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_12(VAR_8, FUNC_0(VAR_4), VAR_5,
      VAR_2);
 if (VAR_7 < 0) {
  FUNC_7(VAR_7);
  goto out_commit;
 }




 VAR_10 = FUNC_9(VAR_4->i_sb, VAR_6);
 VAR_7 = FUNC_15(VAR_4, VAR_8, VAR_6,
            VAR_10);
 if (VAR_7) {
  FUNC_7(VAR_7);
  goto out_commit;
 }

 FUNC_5(VAR_4, VAR_6);
 VAR_4->i_ctime = VAR_4->i_mtime = VAR_0;

 VAR_9 = (struct ocfs2_dinode *) VAR_5->b_data;
 VAR_9->i_size = FUNC_4(VAR_6);
 VAR_9->i_ctime = VAR_9->i_mtime = FUNC_4(VAR_4->i_ctime.tv_sec);
 VAR_9->i_ctime_nsec = VAR_9->i_mtime_nsec = FUNC_3(VAR_4->i_ctime.tv_nsec);

 VAR_7 = FUNC_13(VAR_8, VAR_5);
 if (VAR_7 < 0)
  FUNC_7(VAR_7);

out_commit:
 FUNC_10(VAR_3, VAR_8);
out:

 FUNC_8(VAR_7);
 return VAR_7;
}
