
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int ip_flags; int ip_lock; scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,struct inode*,unsigned long long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,int *,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct dentry *VAR_2)
{
 struct inode *VAR_3 = VAR_2->d_inode;
 int VAR_4 = 0;

 FUNC_2("(inode = 0x%p, ino = %llu)\n", VAR_3,
     VAR_3 ? (unsigned long long)FUNC_0(VAR_3)->ip_blkno : 0ULL);

 if (!VAR_3) {
  FUNC_1(0, "eep, no inode!\n");
  VAR_4 = -VAR_0;
  goto bail;
 }

 FUNC_7(&FUNC_0(VAR_3)->ip_lock);
 if (FUNC_0(VAR_3)->ip_flags & VAR_1) {
  FUNC_8(&FUNC_0(VAR_3)->ip_lock);
  FUNC_1(0, "inode deleted!\n");
  VAR_4 = -VAR_0;
  goto bail;
 }
 FUNC_8(&FUNC_0(VAR_3)->ip_lock);



 VAR_4 = FUNC_5(VAR_3, ((void*)0), 0);
 if (VAR_4 < 0) {
  if (VAR_4 != -VAR_0)
   FUNC_3(VAR_4);
  goto bail;
 }
 FUNC_6(VAR_3, 0);
bail:
 FUNC_4(VAR_4);

 return VAR_4;
}
