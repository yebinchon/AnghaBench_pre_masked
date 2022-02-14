
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int rx_opt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock const*,struct sk_buff const*) ;
 int FUNC_1 (int *,int ) ;
 struct tcp_sock* FUNC_2 (struct sock const*) ;

__attribute__((used)) static inline int FUNC_3(const struct sock *VAR_1,
       const struct sk_buff *VAR_2)
{
 const struct tcp_sock *VAR_3 = FUNC_2(VAR_1);

 return !FUNC_1(&VAR_3->rx_opt, VAR_0) &&
        !FUNC_0(VAR_1, VAR_2);
}
