
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_fs_info; } ;
struct smb_sb_info {scalar_t__ conn_pid; struct smb_sb_info* ops; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smb_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct smb_sb_info*) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct smb_sb_info*) ;
 int FUNC_6 (struct smb_sb_info*) ;
 int FUNC_7 (struct smb_sb_info*) ;
 int FUNC_8 (struct smb_sb_info*) ;
 int FUNC_9 (struct smb_sb_info*) ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(struct super_block *VAR_2)
{
 struct smb_sb_info *VAR_3 = FUNC_0(VAR_2);

 FUNC_3();

 FUNC_6(VAR_3);
 VAR_3->state = VAR_0;
 FUNC_9(VAR_3);

 FUNC_5(VAR_3);

 if (VAR_3->conn_pid)
  FUNC_2(VAR_3->conn_pid, VAR_1, 1);

 FUNC_1(VAR_3->ops);
 FUNC_7(VAR_3);
 VAR_2->s_fs_info = ((void*)0);
 FUNC_8(VAR_3);
 FUNC_4(VAR_3->conn_pid);
 FUNC_1(VAR_3);

 FUNC_10();
}
