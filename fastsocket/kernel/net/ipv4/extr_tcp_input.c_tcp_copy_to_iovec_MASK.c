
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int iov; } ;
struct tcp_sock {int copied_seq; TYPE_1__ ucopy; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*,int,int ) ;
 int FUNC_3 (struct sk_buff*,int,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_6(VAR_0);
 int VAR_4 = VAR_1->len - VAR_2;
 int VAR_5;

 FUNC_1();
 if (FUNC_4(VAR_1))
  VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3->ucopy.iov, VAR_4);
 else
  VAR_5 = FUNC_2(VAR_1, VAR_2,
             VAR_3->ucopy.iov);

 if (!VAR_5) {
  VAR_3->ucopy.len -= VAR_4;
  VAR_3->copied_seq += VAR_4;
  FUNC_5(VAR_0);
 }

 FUNC_0();
 return VAR_5;
}
