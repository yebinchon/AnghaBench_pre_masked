
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int max_window; scalar_t__ pushed_seq; int write_seq; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct tcp_sock *VAR_0)
{
 return FUNC_0(VAR_0->write_seq, VAR_0->pushed_seq + (VAR_0->max_window >> 1));
}
