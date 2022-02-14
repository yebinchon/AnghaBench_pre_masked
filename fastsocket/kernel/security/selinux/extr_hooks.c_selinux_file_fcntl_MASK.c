
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* dentry; } ;
struct file {unsigned long f_flags; TYPE_1__ f_path; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,struct file*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, unsigned int VAR_5,
         unsigned long VAR_6)
{
 const struct cred *VAR_7 = FUNC_0();
 int VAR_8 = 0;

 switch (VAR_5) {
 case 134:
  if (!VAR_4->f_path.dentry || !VAR_4->f_path.dentry->d_inode) {
   VAR_8 = -VAR_0;
   break;
  }

  if ((VAR_4->f_flags & VAR_3) && !(VAR_6 & VAR_3)) {
   VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_2);
   break;
  }

 case 129:
 case 128:
 case 139:
 case 136:
 case 135:

  VAR_8 = FUNC_1(VAR_7, VAR_4, 0);
  break;
 case 138:
 case 133:
 case 131:





  if (!VAR_4->f_path.dentry || !VAR_4->f_path.dentry->d_inode) {
   VAR_8 = -VAR_0;
   break;
  }
  VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_1);
  break;
 }

 return VAR_8;
}
