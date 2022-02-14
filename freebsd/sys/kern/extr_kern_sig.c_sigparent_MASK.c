
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc {TYPE_2__* p_ksi; struct proc* p_pptr; TYPE_1__* p_ucred; int p_pid; } ;
struct TYPE_5__ {int ksi_code; int ksi_status; int ksi_uid; int ksi_pid; int ksi_signo; } ;
struct TYPE_4__ {int cr_ruid; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct proc*,int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(struct proc *VAR_2, int VAR_3, int VAR_4)
{
 FUNC_1(VAR_2, VAR_0);
 FUNC_1(VAR_2->p_pptr, VAR_0);

 if (VAR_2->p_ksi != ((void*)0)) {
  VAR_2->p_ksi->ksi_signo = VAR_1;
  VAR_2->p_ksi->ksi_code = VAR_3;
  VAR_2->p_ksi->ksi_status = VAR_4;
  VAR_2->p_ksi->ksi_pid = VAR_2->p_pid;
  VAR_2->p_ksi->ksi_uid = VAR_2->p_ucred->cr_ruid;
  if (FUNC_0(VAR_2->p_ksi))
   return;
 }
 FUNC_2(VAR_2->p_pptr, VAR_1, VAR_2->p_ksi);
}
