
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint16_t ;
struct TYPE_9__ {int * gregs; } ;
struct TYPE_10__ {int uc_link; TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct xframe {int dummy; } ;
struct trapframe {uintptr_t srr0; uintptr_t* fixreg; } ;
typedef int siginfo_t ;
struct TYPE_11__ {scalar_t__ p_pid; } ;
typedef TYPE_3__ proc_t ;
typedef int greg_t ;
struct TYPE_14__ {int cpuc_dtrace_flags; } ;
struct TYPE_13__ {struct trapframe* td_frame; } ;
struct TYPE_12__ {uintptr_t lwp_oldcontext; } ;


 int VAR_0 ;
 int volatile VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 TYPE_7__* VAR_7 ;
 size_t VAR_8 ;
 TYPE_3__* VAR_9 ;
 TYPE_5__* VAR_10 ;
 uintptr_t FUNC_2 (int *) ;
 uintptr_t FUNC_3 (void*) ;
 uintptr_t FUNC_4 (void*) ;
 TYPE_4__* VAR_11 ;

void
FUNC_5(uint64_t *VAR_12, uint64_t *VAR_13, int VAR_14)
{
 proc_t *VAR_15 = VAR_9;
 struct trapframe *VAR_16;
 uintptr_t VAR_17, VAR_18;
 volatile uint16_t *VAR_19 =
     (volatile uint16_t *)&VAR_7[VAR_8].cpuc_dtrace_flags;





 if (*VAR_19 & VAR_1)
  return;

 if (VAR_14 <= 0)
  return;




 if (VAR_15 == ((void*)0) || (VAR_16 = VAR_10->td_frame) == ((void*)0))
  goto zero;

 *VAR_12++ = (uint64_t)VAR_15->p_pid;
 VAR_14--;

 if (VAR_14 <= 0)
  return;

 VAR_17 = VAR_16->srr0;
 VAR_18 = VAR_16->fixreg[1];







 if (FUNC_0(VAR_0)) {
  *VAR_12++ = (uint64_t)VAR_17;
  *VAR_13++ = 0;
  VAR_14--;
  if (VAR_14 <= 0)
   return;

  if (FUNC_1(VAR_15, VAR_6)) {
   VAR_17 = FUNC_3((void *)VAR_18);
  }
  else {
   VAR_17 = FUNC_4((void *)VAR_18);
  }
 }

 while (VAR_17 != 0) {
  *VAR_12++ = (uint64_t)VAR_17;
  *VAR_13++ = VAR_18;
  VAR_14--;
  if (VAR_14 <= 0)
   break;

  if (VAR_18 == 0)
   break;
  {
   if (FUNC_1(VAR_15, VAR_6)) {
    VAR_17 = FUNC_3((void *)(VAR_18 + VAR_4));
    VAR_18 = FUNC_3((void *)VAR_18);
   }
   else {
    VAR_17 = FUNC_4((void *)(VAR_18 + VAR_5));
    VAR_18 = FUNC_4((void *)VAR_18);
   }
  }






  if (*VAR_19 & VAR_1) {
   *VAR_19 &= ~VAR_1;
   break;
  }
 }

zero:
 while (VAR_14-- > 0)
  *VAR_12++ = 0;
}
