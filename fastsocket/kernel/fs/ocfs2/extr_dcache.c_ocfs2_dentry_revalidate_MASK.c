
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {struct inode* root_inode; } ;
struct nameidata {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_mode; } ;
struct TYPE_3__ {int name; int len; } ;
struct dentry {int d_fsdata; TYPE_1__ d_name; int d_sb; struct inode* d_inode; } ;
struct TYPE_4__ {int ip_flags; scalar_t__ ip_blkno; int ip_lock; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,char*,unsigned long long,...) ;
 int FUNC_6 (char*,struct dentry*,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct dentry *VAR_1,
       struct nameidata *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 int VAR_4 = 0;
 struct ocfs2_super *VAR_5 = FUNC_2(VAR_1->d_sb);

 FUNC_6("(0x%p, '%.*s')\n", VAR_1,
     VAR_1->d_name.len, VAR_1->d_name.name);


 if (VAR_3 == ((void*)0)) {
  FUNC_5(0, "negative dentry: %.*s\n", VAR_1->d_name.len,
       VAR_1->d_name.name);
  goto bail;
 }

 FUNC_0(!VAR_5);

 if (VAR_3 == VAR_5->root_inode || FUNC_4(VAR_3))
  goto bail;

 FUNC_8(&FUNC_1(VAR_3)->ip_lock);

 if (FUNC_1(VAR_3)->ip_flags & VAR_0) {
  FUNC_9(&FUNC_1(VAR_3)->ip_lock);
  FUNC_5(0, "inode (%llu) deleted, returning false\n",
       (unsigned long long)FUNC_1(VAR_3)->ip_blkno);
  goto bail;
 }
 FUNC_9(&FUNC_1(VAR_3)->ip_lock);





 if (VAR_3->i_nlink == 0) {
  FUNC_5(0, "Inode %llu orphaned, returning false "
       "dir = %d\n",
       (unsigned long long)FUNC_1(VAR_3)->ip_blkno,
       FUNC_3(VAR_3->i_mode));
  goto bail;
 }





 if (!VAR_1->d_fsdata) {
  FUNC_5(0, "Inode %llu doesn't have dentry lock, "
       "returning false\n",
       (unsigned long long)FUNC_1(VAR_3)->ip_blkno);
  goto bail;
 }

 VAR_4 = 1;

bail:
 FUNC_7(VAR_4);

 return VAR_4;
}
