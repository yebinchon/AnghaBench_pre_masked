
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct iucv_sock {scalar_t__ transport; scalar_t__ msglimit_peer; int pendings; int msg_sent; TYPE_1__* path; int send_skb_q; } ;
struct TYPE_2__ {scalar_t__ msglim; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct iucv_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct sock *VAR_2)
{
 struct iucv_sock *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->sk_state != VAR_1)
  return 1;
 if (VAR_3->transport == VAR_0)
  return (FUNC_2(&VAR_3->send_skb_q) < VAR_3->path->msglim);
 else
  return ((FUNC_0(&VAR_3->msg_sent) < VAR_3->msglimit_peer) &&
   (FUNC_0(&VAR_3->pendings) <= 0));
}
