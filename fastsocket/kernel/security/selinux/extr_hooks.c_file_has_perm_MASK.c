
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct inode {int dummy; } ;
struct file_security_struct {scalar_t__ sid; } ;
struct TYPE_7__ {TYPE_4__* dentry; } ;
struct file {TYPE_3__ f_path; struct file_security_struct* f_security; } ;
struct cred {int dummy; } ;
struct TYPE_5__ {TYPE_3__ path; } ;
struct TYPE_6__ {TYPE_1__ fs; } ;
struct common_audit_data {TYPE_2__ u; } ;
struct TYPE_8__ {struct inode* d_inode; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_2 (struct cred const*) ;
 int FUNC_3 (struct cred const*,struct inode*,scalar_t__,struct common_audit_data*) ;

__attribute__((used)) static int FUNC_4(const struct cred *VAR_3,
    struct file *VAR_4,
    u32 VAR_5)
{
 struct file_security_struct *VAR_6 = VAR_4->f_security;
 struct inode *VAR_7 = VAR_4->f_path.dentry->d_inode;
 struct common_audit_data VAR_8;
 u32 VAR_9 = FUNC_2(VAR_3);
 int VAR_10;

 FUNC_0(&VAR_8, VAR_1);
 VAR_8.u.fs.path = VAR_4->f_path;

 if (VAR_9 != VAR_6->sid) {
  VAR_10 = FUNC_1(VAR_9, VAR_6->sid,
      VAR_2,
      VAR_0,
      &VAR_8);
  if (VAR_10)
   goto out;
 }


 VAR_10 = 0;
 if (VAR_5)
  VAR_10 = FUNC_3(VAR_3, VAR_7, VAR_5, &VAR_8);

out:
 return VAR_10;
}
