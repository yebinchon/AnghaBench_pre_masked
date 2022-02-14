
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_net_ctx {TYPE_1__* queues; } ;
struct ifnet {int dummy; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct TYPE_2__ {int qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ntb_net_ctx* FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_3, struct ifmediareq *VAR_4)
{
 struct ntb_net_ctx *VAR_5 = FUNC_0(VAR_3);

 VAR_4->ifm_status = VAR_1;
 VAR_4->ifm_active = VAR_2;
 if (FUNC_1(VAR_5->queues[0].qp))
  VAR_4->ifm_status |= VAR_0;
}
