
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct task_security_struct {scalar_t__ sid; scalar_t__ osid; } ;
struct rlimit {int rlim_cur; int rlim_max; } ;
struct linux_binprm {TYPE_5__* cred; } ;
struct TYPE_11__ {struct task_security_struct* security; } ;
struct TYPE_10__ {TYPE_1__* signal; } ;
struct TYPE_9__ {TYPE_2__* signal; scalar_t__ pdeath_signal; int files; } ;
struct TYPE_8__ {struct rlimit* rlim; } ;
struct TYPE_7__ {struct rlimit* rlim; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ,int *) ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 TYPE_4__ VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_4(struct linux_binprm *VAR_6)
{
 struct task_security_struct *VAR_7;
 struct rlimit *VAR_8, *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = VAR_6->cred->security;
 if (VAR_7->sid == VAR_7->osid)
  return;


 FUNC_1(VAR_6->cred, VAR_4->files);


 VAR_4->pdeath_signal = 0;
 VAR_10 = FUNC_0(VAR_7->osid, VAR_7->sid, VAR_3,
     VAR_0, ((void*)0));
 if (VAR_10) {
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   VAR_8 = VAR_4->signal->rlim + VAR_11;
   VAR_9 = VAR_5.signal->rlim + VAR_11;
   VAR_8->rlim_cur = FUNC_2(VAR_8->rlim_max, VAR_9->rlim_cur);
  }
  FUNC_3(VAR_4,
    VAR_4->signal->rlim[VAR_1].rlim_cur);
 }
}
