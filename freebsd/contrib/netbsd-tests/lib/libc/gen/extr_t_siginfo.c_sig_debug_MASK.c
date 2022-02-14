
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {long* __gregs; } ;
struct TYPE_11__ {int ss_flags; scalar_t__ ss_size; int ss_sp; } ;
struct TYPE_10__ {long* __bits; } ;
struct TYPE_13__ {int uc_flags; TYPE_4__ uc_mcontext; TYPE_3__ uc_stack; TYPE_2__ uc_sigmask; int uc_link; } ;
typedef TYPE_5__ ucontext_t ;
struct TYPE_9__ {int sival_int; } ;
struct TYPE_14__ {int si_signo; int si_errno; int si_code; TYPE_1__ si_value; } ;
typedef TYPE_6__ siginfo_t ;


 unsigned int FUNC_0 (long*) ;
 int FUNC_1 (char*,unsigned int,...) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, siginfo_t *VAR_1, ucontext_t *VAR_2)
{
 unsigned int VAR_3;

 FUNC_1("%d %p %p\n", VAR_0, VAR_1, VAR_2);
 if (VAR_1 != ((void*)0)) {
  FUNC_1("si_signo=%d\n", VAR_1->si_signo);
  FUNC_1("si_errno=%d\n", VAR_1->si_errno);
  FUNC_1("si_code=%d\n", VAR_1->si_code);
  FUNC_1("si_value.sival_int=%d\n", VAR_1->si_value.sival_int);
 }
 if (VAR_2 != ((void*)0)) {
  FUNC_1("uc_flags 0x%x\n", VAR_2->uc_flags);
  FUNC_1("uc_link %p\n", VAR_2->uc_link);
  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->uc_sigmask.__bits); VAR_3++)
   FUNC_1("uc_sigmask[%d] 0x%x\n", VAR_3,
       VAR_2->uc_sigmask.__bits[VAR_3]);
  FUNC_1("uc_stack %p %lu 0x%x\n", VAR_2->uc_stack.ss_sp,
      (unsigned long)VAR_2->uc_stack.ss_size,
      VAR_2->uc_stack.ss_flags);





 }
}
