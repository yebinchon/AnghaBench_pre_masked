
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct task_security_struct {int create_sid; int sid; } ;
struct superblock_security_struct {int flags; int sid; } ;
struct inode_security_struct {int sid; } ;
struct inode {TYPE_1__* i_sb; struct inode_security_struct* i_security; } ;
struct dentry {int dummy; } ;
struct cred {struct task_security_struct* security; } ;
struct TYPE_6__ {struct dentry* dentry; } ;
struct TYPE_7__ {TYPE_2__ path; } ;
struct TYPE_8__ {TYPE_3__ fs; } ;
struct common_audit_data {TYPE_4__ u; } ;
struct TYPE_5__ {struct superblock_security_struct* s_security; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int,struct common_audit_data*) ;
 struct cred* FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_8,
        struct dentry *VAR_9,
        u16 VAR_10)
{
 const struct cred *VAR_11 = FUNC_2();
 const struct task_security_struct *VAR_12 = VAR_11->security;
 struct inode_security_struct *VAR_13;
 struct superblock_security_struct *VAR_14;
 u32 VAR_15, VAR_16;
 struct common_audit_data VAR_17;
 int VAR_18;

 VAR_13 = VAR_8->i_security;
 VAR_14 = VAR_8->i_sb->s_security;

 VAR_15 = VAR_12->sid;
 VAR_16 = VAR_12->create_sid;

 FUNC_0(&VAR_17, VAR_4);
 VAR_17.u.fs.path.dentry = VAR_9;

 VAR_18 = FUNC_1(VAR_15, VAR_13->sid, VAR_5,
     VAR_0 | VAR_1,
     &VAR_17);
 if (VAR_18)
  return VAR_18;

 if (!VAR_16 || !(VAR_14->flags & VAR_7)) {
  VAR_18 = FUNC_3(VAR_15, VAR_13->sid, VAR_10, &VAR_16);
  if (VAR_18)
   return VAR_18;
 }

 VAR_18 = FUNC_1(VAR_15, VAR_16, VAR_10, VAR_3, &VAR_17);
 if (VAR_18)
  return VAR_18;

 return FUNC_1(VAR_16, VAR_14->sid,
       VAR_6,
       VAR_2, &VAR_17);
}
