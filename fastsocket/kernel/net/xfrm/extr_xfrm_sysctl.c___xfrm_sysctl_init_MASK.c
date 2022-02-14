
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysctl_larval_drop; int sysctl_acq_expires; int sysctl_aevent_rseqth; int sysctl_aevent_etime; } ;
struct net {TYPE_1__ xfrm; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct net *VAR_2)
{
 VAR_2->xfrm.sysctl_aevent_etime = VAR_0;
 VAR_2->xfrm.sysctl_aevent_rseqth = VAR_1;
 VAR_2->xfrm.sysctl_larval_drop = 1;
 VAR_2->xfrm.sysctl_acq_expires = 30;
}
