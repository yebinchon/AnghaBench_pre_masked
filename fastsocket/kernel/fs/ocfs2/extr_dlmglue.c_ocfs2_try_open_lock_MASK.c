
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
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int ,int ) ;
 scalar_t__ FUNC_7 (struct ocfs2_super*) ;

int FUNC_8(struct inode *VAR_3, int VAR_4)
{
 int VAR_5 = 0, VAR_6;
 struct ocfs2_lock_res *VAR_7;
 struct ocfs2_super *VAR_8 = FUNC_2(VAR_3->i_sb);

 FUNC_0(!VAR_3);

 FUNC_4();

 FUNC_3(0, "inode %llu try to take %s open lock\n",
      (unsigned long long)FUNC_1(VAR_3)->ip_blkno,
      VAR_4 ? "EXMODE" : "PRMODE");

 if (FUNC_7(VAR_8))
  goto out;

 VAR_7 = &FUNC_1(VAR_3)->ip_open_lockres;

 VAR_6 = VAR_4 ? VAR_1 : VAR_2;







 VAR_5 = FUNC_6(FUNC_2(VAR_3->i_sb), VAR_7,
        VAR_6, VAR_0, 0);

out:
 FUNC_5(VAR_5);
 return VAR_5;
}
