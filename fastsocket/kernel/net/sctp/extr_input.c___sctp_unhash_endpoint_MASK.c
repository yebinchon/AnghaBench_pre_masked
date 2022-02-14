
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_hashbucket {int lock; } ;
struct TYPE_2__ {int port; } ;
struct sctp_ep_common {size_t hashent; int node; TYPE_1__ bind_addr; } ;
struct sctp_endpoint {struct sctp_ep_common base; } ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int ) ;
 struct sctp_hashbucket* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sctp_endpoint *VAR_1)
{
 struct sctp_hashbucket *VAR_2;
 struct sctp_ep_common *VAR_3;

 VAR_3 = &VAR_1->base;

 VAR_3->hashent = FUNC_1(VAR_3->bind_addr.port);

 VAR_2 = &VAR_0[VAR_3->hashent];

 FUNC_2(&VAR_2->lock);
 FUNC_0(&VAR_3->node);
 FUNC_3(&VAR_2->lock);
}
