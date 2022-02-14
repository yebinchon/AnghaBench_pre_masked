
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dead; TYPE_1__* sk; } ;
struct sctp_endpoint {TYPE_2__ base; } ;
struct TYPE_3__ {int sk_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_endpoint*) ;
 int FUNC_1 (struct sctp_endpoint*) ;

void FUNC_2(struct sctp_endpoint *VAR_1)
{
 VAR_1->base.dead = 1;

 VAR_1->base.sk->sk_state = VAR_0;


 FUNC_1(VAR_1);

 FUNC_0(VAR_1);
}
