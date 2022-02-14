
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vfsmount {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {struct dentry* dentry; struct vfsmount* mnt; } ;
struct TYPE_5__ {TYPE_1__ path; } ;
struct TYPE_6__ {TYPE_2__ fs; } ;
struct common_audit_data {TYPE_3__ u; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cred const*,struct inode*,int ,struct common_audit_data*) ;

__attribute__((used)) static inline int FUNC_2(const struct cred *VAR_1,
      struct vfsmount *VAR_2,
      struct dentry *VAR_3,
      u32 VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_inode;
 struct common_audit_data VAR_6;

 FUNC_0(&VAR_6, VAR_0);
 VAR_6.u.fs.path.mnt = VAR_2;
 VAR_6.u.fs.path.dentry = VAR_3;
 return FUNC_1(VAR_1, VAR_5, VAR_4, &VAR_6);
}
