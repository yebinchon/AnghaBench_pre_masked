
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct ima_iint_cache {int refcount; int mutex; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct file {int f_mode; TYPE_1__ f_path; } ;
struct TYPE_4__ {int name; } ;
struct dentry {TYPE_2__ d_name; struct inode* d_inode; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ima_iint_cache* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ima_iint_cache*,int) ;
 int VAR_7 ;
 int FUNC_3 (struct ima_iint_cache*,struct inode*,int ,int ) ;
 int FUNC_4 (int ,struct ima_iint_cache*,struct inode*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct file *VAR_8)
{
 struct dentry *VAR_9 = VAR_8->f_path.dentry;
 struct inode *VAR_10 = VAR_9->d_inode;
 fmode_t VAR_11 = VAR_8->f_mode;
 struct ima_iint_cache *VAR_12;
 int VAR_13;

 if (!VAR_6 || !VAR_7 || !FUNC_0(VAR_10->i_mode))
  return;
 VAR_12 = FUNC_1(VAR_10);
 if (!VAR_12)
  return;
 FUNC_6(&VAR_12->mutex);
 VAR_13 = FUNC_3(VAR_12, VAR_10, VAR_2, VAR_0);
 if (VAR_13 < 0)
  goto out;

 if (VAR_11 & VAR_1) {
  FUNC_4(VAR_4, VAR_12, VAR_10, VAR_9->d_name.name);
  goto out;
 }
 FUNC_4(VAR_3, VAR_12, VAR_10, VAR_9->d_name.name);
out:
 FUNC_2(VAR_12, VAR_8->f_mode);
 FUNC_7(&VAR_12->mutex);

 FUNC_5(&VAR_12->refcount, VAR_5);
}
