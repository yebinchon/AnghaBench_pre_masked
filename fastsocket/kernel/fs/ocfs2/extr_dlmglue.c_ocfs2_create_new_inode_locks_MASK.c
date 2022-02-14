
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int ip_open_lockres; int ip_inode_lockres; int ip_rw_lockres; scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_super*,int *,int,int) ;
 int FUNC_8 (struct inode*) ;

int FUNC_9(struct inode *VAR_0)
{
 int VAR_1;
 struct ocfs2_super *VAR_2 = FUNC_2(VAR_0->i_sb);

 FUNC_0(!VAR_0);
 FUNC_0(!FUNC_8(VAR_0));

 FUNC_4();

 FUNC_3(0, "Inode %llu\n", (unsigned long long)FUNC_1(VAR_0)->ip_blkno);
 VAR_1 = FUNC_7(VAR_2, &FUNC_1(VAR_0)->ip_rw_lockres, 1, 1);
 if (VAR_1) {
  FUNC_5(VAR_1);
  goto bail;
 }





 VAR_1 = FUNC_7(VAR_2, &FUNC_1(VAR_0)->ip_inode_lockres, 1, 0);
 if (VAR_1) {
  FUNC_5(VAR_1);
  goto bail;
 }

 VAR_1 = FUNC_7(VAR_2, &FUNC_1(VAR_0)->ip_open_lockres, 0, 0);
 if (VAR_1) {
  FUNC_5(VAR_1);
  goto bail;
 }

bail:
 FUNC_6(VAR_1);
 return VAR_1;
}
