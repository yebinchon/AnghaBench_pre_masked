
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* opt; } ;
struct ipv6_pinfo {TYPE_1__ cork; } ;
struct TYPE_5__ {int fl; int flags; int * dst; } ;
struct inet_sock {TYPE_2__ cork; } ;
struct TYPE_6__ {struct TYPE_6__* srcrt; struct TYPE_6__* hopopt; struct TYPE_6__* dst1opt; struct TYPE_6__* dst0opt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct inet_sock *VAR_1, struct ipv6_pinfo *VAR_2)
{
 if (VAR_2->cork.opt) {
  FUNC_1(VAR_2->cork.opt->dst0opt);
  FUNC_1(VAR_2->cork.opt->dst1opt);
  FUNC_1(VAR_2->cork.opt->hopopt);
  FUNC_1(VAR_2->cork.opt->srcrt);
  FUNC_1(VAR_2->cork.opt);
  VAR_2->cork.opt = ((void*)0);
 }

 if (VAR_1->cork.dst) {
  FUNC_0(VAR_1->cork.dst);
  VAR_1->cork.dst = ((void*)0);
  VAR_1->cork.flags &= ~VAR_0;
 }
 FUNC_2(&VAR_1->cork.fl, 0, sizeof(VAR_1->cork.fl));
}
