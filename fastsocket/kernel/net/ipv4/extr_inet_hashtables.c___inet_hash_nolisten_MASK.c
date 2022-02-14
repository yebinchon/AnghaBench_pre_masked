
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {TYPE_2__* sk_prot; int sk_hash; } ;
struct inet_hashinfo {int dummy; } ;
struct hlist_nulls_head {int dummy; } ;
struct inet_ehash_bucket {struct hlist_nulls_head chain; } ;
typedef int spinlock_t ;
struct TYPE_3__ {struct inet_hashinfo* hashinfo; } ;
struct TYPE_4__ {TYPE_1__ h; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sock*,struct hlist_nulls_head*) ;
 struct inet_ehash_bucket* FUNC_2 (struct inet_hashinfo*,int ) ;
 int * FUNC_3 (struct inet_hashinfo*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int ,TYPE_2__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct sock *VAR_0)
{
 struct inet_hashinfo *VAR_1 = VAR_0->sk_prot->h.hashinfo;
 struct hlist_nulls_head *VAR_2;
 spinlock_t *VAR_3;
 struct inet_ehash_bucket *VAR_4;

 FUNC_0(!FUNC_5(VAR_0));

 VAR_0->sk_hash = FUNC_4(VAR_0);
 VAR_4 = FUNC_2(VAR_1, VAR_0->sk_hash);
 VAR_2 = &VAR_4->chain;
 VAR_3 = FUNC_3(VAR_1, VAR_0->sk_hash);

 FUNC_8(VAR_3);
 FUNC_1(VAR_0, VAR_2);
 FUNC_9(VAR_3);
 FUNC_7(FUNC_6(VAR_0), VAR_0->sk_prot, 1);
}
