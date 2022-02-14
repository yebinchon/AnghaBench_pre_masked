
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dcr_action; } ;
struct TYPE_6__ {TYPE_1__ dts_cred; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_7__ {int cpuc_dtrace_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int
FUNC_0(dtrace_state_t *VAR_4)
{
 if (VAR_4->dts_cred.dcr_action & VAR_1)
  return (1);

 VAR_2[VAR_3].cpuc_dtrace_flags |= VAR_0;

 return (0);
}
