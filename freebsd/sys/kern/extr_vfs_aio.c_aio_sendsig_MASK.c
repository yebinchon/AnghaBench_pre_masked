
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct thread {int dummy; } ;
struct sigevent {int dummy; } ;
struct proc {int dummy; } ;
struct TYPE_6__ {int ksi_flags; int ksi_signo; int ksi_code; } ;
typedef TYPE_1__ ksiginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,struct sigevent*) ;
 int FUNC_3 (struct proc*,struct sigevent*,struct thread**) ;
 int FUNC_4 (struct proc*,struct thread*,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(struct proc *VAR_3, struct sigevent *VAR_4, ksiginfo_t *VAR_5)
{
 struct thread *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_4, &VAR_6);
 if (VAR_7)
  return (VAR_7);
 if (!FUNC_0(VAR_5)) {
  FUNC_2(VAR_5, VAR_4);
  VAR_5->ksi_code = VAR_2;
  VAR_5->ksi_flags |= VAR_0 | VAR_1;
  FUNC_4(VAR_3, VAR_6, VAR_5->ksi_signo, VAR_5);
 }
 FUNC_1(VAR_3);
 return (VAR_7);
}
