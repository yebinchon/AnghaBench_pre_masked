
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; int i_ino; } ;
struct buffer_head {int dummy; } ;
typedef int sigset_t ;
struct TYPE_2__ {int ip_flags; int ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,struct buffer_head**,int) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct inode*,struct buffer_head*,int*) ;
 int FUNC_16 (struct inode*,struct buffer_head*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int *,int *) ;

void FUNC_19(struct inode *VAR_6)
{
 int VAR_7, VAR_8;
 sigset_t VAR_9, VAR_10;
 struct buffer_head *VAR_11 = ((void*)0);

 FUNC_6("(inode->i_ino = %lu)\n", VAR_6->i_ino);




 if (FUNC_4(VAR_6) || !FUNC_0(VAR_6)->ip_blkno) {
  FUNC_5(0, "Skipping delete of bad inode\n");
  goto bail;
 }

 if (!FUNC_10(VAR_6)) {



  FUNC_9(VAR_6, 0);
  goto bail;
 }





 FUNC_17(&VAR_9);
 VAR_8 = FUNC_18(VAR_4, &VAR_9, &VAR_10);
 if (VAR_8 < 0) {
  FUNC_7(VAR_8);
  FUNC_9(VAR_6, 1);
  goto bail;
 }






 VAR_8 = FUNC_13(FUNC_1(VAR_6->i_sb), 0);
 if (VAR_8 < 0) {
  FUNC_5(VAR_2, "getting nfs sync lock(PR) failed %d\n", VAR_8);
  FUNC_9(VAR_6, 0);
  goto bail_unblock;
 }
 VAR_8 = FUNC_11(VAR_6, &VAR_11, 1);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_1)
   FUNC_7(VAR_8);
  FUNC_9(VAR_6, 0);
  goto bail_unlock_nfs_sync;
 }



 VAR_8 = FUNC_15(VAR_6, VAR_11, &VAR_7);
 if (!VAR_7 || VAR_8 < 0) {



  if (VAR_8 < 0)
   FUNC_7(VAR_8);




  FUNC_9(VAR_6, 1);
  goto bail_unlock_inode;
 }

 FUNC_9(VAR_6, 0);

 VAR_8 = FUNC_16(VAR_6, VAR_11);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_0)
   FUNC_7(VAR_8);
  goto bail_unlock_inode;
 }
 FUNC_0(VAR_6)->ip_flags |= VAR_3;

bail_unlock_inode:
 FUNC_12(VAR_6, 1);
 FUNC_2(VAR_11);

bail_unlock_nfs_sync:
 FUNC_14(FUNC_1(VAR_6->i_sb), 0);

bail_unblock:
 VAR_8 = FUNC_18(VAR_5, &VAR_10, ((void*)0));
 if (VAR_8 < 0)
  FUNC_7(VAR_8);
bail:
 FUNC_3(VAR_6);
 FUNC_8();
}
