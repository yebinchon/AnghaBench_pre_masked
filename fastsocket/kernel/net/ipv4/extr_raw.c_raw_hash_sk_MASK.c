
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {TYPE_2__* sk_prot; } ;
struct raw_hashinfo {int lock; struct hlist_head* ht; } ;
struct hlist_head {int dummy; } ;
struct TYPE_6__ {int num; } ;
struct TYPE_4__ {struct raw_hashinfo* raw_hash; } ;
struct TYPE_5__ {TYPE_1__ h; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct hlist_head*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,TYPE_2__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct sock *VAR_1)
{
 struct raw_hashinfo *VAR_2 = VAR_1->sk_prot->h.raw_hash;
 struct hlist_head *VAR_3;

 VAR_3 = &VAR_2->ht[FUNC_0(VAR_1)->num & (VAR_0 - 1)];

 FUNC_4(&VAR_2->lock);
 FUNC_1(VAR_1, VAR_3);
 FUNC_3(FUNC_2(VAR_1), VAR_1->sk_prot, 1);
 FUNC_5(&VAR_2->lock);
}
