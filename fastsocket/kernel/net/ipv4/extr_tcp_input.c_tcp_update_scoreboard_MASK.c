
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int fackets_out; int reordering; int sacked_out; } ;
struct sock {int dummy; } ;


 scalar_t__ FUNC_0 (struct tcp_sock*) ;
 scalar_t__ FUNC_1 (struct tcp_sock*) ;
 int FUNC_2 (struct sock*,int) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0, int VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_3(VAR_0);

 if (FUNC_1(VAR_2)) {
  FUNC_2(VAR_0, 1);
 } else if (FUNC_0(VAR_2)) {
  int VAR_3 = VAR_2->fackets_out - VAR_2->reordering;
  if (VAR_3 <= 0)
   VAR_3 = 1;
  FUNC_2(VAR_0, VAR_3);
 } else {
  int VAR_4 = VAR_2->sacked_out - VAR_2->reordering;
  if (VAR_4 < VAR_1)
   VAR_4 = VAR_1;
  FUNC_2(VAR_0, VAR_4);
 }

 FUNC_4(VAR_0);
}
