
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_root; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {int dentry; } ;
struct TYPE_5__ {TYPE_1__ path; } ;
struct TYPE_6__ {TYPE_2__ fs; } ;
struct common_audit_data {TYPE_3__ u; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (struct super_block*,void*) ;
 int FUNC_3 (struct cred const*,struct super_block*,int ,struct common_audit_data*) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_3, int VAR_4, void *VAR_5)
{
 const struct cred *VAR_6 = FUNC_1();
 struct common_audit_data VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, VAR_5);
 if (VAR_8)
  return VAR_8;


 if (VAR_4 & VAR_2)
  return 0;

 FUNC_0(&VAR_7, VAR_1);
 VAR_7.u.fs.path.dentry = VAR_3->s_root;
 return FUNC_3(VAR_6, VAR_3, VAR_0, &VAR_7);
}
