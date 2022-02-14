
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int ts_recent; int rcv_wnd; } ;
struct TYPE_4__ {int daddr; } ;
struct TYPE_3__ {scalar_t__ rcv_isn; scalar_t__ snt_isn; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct request_sock*) ;
 int FUNC_2 (struct sock*,int *) ;
 int FUNC_3 (struct sk_buff*,scalar_t__,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1,
      struct request_sock *VAR_2)
{
 FUNC_3(VAR_1, FUNC_1(VAR_2)->snt_isn + 1, FUNC_1(VAR_2)->rcv_isn + 1, VAR_2->rcv_wnd, VAR_2->ts_recent,
   FUNC_2(VAR_0, &FUNC_0(VAR_1)->daddr));
}
