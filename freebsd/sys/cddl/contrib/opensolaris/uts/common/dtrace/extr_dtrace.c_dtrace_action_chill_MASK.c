
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ hrtime_t ;
struct TYPE_7__ {int dtms_present; } ;
typedef TYPE_1__ dtrace_mstate_t ;
struct TYPE_8__ {scalar_t__ cpu_dtrace_chillmark; scalar_t__ cpu_dtrace_chilled; } ;
typedef TYPE_2__ cpu_t ;
struct TYPE_9__ {int cpuc_dtrace_flags; } ;


 TYPE_2__* VAR_0 ;
 int volatile VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 () ;
 TYPE_2__* VAR_8 ;

__attribute__((used)) static void
FUNC_1(dtrace_mstate_t *VAR_9, hrtime_t VAR_10)
{
 hrtime_t VAR_11;
 volatile uint16_t *VAR_12;



 cpu_t *VAR_13 = &VAR_8[VAR_4];


 if (VAR_7)
  return;

 VAR_12 = (volatile uint16_t *)&VAR_3[VAR_4].cpuc_dtrace_flags;

 VAR_11 = FUNC_0();

 if (VAR_11 - VAR_13->cpu_dtrace_chillmark > VAR_5) {



  VAR_13->cpu_dtrace_chillmark = VAR_11;
  VAR_13->cpu_dtrace_chilled = 0;
 }






 if (VAR_13->cpu_dtrace_chilled + VAR_10 > VAR_6 ||
     VAR_13->cpu_dtrace_chilled + VAR_10 < VAR_13->cpu_dtrace_chilled) {
  *VAR_12 |= VAR_1;
  return;
 }

 while (FUNC_0() - VAR_11 < VAR_10)
  continue;






 VAR_9->dtms_present &= ~VAR_2;
 VAR_13->cpu_dtrace_chilled += VAR_10;
}
