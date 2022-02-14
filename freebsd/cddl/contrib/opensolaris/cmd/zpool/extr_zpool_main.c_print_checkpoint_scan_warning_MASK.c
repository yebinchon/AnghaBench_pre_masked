
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pss_state; scalar_t__ pss_end_time; } ;
typedef TYPE_1__ pool_scan_stat_t ;
struct TYPE_6__ {scalar_t__ pcs_state; scalar_t__ pcs_start_time; } ;
typedef TYPE_2__ pool_checkpoint_stat_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(pool_scan_stat_t *VAR_7, pool_checkpoint_stat_t *VAR_8)
{
 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
  return;

 if (VAR_8->pcs_state == VAR_2 ||
     VAR_8->pcs_state == VAR_0)
  return;

 FUNC_0(VAR_8->pcs_state == VAR_1);

 if (VAR_7->pss_state == VAR_5)
  return;

 if ((VAR_7->pss_state == VAR_4 || VAR_7->pss_state == VAR_3) &&
     VAR_7->pss_end_time < VAR_8->pcs_start_time)
  return;

 if (VAR_7->pss_state == VAR_4 || VAR_7->pss_state == VAR_3) {
  (void) FUNC_2(FUNC_1("    scan warning: skipped blocks "
      "that are only referenced by the checkpoint.\n"));
 } else {
  FUNC_0(VAR_7->pss_state == VAR_6);
  (void) FUNC_2(FUNC_1("    scan warning: skipping blocks "
      "that are only referenced by the checkpoint.\n"));
 }
}
