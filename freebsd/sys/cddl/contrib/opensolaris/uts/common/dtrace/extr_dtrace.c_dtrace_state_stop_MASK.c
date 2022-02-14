
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int processorid_t ;
struct TYPE_8__ {int dcr_visible; TYPE_2__* dcr_cred; } ;
struct TYPE_9__ {scalar_t__ dts_activity; scalar_t__ dts_getf; TYPE_3__ dts_cred; scalar_t__ dts_reserve; } ;
typedef TYPE_4__ dtrace_state_t ;
typedef int dtrace_icookie_t ;
struct TYPE_7__ {TYPE_1__* cr_zone; } ;
struct TYPE_6__ {scalar_t__ zone_dtrace_getf; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(dtrace_state_t *VAR_12, processorid_t *VAR_13)
{
 dtrace_icookie_t VAR_14;

 FUNC_0(FUNC_1(&VAR_10));

 if (VAR_12->dts_activity != VAR_0 &&
     VAR_12->dts_activity != VAR_2)
  return (VAR_5);






 VAR_12->dts_activity = VAR_2;
 FUNC_5();
 VAR_12->dts_activity = VAR_1;
 FUNC_5();
 FUNC_0(VAR_12->dts_activity == VAR_1);
 VAR_12->dts_reserve = 0;

 VAR_14 = FUNC_2();
 *VAR_13 = VAR_6;
 FUNC_4(VAR_11,
     (uint64_t)(uintptr_t)VAR_12, 0, 0, 0, 0);
 FUNC_3(VAR_14);

 VAR_12->dts_activity = VAR_3;
 FUNC_5();
 return (0);
}
