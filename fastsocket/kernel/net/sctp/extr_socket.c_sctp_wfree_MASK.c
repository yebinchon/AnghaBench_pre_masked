
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_wmem_queued; int sk_wmem_alloc; } ;
struct sk_buff {scalar_t__ truesize; scalar_t__ cb; } ;
struct sctp_chunk {struct sctp_association* asoc; } ;
struct TYPE_2__ {struct sock* sk; } ;
struct sctp_association {int sndbuf_used; TYPE_1__ base; } ;


 scalar_t__ FUNC_0 (struct sctp_chunk*) ;
 int FUNC_1 (struct sctp_association*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct sctp_association*) ;
 int FUNC_4 (struct sock*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_0)
{
 struct sctp_association *VAR_1;
 struct sctp_chunk *VAR_2;
 struct sock *VAR_3;


 VAR_2 = *((struct sctp_chunk **)(VAR_0->cb));
 VAR_1 = VAR_2->asoc;
 VAR_3 = VAR_1->base.sk;
 VAR_1->sndbuf_used -= FUNC_0(VAR_2) +
    sizeof(struct sk_buff) +
    sizeof(struct sctp_chunk);

 FUNC_2(sizeof(struct sctp_chunk), &VAR_3->sk_wmem_alloc);




 VAR_3->sk_wmem_queued -= VAR_0->truesize;
 FUNC_4(VAR_3, VAR_0->truesize);

 FUNC_5(VAR_0);
 FUNC_1(VAR_1);

 FUNC_3(VAR_1);
}
