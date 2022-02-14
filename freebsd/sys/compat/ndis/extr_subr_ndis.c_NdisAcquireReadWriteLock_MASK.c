
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int * nrl_rsvd; int nrl_spinlock; } ;
typedef TYPE_1__ ndis_rw_lock ;
struct TYPE_6__ {int nls_oldirql; } ;
typedef TYPE_2__ ndis_lock_state ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(ndis_rw_lock *VAR_1, uint8_t VAR_2,
    ndis_lock_state *VAR_3)
{
 if (VAR_2 == VAR_0) {
  FUNC_0(&VAR_1->nrl_spinlock, &VAR_3->nls_oldirql);
  VAR_1->nrl_rsvd[0]++;
 } else
  VAR_1->nrl_rsvd[1]++;
}
