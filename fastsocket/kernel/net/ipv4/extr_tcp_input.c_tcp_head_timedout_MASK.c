
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ packets_out; } ;
struct sock {int dummy; } ;


 struct tcp_sock* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static inline int FUNC_3(struct sock *VAR_0)
{
 struct tcp_sock *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->packets_out &&
        FUNC_1(VAR_0, FUNC_2(VAR_0));
}
