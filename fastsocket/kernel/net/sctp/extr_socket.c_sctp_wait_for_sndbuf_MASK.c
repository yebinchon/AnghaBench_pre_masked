
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_err; } ;
struct TYPE_2__ {struct sock* sk; scalar_t__ dead; } ;
struct sctp_association {scalar_t__ state; int wait; TYPE_1__ base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,struct sctp_association*,long,size_t) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 long FUNC_5 (long) ;
 int FUNC_6 (struct sctp_association*) ;
 int FUNC_7 (struct sctp_association*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 size_t FUNC_10 (struct sctp_association*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (long) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_13(struct sctp_association *VAR_6, long *VAR_7,
    size_t VAR_8)
{
 struct sock *VAR_9 = VAR_6->base.sk;
 int VAR_10 = 0;
 long VAR_11 = *VAR_7;
 FUNC_1(VAR_5);

 FUNC_2("wait_for_sndbuf: asoc=%p, timeo=%ld, msg_len=%zu\n",
     VAR_6, (long)(*VAR_7), VAR_8);


 FUNC_6(VAR_6);


 for (;;) {
  FUNC_4(&VAR_6->wait, &VAR_5,
       VAR_3);
  if (!*VAR_7)
   goto do_nonblock;
  if (VAR_9->sk_err || VAR_6->state >= VAR_2 ||
      VAR_6->base.dead)
   goto do_error;
  if (FUNC_11(VAR_4))
   goto do_interrupted;
  if (VAR_8 <= FUNC_10(VAR_6))
   break;




  FUNC_9(VAR_9);
  VAR_11 = FUNC_5(VAR_11);
  FUNC_0(VAR_9 != VAR_6->base.sk);
  FUNC_8(VAR_9);

  *VAR_7 = VAR_11;
 }

out:
 FUNC_3(&VAR_6->wait, &VAR_5);


 FUNC_7(VAR_6);

 return VAR_10;

do_error:
 VAR_10 = -VAR_1;
 goto out;

do_interrupted:
 VAR_10 = FUNC_12(*VAR_7);
 goto out;

do_nonblock:
 VAR_10 = -VAR_0;
 goto out;
}
