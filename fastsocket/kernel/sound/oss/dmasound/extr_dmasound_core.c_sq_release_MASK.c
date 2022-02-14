
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_6__ {int dentry; } ;
struct file {int f_mode; TYPE_2__ f_path; } ;
struct TYPE_5__ {int owner; int default_hard; } ;
struct TYPE_8__ {TYPE_1__ mach; int hard; } ;
struct TYPE_7__ {scalar_t__ busy; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct file*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_3__ VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7 = 0;

 FUNC_0();

 if (VAR_6->f_mode & VAR_0) {
  if (VAR_4.busy)
   VAR_7 = FUNC_3(VAR_6, VAR_6->f_path.dentry);

  FUNC_4() ;
  FUNC_6();
  VAR_4.busy = 0;
 }

 if (VAR_6->f_mode & VAR_2) {
  VAR_2 = 0 ;
  VAR_3 = 0 ;
  VAR_1.hard = VAR_1.mach.default_hard ;
 }

 FUNC_1(VAR_1.mach.owner);
 FUNC_5();

 return VAR_7;
}
