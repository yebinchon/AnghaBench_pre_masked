
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sctp_ulpevent {struct sctp_association* asoc; int rmem_len; } ;
struct TYPE_2__ {int sk; } ;
struct sctp_association {TYPE_1__ base; int rmem_alloc; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sctp_association*) ;
 struct sk_buff* FUNC_2 (struct sctp_ulpevent*) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct sctp_ulpevent *VAR_0,
        const struct sctp_association *VAR_1)
{
 struct sk_buff *VAR_2;




 FUNC_1((struct sctp_association *)VAR_1);
 VAR_2 = FUNC_2(VAR_0);
 VAR_0->asoc = (struct sctp_association *)VAR_1;
 FUNC_0(VAR_0->rmem_len, &VAR_0->asoc->rmem_alloc);
 FUNC_3(VAR_2, VAR_1->base.sk);
}
