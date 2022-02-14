
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct inode_security_struct {int sclass; int sid; } ;
struct inode {struct inode_security_struct* i_security; } ;
struct dentry {TYPE_4__* d_inode; } ;
struct TYPE_5__ {struct dentry* dentry; } ;
struct TYPE_6__ {TYPE_1__ path; } ;
struct TYPE_7__ {TYPE_2__ fs; } ;
struct common_audit_data {TYPE_3__ u; } ;
struct TYPE_8__ {int i_mode; struct inode_security_struct* i_security; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ,int,struct common_audit_data*) ;
 int FUNC_3 () ;

__attribute__((used)) static inline int FUNC_4(struct inode *VAR_9,
        struct dentry *VAR_10,
        struct inode *VAR_11,
        struct dentry *VAR_12)
{
 struct inode_security_struct *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 struct common_audit_data VAR_17;
 u32 VAR_18 = FUNC_3();
 u32 VAR_19;
 int VAR_20, VAR_21;
 int VAR_22;

 VAR_13 = VAR_9->i_security;
 VAR_15 = VAR_10->d_inode->i_security;
 VAR_20 = FUNC_1(VAR_10->d_inode->i_mode);
 VAR_14 = VAR_11->i_security;

 FUNC_0(&VAR_17, VAR_7);

 VAR_17.u.fs.path.dentry = VAR_10;
 VAR_22 = FUNC_2(VAR_18, VAR_13->sid, VAR_8,
     VAR_1 | VAR_4, &VAR_17);
 if (VAR_22)
  return VAR_22;
 VAR_22 = FUNC_2(VAR_18, VAR_15->sid,
     VAR_15->sclass, VAR_5, &VAR_17);
 if (VAR_22)
  return VAR_22;
 if (VAR_20 && VAR_11 != VAR_9) {
  VAR_22 = FUNC_2(VAR_18, VAR_15->sid,
      VAR_15->sclass, VAR_2, &VAR_17);
  if (VAR_22)
   return VAR_22;
 }

 VAR_17.u.fs.path.dentry = VAR_12;
 VAR_19 = VAR_0 | VAR_4;
 if (VAR_12->d_inode)
  VAR_19 |= VAR_1;
 VAR_22 = FUNC_2(VAR_18, VAR_14->sid, VAR_8, VAR_19, &VAR_17);
 if (VAR_22)
  return VAR_22;
 if (VAR_12->d_inode) {
  VAR_16 = VAR_12->d_inode->i_security;
  VAR_21 = FUNC_1(VAR_12->d_inode->i_mode);
  VAR_22 = FUNC_2(VAR_18, VAR_16->sid,
      VAR_16->sclass,
      (VAR_21 ? VAR_3 : VAR_6), &VAR_17);
  if (VAR_22)
   return VAR_22;
 }

 return 0;
}
