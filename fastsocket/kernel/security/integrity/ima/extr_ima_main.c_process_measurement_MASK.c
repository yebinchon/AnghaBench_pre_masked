
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct ima_iint_cache {int refcount; int mutex; } ;
struct file {TYPE_1__* f_dentry; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ima_iint_cache*,struct file*) ;
 struct ima_iint_cache* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int FUNC_3 (struct ima_iint_cache*,struct inode*,int,int) ;
 int FUNC_4 (struct ima_iint_cache*,struct file*,unsigned char const*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3, const unsigned char *VAR_4,
          int VAR_5, int VAR_6)
{
 struct inode *VAR_7 = VAR_3->f_dentry->d_inode;
 struct ima_iint_cache *VAR_8;
 int VAR_9;

 if (!VAR_2 || !FUNC_0(VAR_7->i_mode))
  return 0;
 VAR_8 = FUNC_2(VAR_7);
 if (!VAR_8)
  return -VAR_0;

 FUNC_6(&VAR_8->mutex);
 VAR_9 = FUNC_3(VAR_8, VAR_7, VAR_5, VAR_6);
 if (VAR_9 != 0)
  goto out;

 VAR_9 = FUNC_1(VAR_8, VAR_3);
 if (!VAR_9)
  FUNC_4(VAR_8, VAR_3, VAR_4);
out:
 FUNC_7(&VAR_8->mutex);
 FUNC_5(&VAR_8->refcount, VAR_1);
 return VAR_9;
}
