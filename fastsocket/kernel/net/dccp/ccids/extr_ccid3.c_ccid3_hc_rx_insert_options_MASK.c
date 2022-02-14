
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x_recv ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct ccid3_hc_rx_sock {int ccid3hcrx_pinv; int ccid3hcrx_x_recv; } ;
typedef int pinv ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ccid3_hc_rx_sock* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*,struct sk_buff*,int ,int *,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 const struct ccid3_hc_rx_sock *VAR_6;
 __be32 VAR_7, VAR_8;

 if (!(VAR_4->sk_state == VAR_0 || VAR_4->sk_state == VAR_1))
  return 0;

 VAR_6 = FUNC_0(VAR_4);

 if (FUNC_2(VAR_5))
  return 0;

 VAR_7 = FUNC_3(VAR_6->ccid3hcrx_x_recv);
 VAR_8 = FUNC_3(VAR_6->ccid3hcrx_pinv);

 if (FUNC_1(VAR_4, VAR_5, VAR_2,
          &VAR_8, sizeof(VAR_8)) ||
     FUNC_1(VAR_4, VAR_5, VAR_3,
          &VAR_7, sizeof(VAR_7)))
  return -1;

 return 0;
}
