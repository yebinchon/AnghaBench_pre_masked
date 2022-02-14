
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {int f_flags; TYPE_2__ f_path; } ;
struct cred {int dummy; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,struct file*,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, int VAR_4)
{
 const struct cred *VAR_5 = FUNC_0();
 struct inode *VAR_6 = VAR_3->f_path.dentry->d_inode;


 if ((VAR_3->f_flags & VAR_2) && (VAR_4 & VAR_1))
  VAR_4 |= VAR_0;

 return FUNC_1(VAR_5, VAR_3,
        FUNC_2(VAR_6->i_mode, VAR_4));
}
