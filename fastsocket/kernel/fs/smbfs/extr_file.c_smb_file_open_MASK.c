
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct file {int f_mode; TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int openers; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dentry*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_1, struct file * VAR_2)
{
 int VAR_3;
 struct dentry *VAR_4 = VAR_2->f_path.dentry;
 int VAR_5 = (VAR_2->f_mode & VAR_0) - 1;

 FUNC_1();
 VAR_3 = FUNC_2(VAR_4, VAR_5);
 if (VAR_3)
  goto out;
 FUNC_0(VAR_1)->openers++;
out:
 FUNC_3();
 return VAR_3;
}
