
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ expires; } ;
struct nf_conn {TYPE_2__* tuplehash; int status; TYPE_3__ timeout; } ;
struct TYPE_4__ {int sysctl_events_retry_timeout; } ;
struct net {TYPE_1__ ct; } ;
struct TYPE_5__ {int hnnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,struct nf_conn*) ;
 int VAR_4 ;
 struct net* FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (struct nf_conn*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_5)
{
 struct nf_conn *VAR_6 = (void *)VAR_5;
 struct net *VAR_7 = FUNC_3(VAR_6);

 if (FUNC_2(VAR_0, VAR_6) < 0) {

  VAR_6->timeout.expires = VAR_3 +
   (FUNC_5() % VAR_7->ct.sysctl_events_retry_timeout);
  FUNC_0(&VAR_6->timeout);
  return;
 }

 FUNC_6(VAR_1, &VAR_6->status);
 FUNC_7(&VAR_4);
 FUNC_1(&VAR_6->tuplehash[VAR_2].hnnode);
 FUNC_8(&VAR_4);
 FUNC_4(VAR_6);
}
