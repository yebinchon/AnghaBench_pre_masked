
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; int sk_allocation; } ;
struct sk_buff {int dummy; } ;
struct inet_connection_sock {int icsk_rto; } ;
struct TYPE_4__ {int dccpd_type; } ;
struct TYPE_3__ {int max_header; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct sock*,int ) ;
 struct inet_connection_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int ,int ,int ) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (int ) ;

int FUNC_13(struct sock *VAR_7)
{
 struct sk_buff *VAR_8;
 struct inet_connection_sock *VAR_9 = FUNC_8(VAR_7);


 if (FUNC_4(FUNC_5(VAR_7)))
  return -VAR_4;

 FUNC_3(VAR_7);

 VAR_8 = FUNC_2(VAR_7->sk_prot->max_header, VAR_7->sk_allocation);
 if (FUNC_12(VAR_8 == ((void*)0)))
  return -VAR_3;


 FUNC_11(VAR_8, VAR_7->sk_prot->max_header);

 FUNC_1(VAR_8)->dccpd_type = VAR_1;

 FUNC_6(VAR_7, VAR_8);
 FUNC_7(VAR_7, FUNC_10(VAR_8, VAR_5));
 FUNC_0(VAR_0);


 FUNC_9(VAR_7, VAR_6,
      VAR_9->icsk_rto, VAR_2);
 return 0;
}
