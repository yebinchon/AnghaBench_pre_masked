
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_8__ {int si_signo; int si_uid; int si_pid; int si_code; scalar_t__ si_errno; } ;
typedef TYPE_1__ siginfo_t ;
struct TYPE_9__ {int exit_code; int blocked; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct pt_regs*,void*) ;
 int FUNC_1 (int,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int,TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(int VAR_3, siginfo_t *VAR_4,
    struct pt_regs *VAR_5, void *VAR_6)
{
 if (!(FUNC_5(VAR_2) & VAR_0))
  return VAR_3;

 FUNC_0(VAR_5, VAR_6);


 FUNC_1(VAR_3, 0, VAR_4);


 VAR_3 = VAR_2->exit_code;
 if (VAR_3 == 0)
  return VAR_3;

 VAR_2->exit_code = 0;





 if (VAR_3 != VAR_4->si_signo) {
  VAR_4->si_signo = VAR_3;
  VAR_4->si_errno = 0;
  VAR_4->si_code = VAR_1;
  VAR_4->si_pid = FUNC_4(VAR_2->parent);
  VAR_4->si_uid = FUNC_6(VAR_2->parent);
 }


 if (FUNC_2(&VAR_2->blocked, VAR_3)) {
  FUNC_3(VAR_3, VAR_4, VAR_2);
  VAR_3 = 0;
 }

 return VAR_3;
}
