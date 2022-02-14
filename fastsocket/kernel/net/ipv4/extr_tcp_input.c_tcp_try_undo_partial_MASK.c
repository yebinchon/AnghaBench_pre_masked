
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ reordering; scalar_t__ retrans_out; scalar_t__ retrans_stamp; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct tcp_sock*) ;
 scalar_t__ FUNC_4 (struct tcp_sock*) ;
 scalar_t__ FUNC_5 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int) ;
 int FUNC_8 (struct sock*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_1, int VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_6(VAR_1);

 int VAR_4 = FUNC_4(VAR_3) || (FUNC_3(VAR_3) > VAR_3->reordering);

 if (FUNC_5(VAR_3)) {



  if (VAR_3->retrans_out == 0)
   VAR_3->retrans_stamp = 0;

  FUNC_8(VAR_1, FUNC_3(VAR_3) + VAR_2, 1);

  FUNC_0(VAR_1, "Hoe");
  FUNC_7(VAR_1, 0);
  FUNC_1(FUNC_2(VAR_1), VAR_0);





  VAR_4 = 0;
 }
 return VAR_4;
}
