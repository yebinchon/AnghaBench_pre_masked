
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct linux_binprm {TYPE_2__* file; } ;
struct dentry {int dummy; } ;
struct cred {int cap_effective; int cap_inheritable; int cap_permitted; } ;
struct cpu_vfs_cap_data {int magic_etc; int inheritable; int permitted; } ;
struct audit_context {void* aux; } ;
struct TYPE_11__ {int effective; int inheritable; int permitted; } ;
struct TYPE_10__ {int effective; int inheritable; int permitted; } ;
struct TYPE_9__ {int fE; int inheritable; int permitted; } ;
struct TYPE_7__ {void* next; int type; } ;
struct audit_aux_data_bprm_fcaps {int fcap_ver; TYPE_5__ new_pcap; TYPE_4__ old_pcap; TYPE_3__ fcap; TYPE_1__ d; } ;
struct TYPE_12__ {struct audit_context* audit_context; } ;
struct TYPE_8__ {int f_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* VAR_6 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct cpu_vfs_cap_data*) ;
 struct audit_aux_data_bprm_fcaps* FUNC_3 (int,int ) ;

int FUNC_4(struct linux_binprm *VAR_7,
      const struct cred *VAR_8, const struct cred *VAR_9)
{
 struct audit_aux_data_bprm_fcaps *VAR_10;
 struct audit_context *VAR_11 = VAR_6->audit_context;
 struct cpu_vfs_cap_data VAR_12;
 struct dentry *VAR_13;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->d.type = VAR_0;
 VAR_10->d.next = VAR_11->aux;
 VAR_11->aux = (void *)VAR_10;

 VAR_13 = FUNC_0(VAR_7->file->f_dentry);
 FUNC_2(VAR_13, &VAR_12);
 FUNC_1(VAR_13);

 VAR_10->fcap.permitted = VAR_12.permitted;
 VAR_10->fcap.inheritable = VAR_12.inheritable;
 VAR_10->fcap.fE = !!(VAR_12.magic_etc & VAR_3);
 VAR_10->fcap_ver = (VAR_12.magic_etc & VAR_4) >> VAR_5;

 VAR_10->old_pcap.permitted = VAR_9->cap_permitted;
 VAR_10->old_pcap.inheritable = VAR_9->cap_inheritable;
 VAR_10->old_pcap.effective = VAR_9->cap_effective;

 VAR_10->new_pcap.permitted = VAR_8->cap_permitted;
 VAR_10->new_pcap.inheritable = VAR_8->cap_inheritable;
 VAR_10->new_pcap.effective = VAR_8->cap_effective;
 return 0;
}
