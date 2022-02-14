
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_max_ack_backlog; int sk_receive_queue; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct sock const *VAR_0)
{
 return FUNC_0(&VAR_0->sk_receive_queue) > VAR_0->sk_max_ack_backlog;
}
