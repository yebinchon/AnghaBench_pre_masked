
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ohandle; int ohandlen; } ;
typedef TYPE_1__ xfs_fsop_handlereq_t ;
struct file {int dummy; } ;
struct dentry {TYPE_4__* d_inode; } ;
typedef int __u32 ;
struct TYPE_6__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,int ,void*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (scalar_t__,int ) ;
 struct dentry* FUNC_11 (struct file*,TYPE_1__*) ;
 int FUNC_12 (int ,void*) ;

int
FUNC_13(
 struct file *VAR_7,
 xfs_fsop_handlereq_t *VAR_8)
{
 struct dentry *VAR_9;
 __u32 VAR_10;
 void *VAR_11;
 int VAR_12;

 if (!FUNC_5(VAR_0))
  return -FUNC_3(VAR_4);

 VAR_9 = FUNC_11(VAR_7, VAR_8);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);


 if (!FUNC_2(VAR_9->d_inode->i_mode)) {
  VAR_12 = -FUNC_3(VAR_2);
  goto out_dput;
 }

 if (FUNC_6(&VAR_10, VAR_8->ohandlen, sizeof(__u32))) {
  VAR_12 = -FUNC_3(VAR_1);
  goto out_dput;
 }

 VAR_11 = FUNC_10(VAR_6+1, VAR_5);
 if (!VAR_11) {
  VAR_12 = -FUNC_3(VAR_3);
  goto out_dput;
 }

 VAR_12 = -FUNC_12(FUNC_4(VAR_9->d_inode), VAR_11);
 if (VAR_12)
  goto out_kfree;
 VAR_12 = FUNC_7(VAR_8->ohandle, VAR_10, VAR_11);
 if (VAR_12)
  goto out_kfree;

 out_kfree:
 FUNC_9(VAR_11);
 out_dput:
 FUNC_8(VAR_9);
 return VAR_12;
}
