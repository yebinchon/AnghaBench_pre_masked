
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {TYPE_2__* sk_prot; } ;
struct inet_hashinfo {int bind_bucket_cachep; int bsockets; struct inet_bind_hashbucket* bhash; int bhash_size; } ;
struct inet_bind_hashbucket {int lock; } ;
struct inet_bind_bucket {int num_owners; } ;
struct TYPE_8__ {struct inet_bind_bucket* icsk_bind_hash; } ;
struct TYPE_7__ {scalar_t__ num; } ;
struct TYPE_5__ {struct inet_hashinfo* hashinfo; } ;
struct TYPE_6__ {TYPE_1__ h; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,struct inet_bind_bucket*) ;
 TYPE_4__* FUNC_4 (struct sock*) ;
 TYPE_3__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_0)
{
 struct inet_hashinfo *VAR_1 = VAR_0->sk_prot->h.hashinfo;
 const int VAR_2 = FUNC_2(FUNC_6(VAR_0), FUNC_5(VAR_0)->num,
   VAR_1->bhash_size);
 struct inet_bind_hashbucket *VAR_3 = &VAR_1->bhash[VAR_2];
 struct inet_bind_bucket *VAR_4;

 FUNC_1(&VAR_1->bsockets);

 FUNC_7(&VAR_3->lock);
 VAR_4 = FUNC_4(VAR_0)->icsk_bind_hash;
 FUNC_0(VAR_0);
 VAR_4->num_owners--;
 FUNC_4(VAR_0)->icsk_bind_hash = ((void*)0);
 FUNC_5(VAR_0)->num = 0;
 FUNC_3(VAR_1->bind_bucket_cachep, VAR_4);
 FUNC_8(&VAR_3->lock);
}
