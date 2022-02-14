
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sock {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct sctphdr {int vtag; } ;
struct sctp_transport {int dummy; } ;
struct TYPE_7__ {int init_tag; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct sctp_init_chunk {TYPE_3__ init_hdr; TYPE_2__ chunk_hdr; } ;
struct TYPE_8__ {scalar_t__ my_vtag; scalar_t__ peer_vtag; } ;
struct TYPE_5__ {struct sock* sk; } ;
struct sctp_association {TYPE_4__ c; TYPE_1__ base; } ;
struct sctp_af {int (* from_skb ) (union sctp_addr*,struct sk_buff*,int) ;} ;
typedef int sctp_chunkhdr_t ;
typedef scalar_t__ __u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 struct sctp_association* FUNC_1 (union sctp_addr*,union sctp_addr*,struct sctp_transport**) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_association*) ;
 int FUNC_4 (struct sock*) ;
 struct sctp_af* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 int FUNC_7 (union sctp_addr*,struct sk_buff*,int) ;
 int FUNC_8 (union sctp_addr*,struct sk_buff*,int) ;
 scalar_t__ FUNC_9 (int) ;

struct sock *FUNC_10(int VAR_3, struct sk_buff *VAR_4,
        struct sctphdr *VAR_5,
        struct sctp_association **VAR_6,
        struct sctp_transport **VAR_7)
{
 union sctp_addr VAR_8;
 union sctp_addr VAR_9;
 struct sctp_af *VAR_10;
 struct sock *VAR_11 = ((void*)0);
 struct sctp_association *VAR_12;
 struct sctp_transport *VAR_13 = ((void*)0);
 struct sctp_init_chunk *VAR_14;
 __u32 VAR_15 = FUNC_2(VAR_5->vtag);
 int VAR_16 = VAR_4->len - ((void *)VAR_5 - (void *)VAR_4->data);

 *VAR_6 = ((void*)0); *VAR_7 = ((void*)0);

 VAR_10 = FUNC_5(VAR_3);
 if (FUNC_9(!VAR_10)) {
  return ((void*)0);
 }


 VAR_10->from_skb(&VAR_8, VAR_4, 1);
 VAR_10->from_skb(&VAR_9, VAR_4, 0);




 VAR_12 = FUNC_1(&VAR_8, &VAR_9, &VAR_13);
 if (!VAR_12)
  return ((void*)0);

 VAR_11 = VAR_12->base.sk;
 if (VAR_15 == 0) {
  VAR_14 = (struct sctp_init_chunk *)((void *)VAR_5
    + sizeof(struct sctphdr));
  if (VAR_16 < sizeof(struct sctphdr) + sizeof(sctp_chunkhdr_t)
     + sizeof(__be32) ||
      VAR_14->chunk_hdr.type != VAR_1 ||
      FUNC_2(VAR_14->init_hdr.init_tag) != VAR_12->c.my_vtag) {
   goto out;
  }
 } else if (VAR_15 != VAR_12->c.peer_vtag) {
  goto out;
 }

 FUNC_4(VAR_11);




 if (FUNC_6(VAR_11))
  FUNC_0(&VAR_2, VAR_0);

 *VAR_6 = VAR_12;
 *VAR_7 = VAR_13;
 return VAR_11;

out:
 if (VAR_12)
  FUNC_3(VAR_12);
 return ((void*)0);
}
