
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dcr_action; } ;
struct TYPE_8__ {TYPE_1__ dts_cred; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_9__ {int cpuc_dtrace_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(dtrace_state_t *VAR_4)
{
 if (VAR_4->dts_cred.dcr_action & VAR_1)
  return (1);

 if (FUNC_2(VAR_4) &&
     FUNC_1(VAR_4) &&
     FUNC_0())
  return (1);

 VAR_2[VAR_3].cpuc_dtrace_flags |= VAR_0;

 return (0);
}
