
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_hashbucket {int lock; int chain; } ;
struct TYPE_3__ {int port; } ;
struct sctp_ep_common {size_t hashent; int node; TYPE_1__ bind_addr; } ;
struct TYPE_4__ {int port; } ;
struct sctp_association {TYPE_2__ peer; struct sctp_ep_common base; } ;


 int FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int ,int ) ;
 struct sctp_hashbucket* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sctp_association *VAR_1)
{
 struct sctp_ep_common *VAR_2;
 struct sctp_hashbucket *VAR_3;

 VAR_2 = &VAR_1->base;


 VAR_2->hashent = FUNC_1(VAR_2->bind_addr.port, VAR_1->peer.port);

 VAR_3 = &VAR_0[VAR_2->hashent];

 FUNC_2(&VAR_3->lock);
 FUNC_0(&VAR_2->node, &VAR_3->chain);
 FUNC_3(&VAR_3->lock);
}
