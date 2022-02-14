
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unix_sock {int peer_wait; int readlock; int link; int inflight; int lock; int * mnt; int * dentry; } ;
struct socket {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct sock {int sk_prot; int sk_destruct; int sk_max_ack_backlog; int sk_write_space; TYPE_1__ sk_receive_queue; } ;
struct TYPE_4__ {int sysctl_max_dgram_qlen; } ;
struct net {TYPE_2__ unx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 struct sock* FUNC_11 (struct net*,int ,int ,int *) ;
 int FUNC_12 (struct socket*,struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,struct sock*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct unix_sock* FUNC_17 (struct sock*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static struct sock *FUNC_18(struct net *VAR_8, struct socket *VAR_9)
{
 struct sock *VAR_10 = ((void*)0);
 struct unix_sock *VAR_11;

 FUNC_2(&VAR_3);
 if (FUNC_3(&VAR_3) > 2 * FUNC_5())
  goto out;

 VAR_10 = FUNC_11(VAR_8, VAR_1, VAR_0, &VAR_4);
 if (!VAR_10)
  goto out;

 FUNC_12(VAR_9, VAR_10);
 FUNC_9(&VAR_10->sk_receive_queue.lock,
    &VAR_2);

 VAR_10->sk_write_space = VAR_7;
 VAR_10->sk_max_ack_backlog = VAR_8->unx.sysctl_max_dgram_qlen;
 VAR_10->sk_destruct = VAR_5;
 VAR_11 = FUNC_17(VAR_10);
 VAR_11->dentry = ((void*)0);
 VAR_11->mnt = ((void*)0);
 FUNC_15(&VAR_11->lock);
 FUNC_4(&VAR_11->inflight, 0);
 FUNC_0(&VAR_11->link);
 FUNC_10(&VAR_11->readlock);
 FUNC_6(&VAR_11->peer_wait);
 FUNC_16(VAR_6, VAR_10);
out:
 if (VAR_10 == ((void*)0))
  FUNC_1(&VAR_3);
 else {
  FUNC_7();
  FUNC_14(FUNC_13(VAR_10), VAR_10->sk_prot, 1);
  FUNC_8();
 }
 return VAR_10;
}
