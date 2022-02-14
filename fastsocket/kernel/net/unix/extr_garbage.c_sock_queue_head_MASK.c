
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;



__attribute__((used)) static inline struct sk_buff *FUNC_0(struct sock *VAR_0)
{
 return (struct sk_buff *)&VAR_0->sk_receive_queue;
}
