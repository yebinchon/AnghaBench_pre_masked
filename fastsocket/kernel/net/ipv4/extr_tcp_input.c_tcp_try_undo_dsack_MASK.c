
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ undo_marker; int undo_retrans; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2->undo_marker && !VAR_2->undo_retrans) {
  FUNC_0(VAR_1, "D-SACK");
  FUNC_4(VAR_1, 1);
  VAR_2->undo_marker = 0;
  FUNC_1(FUNC_2(VAR_1), VAR_0);
 }
}
