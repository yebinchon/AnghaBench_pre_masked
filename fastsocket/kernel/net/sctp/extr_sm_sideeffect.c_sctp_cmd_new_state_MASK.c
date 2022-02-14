
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_state_change ) (struct sock*) ;int sk_shutdown; int sk_state; } ;
struct TYPE_2__ {struct sock* sk; } ;
struct sctp_association {size_t state; int wait; int rto_initial; int * timeouts; TYPE_1__ base; } ;
typedef size_t sctp_state_t ;
typedef int sctp_cmd_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct sctp_association*,int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct sock*,int ) ;
 scalar_t__ FUNC_2 (struct sctp_association*,int ) ;
 int * VAR_10 ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(sctp_cmd_seq_t *VAR_11,
          struct sctp_association *VAR_12,
          sctp_state_t VAR_13)
{
 struct sock *VAR_14 = VAR_12->base.sk;

 VAR_12->state = VAR_13;

 FUNC_0("sctp_cmd_new_state: asoc %p[%s]\n",
     VAR_12, VAR_10[VAR_13]);

 if (FUNC_3(VAR_14, VAR_8)) {



  if (FUNC_2(VAR_12, VAR_2) && FUNC_1(VAR_14, VAR_0))
   VAR_14->sk_state = VAR_6;


  if (FUNC_2(VAR_12, VAR_7) &&
      FUNC_1(VAR_14, VAR_2))
   VAR_14->sk_shutdown |= VAR_3;
 }

 if (FUNC_2(VAR_12, VAR_1)) {



  VAR_12->timeouts[VAR_5] =
      VAR_12->rto_initial;
  VAR_12->timeouts[VAR_4] =
      VAR_12->rto_initial;
 }

 if (FUNC_2(VAR_12, VAR_2) ||
     FUNC_2(VAR_12, VAR_0) ||
     FUNC_2(VAR_12, VAR_7)) {



  if (FUNC_5(&VAR_12->wait))
   FUNC_6(&VAR_12->wait);







  if (!FUNC_3(VAR_14, VAR_9))
   VAR_14->sk_state_change(VAR_14);
 }
}
