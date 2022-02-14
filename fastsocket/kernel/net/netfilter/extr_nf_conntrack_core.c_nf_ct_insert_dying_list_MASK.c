
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ expires; } ;
struct nf_conn {TYPE_3__ timeout; TYPE_1__* tuplehash; } ;
struct TYPE_6__ {int sysctl_events_retry_timeout; int dying; } ;
struct net {TYPE_2__ ct; } ;
struct TYPE_5__ {int hnnode; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct net* FUNC_2 (struct nf_conn*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,int ,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct nf_conn *VAR_4)
{
 struct net *VAR_5 = FUNC_2(VAR_4);


 FUNC_5(&VAR_3);
 FUNC_1(&VAR_4->tuplehash[VAR_0].hnnode,
        &VAR_5->ct.dying);
 FUNC_6(&VAR_3);

 FUNC_4(&VAR_4->timeout, VAR_1, (unsigned long)VAR_4);
 VAR_4->timeout.expires = VAR_2 +
  (FUNC_3() % VAR_5->ct.sysctl_events_retry_timeout);
 FUNC_0(&VAR_4->timeout);
}
