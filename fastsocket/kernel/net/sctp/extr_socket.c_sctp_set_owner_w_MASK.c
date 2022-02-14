
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_wmem_queued; int sk_wmem_alloc; } ;
struct sk_buff {int dummy; } ;
struct sctp_chunk {TYPE_2__* skb; struct sctp_association* asoc; } ;
struct TYPE_3__ {struct sock* sk; } ;
struct sctp_association {int sndbuf_used; TYPE_1__ base; } ;
struct TYPE_4__ {int truesize; scalar_t__ cb; int destructor; } ;


 scalar_t__ FUNC_0 (struct sctp_chunk*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct sctp_association*) ;
 int VAR_0 ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (TYPE_2__*,struct sock*) ;

__attribute__((used)) static inline void FUNC_5(struct sctp_chunk *VAR_1)
{
 struct sctp_association *VAR_2 = VAR_1->asoc;
 struct sock *VAR_3 = VAR_2->base.sk;


 FUNC_2(VAR_2);

 FUNC_4(VAR_1->skb, VAR_3);

 VAR_1->skb->destructor = VAR_0;

 *((struct sctp_chunk **)(VAR_1->skb->cb)) = VAR_1;

 VAR_2->sndbuf_used += FUNC_0(VAR_1) +
    sizeof(struct sk_buff) +
    sizeof(struct sctp_chunk);

 FUNC_1(sizeof(struct sctp_chunk), &VAR_3->sk_wmem_alloc);
 VAR_3->sk_wmem_queued += VAR_1->skb->truesize;
 FUNC_3(VAR_3, VAR_1->skb->truesize);
}
