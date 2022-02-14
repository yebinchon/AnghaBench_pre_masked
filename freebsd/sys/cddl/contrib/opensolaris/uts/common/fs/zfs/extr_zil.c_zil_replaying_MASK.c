
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zl_sync; int zl_replaying_seq; int * zl_replayed_seq; int zl_os; scalar_t__ zl_replay; } ;
typedef TYPE_1__ zilog_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

boolean_t
FUNC_3(zilog_t *VAR_4, dmu_tx_t *VAR_5)
{
 if (VAR_4->zl_sync == VAR_3)
  return (VAR_1);

 if (VAR_4->zl_replay) {
  FUNC_2(FUNC_0(VAR_4->zl_os), VAR_5);
  VAR_4->zl_replayed_seq[FUNC_1(VAR_5) & VAR_2] =
      VAR_4->zl_replaying_seq;
  return (VAR_1);
 }

 return (VAR_0);
}
