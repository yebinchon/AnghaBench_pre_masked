
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; unsigned int sk_hash; TYPE_2__* sk_prot; } ;
struct hlist_nulls_head {int dummy; } ;
struct inet_listen_hashbucket {int lock; struct hlist_nulls_head head; } ;
struct inet_hashinfo {struct inet_listen_hashbucket* listening_hash; } ;
typedef int spinlock_t ;
struct TYPE_6__ {struct hlist_nulls_head chain; } ;
struct TYPE_4__ {struct inet_hashinfo* hashinfo; } ;
struct TYPE_5__ {TYPE_1__ h; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sock*,struct hlist_nulls_head*) ;
 unsigned int FUNC_2 (struct sock*) ;
 TYPE_3__* FUNC_3 (struct inet_hashinfo*,unsigned int) ;
 int * FUNC_4 (struct inet_hashinfo*,unsigned int) ;
 size_t FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int ,TYPE_2__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct sock *VAR_1)
{
 struct inet_hashinfo *VAR_2 = VAR_1->sk_prot->h.hashinfo;

 FUNC_0(!FUNC_6(VAR_1));

 if (VAR_1->sk_state == VAR_0) {
  struct inet_listen_hashbucket *VAR_3;

  VAR_3 = &VAR_2->listening_hash[FUNC_5(VAR_1)];
  FUNC_9(&VAR_3->lock);
  FUNC_1(VAR_1, &VAR_3->head);
  FUNC_10(&VAR_3->lock);
 } else {
  unsigned int VAR_4;
  struct hlist_nulls_head *VAR_5;
  spinlock_t *VAR_6;

  VAR_1->sk_hash = VAR_4 = FUNC_2(VAR_1);
  VAR_5 = &FUNC_3(VAR_2, VAR_4)->chain;
  VAR_6 = FUNC_4(VAR_2, VAR_4);
  FUNC_9(VAR_6);
  FUNC_1(VAR_1, VAR_5);
  FUNC_10(VAR_6);
 }

 FUNC_8(FUNC_7(VAR_1), VAR_1->sk_prot, 1);
}
