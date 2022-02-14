
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_4, struct file *VAR_5)
{
 FUNC_0(VAR_1, "Enter fsocket_release. inode(%p) file(%p) dentry(%p)",
  VAR_4, VAR_5, VAR_5->f_path.dentry);

 if (VAR_5->f_path.dentry->d_flags & VAR_0) {
  FUNC_0(VAR_2, "dentry memleak happens!!!\n");
 }

 FUNC_1(VAR_3);

 FUNC_0(VAR_2, "Release module reference\n");

 return 0;
}
