
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {TYPE_2__* sk_prot; } ;
struct inet_hashinfo {int bsockets; } ;
struct inet_bind_bucket {int num_owners; int owners; } ;
struct TYPE_8__ {struct inet_bind_bucket* icsk_bind_hash; } ;
struct TYPE_7__ {unsigned short num; } ;
struct TYPE_5__ {struct inet_hashinfo* hashinfo; } ;
struct TYPE_6__ {TYPE_1__ h; } ;


 int FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (struct sock*) ;
 TYPE_3__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int *) ;

void FUNC_4(struct sock *VAR_0, struct inet_bind_bucket *VAR_1,
      const unsigned short VAR_2)
{
 struct inet_hashinfo *VAR_3 = VAR_0->sk_prot->h.hashinfo;

 FUNC_0(&VAR_3->bsockets);

 FUNC_2(VAR_0)->num = VAR_2;
 FUNC_3(VAR_0, &VAR_1->owners);
 VAR_1->num_owners++;
 FUNC_1(VAR_0)->icsk_bind_hash = VAR_1;
}
