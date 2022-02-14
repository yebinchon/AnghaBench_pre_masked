
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct task_struct {int dummy; } ;
struct task_security_struct {scalar_t__ sid; scalar_t__ osid; scalar_t__ exec_sid; scalar_t__ sockcreate_sid; scalar_t__ keycreate_sid; scalar_t__ create_sid; } ;
struct linux_binprm {int unsafe; int per_clear; TYPE_7__* file; TYPE_2__* cred; scalar_t__ cred_prepared; } ;
struct inode_security_struct {scalar_t__ sid; } ;
struct inode {struct inode_security_struct* i_security; } ;
struct TYPE_14__ {TYPE_5__* mnt; TYPE_1__* dentry; } ;
struct TYPE_11__ {TYPE_6__ path; } ;
struct TYPE_12__ {TYPE_3__ fs; } ;
struct common_audit_data {TYPE_4__ u; } ;
struct TYPE_16__ {struct task_security_struct* security; } ;
struct TYPE_15__ {TYPE_6__ f_path; } ;
struct TYPE_13__ {int mnt_flags; } ;
struct TYPE_10__ {struct task_security_struct* security; } ;
struct TYPE_9__ {struct inode* d_inode; } ;


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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_8__* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,int ,struct common_audit_data*) ;
 int FUNC_3 (struct linux_binprm*) ;
 int VAR_14 ;
 struct task_security_struct* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,scalar_t__,int ,scalar_t__*) ;
 struct task_struct* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct linux_binprm *VAR_15)
{
 const struct task_security_struct *VAR_16;
 struct task_security_struct *VAR_17;
 struct inode_security_struct *VAR_18;
 struct common_audit_data VAR_19;
 struct inode *VAR_20 = VAR_15->file->f_path.dentry->d_inode;
 int VAR_21;

 VAR_21 = FUNC_3(VAR_15);
 if (VAR_21)
  return VAR_21;



 if (VAR_15->cred_prepared)
  return 0;

 VAR_16 = FUNC_4();
 VAR_17 = VAR_15->cred->security;
 VAR_18 = VAR_20->i_security;


 VAR_17->sid = VAR_16->sid;
 VAR_17->osid = VAR_16->sid;


 VAR_17->create_sid = 0;
 VAR_17->keycreate_sid = 0;
 VAR_17->sockcreate_sid = 0;

 if (VAR_16->exec_sid) {
  VAR_17->sid = VAR_16->exec_sid;

  VAR_17->exec_sid = 0;
 } else {

  VAR_21 = FUNC_8(VAR_16->sid, VAR_18->sid,
          VAR_13, &VAR_17->sid);
  if (VAR_21)
   return VAR_21;
 }

 FUNC_0(&VAR_19, VAR_3);
 VAR_19.u.fs.path = VAR_15->file->f_path;

 if (VAR_15->file->f_path.mnt->mnt_flags & VAR_7)
  VAR_17->sid = VAR_16->sid;

 if (VAR_17->sid == VAR_16->sid) {
  VAR_21 = FUNC_2(VAR_16->sid, VAR_18->sid,
      VAR_12, VAR_2, &VAR_19);
  if (VAR_21)
   return VAR_21;
 } else {

  VAR_21 = FUNC_2(VAR_16->sid, VAR_17->sid,
      VAR_13, VAR_11, &VAR_19);
  if (VAR_21)
   return VAR_21;

  VAR_21 = FUNC_2(VAR_17->sid, VAR_18->sid,
      VAR_12, VAR_1, &VAR_19);
  if (VAR_21)
   return VAR_21;


  if (VAR_15->unsafe & VAR_6) {
   VAR_21 = FUNC_2(VAR_16->sid, VAR_17->sid,
       VAR_13, VAR_10,
       ((void*)0));
   if (VAR_21)
    return -VAR_0;
  }



  if (VAR_15->unsafe &
      (VAR_4 | VAR_5)) {
   struct task_struct *VAR_22;
   struct task_security_struct *VAR_23;
   u32 VAR_24 = 0;

   FUNC_6();
   VAR_22 = FUNC_9(VAR_14);
   if (FUNC_5(VAR_22 != ((void*)0))) {
    VAR_23 = FUNC_1(VAR_22)->security;
    VAR_24 = VAR_23->sid;
   }
   FUNC_7();

   if (VAR_24 != 0) {
    VAR_21 = FUNC_2(VAR_24, VAR_17->sid,
        VAR_13,
        VAR_9, ((void*)0));
    if (VAR_21)
     return -VAR_0;
   }
  }


  VAR_15->per_clear |= VAR_8;
 }

 return 0;
}
