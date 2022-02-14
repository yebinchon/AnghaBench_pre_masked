
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_ack_backlog; } ;
struct TYPE_2__ {struct sock* sk; } ;
struct sctp_endpoint {int asocs; TYPE_1__ base; } ;
struct sctp_association {int asocs; scalar_t__ temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct sock*,int ) ;
 scalar_t__ FUNC_2 (struct sock*,int ) ;

void FUNC_3(struct sctp_endpoint *VAR_2,
       struct sctp_association *VAR_3)
{
 struct sock *VAR_4 = VAR_2->base.sk;





 if (VAR_3->temp)
  return;


 FUNC_0(&VAR_3->asocs, &VAR_2->asocs);


 if (FUNC_2(VAR_4, VAR_1) && FUNC_1(VAR_4, VAR_0))
  VAR_4->sk_ack_backlog++;
}
