
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dentry {TYPE_4__* d_sb; } ;
struct cred {int dummy; } ;
struct TYPE_5__ {int dentry; } ;
struct TYPE_6__ {TYPE_1__ path; } ;
struct TYPE_7__ {TYPE_2__ fs; } ;
struct common_audit_data {TYPE_3__ u; } ;
struct TYPE_8__ {int s_root; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (struct cred const*,TYPE_4__*,int ,struct common_audit_data*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_2)
{
 const struct cred *VAR_3 = FUNC_1();
 struct common_audit_data VAR_4;

 FUNC_0(&VAR_4, VAR_1);
 VAR_4.u.fs.path.dentry = VAR_2->d_sb->s_root;
 return FUNC_2(VAR_3, VAR_2->d_sb, VAR_0, &VAR_4);
}
