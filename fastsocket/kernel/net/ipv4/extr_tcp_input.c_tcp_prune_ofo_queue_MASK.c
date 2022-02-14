
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sack_ok; } ;
struct tcp_sock {TYPE_1__ rx_opt; int out_of_order_queue; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_6(VAR_1);
 int VAR_3 = 0;

 if (!FUNC_3(&VAR_2->out_of_order_queue)) {
  FUNC_0(FUNC_4(VAR_1), VAR_0);
  FUNC_1(&VAR_2->out_of_order_queue);






  if (VAR_2->rx_opt.sack_ok)
   FUNC_5(&VAR_2->rx_opt);
  FUNC_2(VAR_1);
  VAR_3 = 1;
 }
 return VAR_3;
}
