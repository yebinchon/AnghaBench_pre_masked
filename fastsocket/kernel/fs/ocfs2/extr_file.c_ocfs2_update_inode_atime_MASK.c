
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_atime_nsec; int i_atime; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_sb; TYPE_1__ i_atime; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ocfs2_super*,int *) ;
 int FUNC_10 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_11 (int *,struct buffer_head*) ;
 int * FUNC_12 (struct ocfs2_super*,int ) ;

int FUNC_13(struct inode *VAR_3,
        struct buffer_head *VAR_4)
{
 int VAR_5;
 struct ocfs2_super *VAR_6 = FUNC_2(VAR_3->i_sb);
 handle_t *VAR_7;
 struct ocfs2_dinode *VAR_8 = (struct ocfs2_dinode *) VAR_4->b_data;

 FUNC_6();

 VAR_7 = FUNC_12(VAR_6, VAR_1);
 if (FUNC_1(VAR_7)) {
  VAR_5 = FUNC_3(VAR_7);
  FUNC_7(VAR_5);
  goto out;
 }

 VAR_5 = FUNC_10(VAR_7, FUNC_0(VAR_3), VAR_4,
          VAR_2);
 if (VAR_5) {
  FUNC_7(VAR_5);
  goto out_commit;
 }






 VAR_3->i_atime = VAR_0;
 VAR_8->i_atime = FUNC_5(VAR_3->i_atime.tv_sec);
 VAR_8->i_atime_nsec = FUNC_4(VAR_3->i_atime.tv_nsec);

 VAR_5 = FUNC_11(VAR_7, VAR_4);
 if (VAR_5 < 0)
  FUNC_7(VAR_5);

out_commit:
 FUNC_9(FUNC_2(VAR_3->i_sb), VAR_7);
out:
 FUNC_8(VAR_5);
 return VAR_5;
}
