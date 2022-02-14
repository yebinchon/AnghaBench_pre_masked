
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct trapframe {scalar_t__ ra; scalar_t__ sp; scalar_t__ pc; } ;
typedef scalar_t__ register_t ;
typedef int proc_t ;
struct TYPE_4__ {int cpuc_dtrace_flags; } ;
struct TYPE_3__ {struct trapframe* td_frame; } ;


 int volatile VAR_0 ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__*) ;

int
FUNC_1(void)
{
 int VAR_5 = 0;
 proc_t *VAR_6 = VAR_3;
 struct trapframe *VAR_7;
 register_t VAR_8, VAR_9, VAR_10;
 volatile uint16_t *VAR_11 =
     (volatile uint16_t *)&VAR_1[VAR_2].cpuc_dtrace_flags;

 if (*VAR_11 & VAR_0)
  return (0);

 if (VAR_6 == ((void*)0) || (VAR_7 = VAR_4->td_frame) == ((void*)0))
  return (0);

 VAR_10 = (uint64_t)VAR_7->pc;
 VAR_8 = (uint64_t)VAR_7->sp;
 VAR_9 = (uint64_t)VAR_7->ra;
 VAR_5++;




 while (1) {
  if (FUNC_0(&VAR_10, &VAR_8, &VAR_9) < 0)
   break;
  VAR_5++;
 }

 return (VAR_5);
}
