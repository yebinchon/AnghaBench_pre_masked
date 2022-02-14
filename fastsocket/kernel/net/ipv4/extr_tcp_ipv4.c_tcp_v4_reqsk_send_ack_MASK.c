
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int ts_recent; int rcv_wnd; } ;
struct TYPE_6__ {scalar_t__ no_srccheck; } ;
struct TYPE_5__ {int daddr; } ;
struct TYPE_4__ {scalar_t__ rcv_isn; scalar_t__ snt_isn; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct request_sock*) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct request_sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sk_buff*,scalar_t__,scalar_t__,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, struct sk_buff *VAR_2,
      struct request_sock *VAR_3)
{
 FUNC_4(VAR_2, FUNC_2(VAR_3)->snt_isn + 1,
   FUNC_2(VAR_3)->rcv_isn + 1, VAR_3->rcv_wnd,
   VAR_3->ts_recent,
   0,
   FUNC_3(VAR_1, FUNC_1(VAR_2)->daddr),
   FUNC_0(VAR_3)->no_srccheck ? VAR_0 : 0);
}
