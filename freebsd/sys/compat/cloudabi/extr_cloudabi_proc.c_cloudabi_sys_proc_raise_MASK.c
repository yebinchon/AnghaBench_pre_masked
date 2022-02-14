
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {TYPE_1__* td_ucred; struct proc* td_proc; } ;
struct proc {int p_pid; } ;
struct cloudabi_sys_proc_raise_args {size_t sig; } ;
struct TYPE_6__ {int ksi_signo; int ksi_uid; int ksi_pid; int ksi_code; } ;
typedef TYPE_2__ ksiginfo_t ;
struct TYPE_5__ {int cr_ruid; } ;
 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 size_t FUNC_3 (int const*) ;
 int FUNC_4 (struct proc*,int,TYPE_2__*) ;

int
FUNC_5(struct thread *VAR_2,
    struct cloudabi_sys_proc_raise_args *VAR_3)
{
 static const int VAR_4[] = {
  [179] = 153,
  [178] = 152,
  [177] = 151,
  [176] = 150,
  [175] = 149,
  [174] = 148,
  [173] = 147,
  [172] = 146,
  [171] = 145,
  [170] = 144,
  [169] = 143,
  [168] = 142,
  [167] = 141,
  [166] = 140,
  [165] = 139,
  [164] = 138,
  [163] = 137,
  [162] = 136,
  [161] = 135,
  [160] = 134,
  [159] = 133,
  [158] = 132,
  [157] = 131,
  [156] = 130,
  [155] = 129,
  [154] = 128,
 };
 ksiginfo_t VAR_5;
 struct proc *VAR_6;

 if (VAR_3->sig >= FUNC_3(VAR_4) || VAR_4[VAR_3->sig] == 0) {

  return (VAR_3->sig == 0 ? 0 : VAR_0);
 }

 VAR_6 = VAR_2->td_proc;
 FUNC_2(&VAR_5);
 VAR_5.ksi_signo = VAR_4[VAR_3->sig];
 VAR_5.ksi_code = VAR_1;
 VAR_5.ksi_pid = VAR_6->p_pid;
 VAR_5.ksi_uid = VAR_2->td_ucred->cr_ruid;
 FUNC_0(VAR_6);
 FUNC_4(VAR_6, VAR_5.ksi_signo, &VAR_5);
 FUNC_1(VAR_6);
 return (0);
}
