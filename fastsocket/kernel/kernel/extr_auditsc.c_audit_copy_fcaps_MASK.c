
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct cpu_vfs_cap_data {int magic_etc; int inheritable; int permitted; } ;
struct TYPE_2__ {int fE; int inheritable; int permitted; } ;
struct audit_names {int fcap_ver; TYPE_1__ fcap; } ;
typedef int kernel_cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry const*,struct cpu_vfs_cap_data*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct audit_names *VAR_3, const struct dentry *VAR_4)
{
 struct cpu_vfs_cap_data VAR_5;
 int VAR_6;

 FUNC_1(&VAR_3->fcap.permitted, 0, sizeof(kernel_cap_t));
 FUNC_1(&VAR_3->fcap.inheritable, 0, sizeof(kernel_cap_t));
 VAR_3->fcap.fE = 0;
 VAR_3->fcap_ver = 0;

 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_0(VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3->fcap.permitted = VAR_5.permitted;
 VAR_3->fcap.inheritable = VAR_5.inheritable;
 VAR_3->fcap.fE = !!(VAR_5.magic_etc & VAR_0);
 VAR_3->fcap_ver = (VAR_5.magic_etc & VAR_1) >> VAR_2;

 return 0;
}
