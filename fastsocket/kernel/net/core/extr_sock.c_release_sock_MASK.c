
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int slock; int wq; scalar_t__ owned; int dep_map; } ;
struct TYPE_4__ {scalar_t__ tail; } ;
struct sock {TYPE_2__ sk_lock; TYPE_3__* sk_prot; TYPE_1__ sk_backlog; } ;
struct TYPE_6__ {int (* release_cb ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct sock *VAR_2)
{



 FUNC_1(&VAR_2->sk_lock.dep_map, 1, VAR_1);

 FUNC_3(&VAR_2->sk_lock.slock);
 if (VAR_2->sk_backlog.tail)
  FUNC_0(VAR_2);

 if (FUNC_2(VAR_2->sk_prot, VAR_0) &&
     VAR_2->sk_prot->release_cb)
  VAR_2->sk_prot->release_cb(VAR_2);

 VAR_2->sk_lock.owned = 0;
 if (FUNC_6(&VAR_2->sk_lock.wq))
  FUNC_7(&VAR_2->sk_lock.wq);
 FUNC_4(&VAR_2->sk_lock.slock);
}
