
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
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(dtrace_state_t *VAR_6)
{
 int VAR_7 = VAR_6->dts_cred.dcr_action;

 if (((VAR_7 & VAR_2) == 0) &&
     FUNC_2(VAR_6) == 0)
  goto bad;

 if (((VAR_7 & VAR_1) == 0) &&
     FUNC_1(VAR_6) == 0)
  goto bad;

 if (((VAR_7 & VAR_3) == 0) &&
     FUNC_0() == 0)
  goto bad;

 return (1);

bad:
 VAR_4[VAR_5].cpuc_dtrace_flags |= VAR_0;

 return (0);
}
