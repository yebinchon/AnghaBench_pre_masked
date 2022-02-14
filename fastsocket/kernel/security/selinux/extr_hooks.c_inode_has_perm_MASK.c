
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode_security_struct {int sclass; int sid; } ;
struct inode {struct inode_security_struct* i_security; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {struct inode* inode; } ;
struct TYPE_3__ {TYPE_2__ fs; } ;
struct common_audit_data {TYPE_1__ u; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_3 (struct cred const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct cred const*) ;

__attribute__((used)) static int FUNC_6(const struct cred *VAR_1,
     struct inode *VAR_2,
     u32 VAR_3,
     struct common_audit_data *VAR_4)
{
 struct inode_security_struct *VAR_5;
 struct common_audit_data VAR_6;
 u32 VAR_7;

 FUNC_5(VAR_1);

 if (FUNC_4(FUNC_1(VAR_2)))
  return 0;

 VAR_7 = FUNC_3(VAR_1);
 VAR_5 = VAR_2->i_security;

 if (!VAR_4) {
  VAR_4 = &VAR_6;
  FUNC_0(&VAR_6, VAR_0);
  VAR_6.u.fs.inode = VAR_2;
 }

 return FUNC_2(VAR_7, VAR_5->sid, VAR_5->sclass, VAR_3, VAR_4);
}
