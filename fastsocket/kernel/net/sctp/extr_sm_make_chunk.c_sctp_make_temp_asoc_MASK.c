
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_5__ {int sk; } ;
struct sctp_endpoint {TYPE_2__ base; } ;
struct sctp_chunk {struct sk_buff* skb; } ;
struct TYPE_4__ {int peer_addr; } ;
struct sctp_association {int temp; TYPE_1__ c; } ;
struct sctp_af {int (* from_skb ) (int *,struct sk_buff*,int) ;} ;
typedef int sctp_scope_t ;
typedef int gfp_t ;
struct TYPE_6__ {int version; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_association*) ;
 struct sctp_association* FUNC_3 (struct sctp_endpoint const*,int ,int ,int ) ;
 struct sctp_af* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_chunk*) ;
 int FUNC_7 (int *,struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (int) ;

struct sctp_association *FUNC_9(const struct sctp_endpoint *VAR_0,
     struct sctp_chunk *VAR_1,
     gfp_t VAR_2)
{
 struct sctp_association *VAR_3;
 struct sk_buff *VAR_4;
 sctp_scope_t VAR_5;
 struct sctp_af *VAR_6;


 VAR_5 = FUNC_5(FUNC_6(VAR_1));
 VAR_3 = FUNC_3(VAR_0, VAR_0->base.sk, VAR_5, VAR_2);
 if (!VAR_3)
  goto nodata;
 VAR_3->temp = 1;
 VAR_4 = VAR_1->skb;

 VAR_6 = FUNC_4(FUNC_1(FUNC_0(VAR_4)->version));
 if (FUNC_8(!VAR_6))
  goto fail;
 VAR_6->from_skb(&VAR_3->c.peer_addr, VAR_4, 1);
nodata:
 return VAR_3;

fail:
 FUNC_2(VAR_3);
 return ((void*)0);
}
