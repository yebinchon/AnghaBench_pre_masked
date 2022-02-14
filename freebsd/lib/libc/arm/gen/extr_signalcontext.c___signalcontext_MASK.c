
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* __gregs; } ;
struct TYPE_8__ {int uc_sigmask; int * uc_link; TYPE_1__ uc_mcontext; } ;
typedef TYPE_3__ ucontext_t ;
struct TYPE_7__ {int si_signo; } ;
struct sigframe {int sf_uc; TYPE_2__ sf_si; } ;
typedef int __sighandler_t ;
typedef scalar_t__ __greg_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_3__*,int *,int) ;
 int FUNC_1 (struct sigframe*,int) ;
 int FUNC_2 (int *,int) ;

int
FUNC_3(ucontext_t *VAR_9, int VAR_10, __sighandler_t *VAR_11)
{
 struct sigframe *VAR_12;
 __greg_t *VAR_13 = VAR_9->uc_mcontext.__gregs;
 unsigned int *VAR_14;

 VAR_14 = (unsigned int *)VAR_13[VAR_7];

 VAR_12 = (struct sigframe *)VAR_14 - 1;

 FUNC_1(VAR_12, sizeof(*VAR_12));
 FUNC_0(VAR_9, &VAR_12->sf_uc, sizeof(*VAR_9));
 VAR_12->sf_si.si_signo = VAR_10;

 VAR_13[VAR_7] = (__greg_t)VAR_12;

 VAR_13[VAR_0] = 0;

 VAR_13[VAR_1] = (__greg_t)VAR_8;
 VAR_13[VAR_5] = (__greg_t)VAR_11;
 VAR_13[VAR_6] = (__greg_t)VAR_9;
 VAR_13[VAR_2] = (__greg_t)VAR_10;
 VAR_13[VAR_3] = (__greg_t)&VAR_12->sf_si;
 VAR_13[VAR_4] = (__greg_t)&VAR_12->sf_uc;

 VAR_9->uc_link = &VAR_12->sf_uc;
 FUNC_2(&VAR_9->uc_sigmask, VAR_10);

 return (0);
}
