
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {struct ocfs2_lock_res ip_open_lockres; scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_super*,struct ocfs2_lock_res*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct ocfs2_super*) ;

int FUNC_9(struct inode *VAR_1)
{
 int VAR_2 = 0;
 struct ocfs2_lock_res *VAR_3;
 struct ocfs2_super *VAR_4 = FUNC_2(VAR_1->i_sb);

 FUNC_0(!VAR_1);

 FUNC_4();

 FUNC_3(0, "inode %llu take PRMODE open lock\n",
      (unsigned long long)FUNC_1(VAR_1)->ip_blkno);

 if (FUNC_8(VAR_4))
  goto out;

 VAR_3 = &FUNC_1(VAR_1)->ip_open_lockres;

 VAR_2 = FUNC_7(FUNC_2(VAR_1->i_sb), VAR_3,
        VAR_0, 0, 0);
 if (VAR_2 < 0)
  FUNC_5(VAR_2);

out:
 FUNC_6(VAR_2);
 return VAR_2;
}
