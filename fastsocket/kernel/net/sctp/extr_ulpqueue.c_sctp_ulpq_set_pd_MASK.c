
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_ulpq {int pd_mode; TYPE_2__* asoc; } ;
struct sctp_sock {int pd_mode; } ;
struct TYPE_3__ {int sk; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int FUNC_0 (int *) ;
 struct sctp_sock* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sctp_ulpq *VAR_0)
{
 struct sctp_sock *VAR_1 = FUNC_1(VAR_0->asoc->base.sk);

 FUNC_0(&VAR_1->pd_mode);
 VAR_0->pd_mode = 1;
}
