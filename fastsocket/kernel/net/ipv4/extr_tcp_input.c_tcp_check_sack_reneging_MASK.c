
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct inet_connection_sock {int icsk_rto; int icsk_retransmits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,int ,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_4, int VAR_5)
{
 if (VAR_5 & VAR_0) {
  struct inet_connection_sock *VAR_6 = FUNC_1(VAR_4);
  FUNC_0(FUNC_3(VAR_4), VAR_2);

  FUNC_4(VAR_4, 1);
  VAR_6->icsk_retransmits++;
  FUNC_5(VAR_4, FUNC_6(VAR_4));
  FUNC_2(VAR_4, VAR_1,
       VAR_6->icsk_rto, VAR_3);
  return 1;
 }
 return 0;
}
