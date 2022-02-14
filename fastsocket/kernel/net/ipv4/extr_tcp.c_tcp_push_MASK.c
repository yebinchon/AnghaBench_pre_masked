
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,int,int) ;
 scalar_t__ FUNC_1 (struct tcp_sock*) ;
 int FUNC_2 (struct tcp_sock*,struct sk_buff*) ;
 int FUNC_3 (struct tcp_sock*,int,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 struct sk_buff* FUNC_6 (struct sock*) ;

__attribute__((used)) static inline void FUNC_7(struct sock *VAR_2, int VAR_3, int VAR_4,
       int VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_5(VAR_2);

 if (FUNC_4(VAR_2)) {
  struct sk_buff *VAR_7 = FUNC_6(VAR_2);
  if (!(VAR_3 & VAR_0) || FUNC_1(VAR_6))
   FUNC_2(VAR_6, VAR_7);
  FUNC_3(VAR_6, VAR_3, VAR_7);
  FUNC_0(VAR_2, VAR_4,
       (VAR_3 & VAR_0) ? VAR_1 : VAR_5);
 }
}
