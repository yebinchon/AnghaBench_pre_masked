
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunk {int skb; } ;
struct sctp_af {int (* skb_iif ) (int ) ;} ;
struct TYPE_2__ {int version; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sctp_af* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(const struct sctp_chunk *VAR_0)
{
 struct sctp_af *VAR_1;
 int VAR_2 = 0;

 VAR_1 = FUNC_2(FUNC_1(FUNC_0(VAR_0->skb)->version));
 if (VAR_1)
  VAR_2 = VAR_1->skb_iif(VAR_0->skb);

 return VAR_2;
}
