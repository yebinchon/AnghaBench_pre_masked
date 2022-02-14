
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ dtrace_id_t ;
typedef int dtrace_icookie_t ;
struct TYPE_2__ {int t_dtrace_inprobe; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static dtrace_icookie_t
FUNC_2(dtrace_id_t VAR_2)
{
 dtrace_icookie_t VAR_3;

 VAR_3 = FUNC_1();
 FUNC_0(VAR_0->t_dtrace_inprobe == 0 ||
     VAR_2 == VAR_1);
 VAR_0->t_dtrace_inprobe = 1;

 return (VAR_3);
}
