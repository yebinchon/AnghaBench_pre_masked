
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dinode {int i_ctime_nsec; int i_ctime; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_sb; TYPE_1__ i_ctime; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_9 (int *,struct buffer_head*) ;
 int * FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_3,
         struct buffer_head *VAR_4)
{
 int VAR_5;
 handle_t *VAR_6;
 struct ocfs2_dinode *VAR_7 = (struct ocfs2_dinode *)VAR_4->b_data;

 VAR_6 = FUNC_10(FUNC_2(VAR_3->i_sb),
       VAR_1);
 if (FUNC_1(VAR_6)) {
  VAR_5 = FUNC_3(VAR_6);
  FUNC_6(VAR_5);
  goto out;
 }

 VAR_5 = FUNC_8(VAR_6, FUNC_0(VAR_3), VAR_4,
          VAR_2);
 if (VAR_5) {
  FUNC_6(VAR_5);
  goto out_commit;
 }

 VAR_3->i_ctime = VAR_0;
 VAR_7->i_ctime = FUNC_5(VAR_3->i_ctime.tv_sec);
 VAR_7->i_ctime_nsec = FUNC_4(VAR_3->i_ctime.tv_nsec);

 FUNC_9(VAR_6, VAR_4);

out_commit:
 FUNC_7(FUNC_2(VAR_3->i_sb), VAR_6);
out:
 return VAR_5;
}
