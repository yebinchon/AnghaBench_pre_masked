
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; int i_state; TYPE_2__* i_sb; int i_writecount; } ;
struct TYPE_4__ {TYPE_3__* dentry; } ;
struct file {TYPE_1__ f_path; } ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ dev_t ;
struct TYPE_6__ {struct inode* d_inode; } ;
struct TYPE_5__ {scalar_t__ s_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct file*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2)
{
 struct inode *VAR_3 = VAR_2->f_path.dentry->d_inode;
 static ino_t VAR_4;
 static dev_t VAR_5;
 int VAR_6 = 0;

 if (FUNC_0(&VAR_3->i_writecount) > 1
     || (VAR_4 == VAR_3->i_ino && VAR_5 == VAR_3->i_sb->s_dev)) {
  FUNC_1("nfsd: write defer %d\n", FUNC_3(VAR_1));
  FUNC_2(10);
  FUNC_1("nfsd: write resume %d\n", FUNC_3(VAR_1));
 }

 if (VAR_3->i_state & VAR_0) {
  FUNC_1("nfsd: write sync %d\n", FUNC_3(VAR_1));
  VAR_6 = FUNC_4(VAR_2, VAR_2->f_path.dentry, 0);
 }
 VAR_4 = VAR_3->i_ino;
 VAR_5 = VAR_3->i_sb->s_dev;
 return VAR_6;
}
