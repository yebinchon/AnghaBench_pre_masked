
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_shutdown; } ;
struct TYPE_2__ {struct sock* sk; } ;
struct sctp_association {int temp; TYPE_1__ base; } ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sctp_association*) ;
 scalar_t__ FUNC_1 (struct sock*,int ) ;
 scalar_t__ FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sctp_association*) ;

__attribute__((used)) static void FUNC_4(sctp_cmd_seq_t *VAR_3,
    struct sctp_association *VAR_4)
{
 struct sock *VAR_5 = VAR_4->base.sk;





 if (FUNC_2(VAR_5, VAR_2) && FUNC_1(VAR_5, VAR_0) &&
     (!VAR_4->temp) && (VAR_5->sk_shutdown != VAR_1))
  return;

 FUNC_3(VAR_4);
 FUNC_0(VAR_4);
}
