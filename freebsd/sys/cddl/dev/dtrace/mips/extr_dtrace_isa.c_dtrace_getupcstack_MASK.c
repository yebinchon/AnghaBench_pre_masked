
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint16_t ;
struct trapframe {scalar_t__ pc; scalar_t__ ra; scalar_t__ sp; } ;
typedef void* register_t ;
struct TYPE_5__ {scalar_t__ p_pid; } ;
typedef TYPE_1__ proc_t ;
struct TYPE_7__ {int cpuc_dtrace_flags; } ;
struct TYPE_6__ {struct trapframe* td_frame; } ;


 int volatile VAR_0 ;
 TYPE_4__* VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_0 (void**,void**,void**) ;

void
FUNC_1(uint64_t *VAR_5, int VAR_6)
{
 proc_t *VAR_7 = VAR_3;
 struct trapframe *VAR_8;
 register_t VAR_9, VAR_10, VAR_11;
 volatile uint16_t *VAR_12 =
     (volatile uint16_t *)&VAR_1[VAR_2].cpuc_dtrace_flags;

 if (*VAR_12 & VAR_0)
  return;

 if (VAR_6 <= 0)
  return;




 if (VAR_7 == ((void*)0) || (VAR_8 = VAR_4->td_frame) == ((void*)0))
  goto zero;

 *VAR_5++ = (uint64_t)VAR_7->p_pid;
 VAR_6--;

 if (VAR_6 <= 0)
  return;

 VAR_11 = (uint64_t)VAR_8->pc;
 VAR_9 = (uint64_t)VAR_8->sp;
 VAR_10 = (uint64_t)VAR_8->ra;
 *VAR_5++ = (uint64_t)VAR_8->pc;




 while (1) {
  if (FUNC_0(&VAR_11, &VAR_9, &VAR_10) < 0)
   break;

  *VAR_5++ = VAR_11;
  VAR_6--;

  if (VAR_6 <= 0)
   break;
 }

zero:
 while (VAR_6-- > 0)
  *VAR_5++ = 0;
}
