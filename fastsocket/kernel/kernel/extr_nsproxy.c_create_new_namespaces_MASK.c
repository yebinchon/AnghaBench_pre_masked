
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* nsproxy; } ;
struct nsproxy {scalar_t__ mnt_ns; scalar_t__ uts_ns; scalar_t__ ipc_ns; scalar_t__ pid_ns; scalar_t__ net_ns; } ;
struct fs_struct {int dummy; } ;
struct TYPE_2__ {int net_ns; int pid_ns; int ipc_ns; int uts_ns; int mnt_ns; } ;


 int VAR_0 ;
 struct nsproxy* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,int ) ;
 scalar_t__ FUNC_4 (unsigned long,int ,struct fs_struct*) ;
 scalar_t__ FUNC_5 (unsigned long,int ) ;
 scalar_t__ FUNC_6 (unsigned long,int ) ;
 scalar_t__ FUNC_7 (unsigned long,int ) ;
 struct nsproxy* FUNC_8 () ;
 int FUNC_9 (int ,struct nsproxy*) ;
 int VAR_1 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static struct nsproxy *FUNC_14(unsigned long VAR_2,
   struct task_struct *VAR_3, struct fs_struct *VAR_4)
{
 struct nsproxy *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_8();
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->mnt_ns = FUNC_4(VAR_2, VAR_3->nsproxy->mnt_ns, VAR_4);
 if (FUNC_1(VAR_5->mnt_ns)) {
  VAR_6 = FUNC_2(VAR_5->mnt_ns);
  goto out_ns;
 }

 VAR_5->uts_ns = FUNC_7(VAR_2, VAR_3->nsproxy->uts_ns);
 if (FUNC_1(VAR_5->uts_ns)) {
  VAR_6 = FUNC_2(VAR_5->uts_ns);
  goto out_uts;
 }

 VAR_5->ipc_ns = FUNC_3(VAR_2, VAR_3->nsproxy->ipc_ns);
 if (FUNC_1(VAR_5->ipc_ns)) {
  VAR_6 = FUNC_2(VAR_5->ipc_ns);
  goto out_ipc;
 }

 VAR_5->pid_ns = FUNC_6(VAR_2, VAR_3->nsproxy->pid_ns);
 if (FUNC_1(VAR_5->pid_ns)) {
  VAR_6 = FUNC_2(VAR_5->pid_ns);
  goto out_pid;
 }

 VAR_5->net_ns = FUNC_5(VAR_2, VAR_3->nsproxy->net_ns);
 if (FUNC_1(VAR_5->net_ns)) {
  VAR_6 = FUNC_2(VAR_5->net_ns);
  goto out_net;
 }

 return VAR_5;

out_net:
 if (VAR_5->pid_ns)
  FUNC_12(VAR_5->pid_ns);
out_pid:
 if (VAR_5->ipc_ns)
  FUNC_10(VAR_5->ipc_ns);
out_ipc:
 if (VAR_5->uts_ns)
  FUNC_13(VAR_5->uts_ns);
out_uts:
 if (VAR_5->mnt_ns)
  FUNC_11(VAR_5->mnt_ns);
out_ns:
 FUNC_9(VAR_1, VAR_5);
 return FUNC_0(VAR_6);
}
