
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint16_t ;
struct trapframe {uintptr_t tf_sepc; uintptr_t tf_sp; uintptr_t* tf_s; uintptr_t tf_ra; } ;
struct TYPE_5__ {scalar_t__ p_pid; } ;
typedef TYPE_1__ proc_t ;
struct TYPE_7__ {int cpuc_dtrace_flags; } ;
struct TYPE_6__ {struct trapframe* td_frame; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int volatile VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (void**,int,uintptr_t,uintptr_t) ;

void
FUNC_3(uint64_t *VAR_6, int VAR_7)
{
 volatile uint16_t *VAR_8;
 struct trapframe *VAR_9;
 uintptr_t VAR_10, VAR_11, VAR_12;
 proc_t *VAR_13;
 int VAR_14;

 VAR_13 = VAR_4;
 VAR_8 = (volatile uint16_t *)&VAR_2[VAR_3].cpuc_dtrace_flags;

 if (*VAR_8 & VAR_1)
  return;

 if (VAR_7 <= 0)
  return;




 if (VAR_13 == ((void*)0) || (VAR_9 = VAR_5->td_frame) == ((void*)0))
  goto zero;

 *VAR_6++ = (uint64_t)VAR_13->p_pid;
 VAR_7--;

 if (VAR_7 <= 0)
  return;

 VAR_10 = VAR_9->tf_sepc;
 VAR_11 = VAR_9->tf_sp;
 VAR_12 = VAR_9->tf_s[0];

 if (FUNC_1(VAR_0)) {
  *VAR_6++ = (uint64_t)VAR_10;
  VAR_7--;
  if (VAR_7 <= 0)
   return;

  VAR_10 = VAR_9->tf_ra;
 }

 VAR_14 = FUNC_2(VAR_6, VAR_7, VAR_10, VAR_12);
 FUNC_0(VAR_14 >= 0);
 FUNC_0(VAR_14 <= VAR_7);

 VAR_6 += VAR_14;
 VAR_7 -= VAR_14;

zero:
 while (VAR_7-- > 0)
  *VAR_6++ = 0;
}
