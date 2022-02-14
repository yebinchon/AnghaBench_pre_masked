
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*,int ) ;int sk_receive_queue; } ;
struct sctp_ulpq {TYPE_2__* asoc; int pd_mode; } ;
struct sctp_ulpevent {int dummy; } ;
typedef int gfp_t ;
struct TYPE_6__ {int subscribe; } ;
struct TYPE_4__ {struct sock* sk; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sctp_ulpevent*) ;
 TYPE_3__* FUNC_2 (struct sock*) ;
 struct sctp_ulpevent* FUNC_3 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (struct sctp_ulpq*) ;
 int FUNC_6 (struct sock*,int ) ;

void FUNC_7(struct sctp_ulpq *VAR_2, gfp_t VAR_3)
{
 struct sctp_ulpevent *VAR_4 = ((void*)0);
 struct sock *VAR_5;

 if (!VAR_2->pd_mode)
  return;

 VAR_5 = VAR_2->asoc->base.sk;
 if (FUNC_4(VAR_1,
           &FUNC_2(VAR_5)->subscribe))
  VAR_4 = FUNC_3(VAR_2->asoc,
           VAR_0,
           VAR_3);
 if (VAR_4)
  FUNC_0(&VAR_5->sk_receive_queue, FUNC_1(VAR_4));


 if (FUNC_5(VAR_2) || VAR_4)
  VAR_5->sk_data_ready(VAR_5, 0);
}
