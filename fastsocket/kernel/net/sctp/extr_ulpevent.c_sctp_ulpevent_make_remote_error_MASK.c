
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int truesize; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_remote_error {int sre_assoc_id; int sre_error; int sre_length; scalar_t__ sre_flags; int sre_type; } ;
struct sctp_chunk {TYPE_2__* skb; } ;
struct sctp_association {int dummy; } ;
struct TYPE_4__ {int length; int cause; } ;
typedef TYPE_1__ sctp_errhdr_t ;
typedef int gfp_t ;
typedef int __u16 ;
typedef int __be16 ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_association const*) ;
 struct sctp_ulpevent* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sctp_ulpevent*,int ,int ) ;
 int FUNC_5 (struct sctp_ulpevent*,struct sctp_association const*) ;
 struct sk_buff* FUNC_6 (TYPE_2__*,int,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;

struct sctp_ulpevent *FUNC_10(
 const struct sctp_association *VAR_2, struct sctp_chunk *VAR_3,
 __u16 VAR_4, gfp_t VAR_5)
{
 struct sctp_ulpevent *VAR_6;
 struct sctp_remote_error *VAR_7;
 struct sk_buff *VAR_8;
 sctp_errhdr_t *VAR_9;
 __be16 VAR_10;
 int VAR_11;

 VAR_9 = (sctp_errhdr_t *)(VAR_3->skb->data);
 VAR_10 = VAR_9->cause;
 VAR_11 = FUNC_0(FUNC_1(VAR_9->length)) - sizeof(sctp_errhdr_t);


 FUNC_7(VAR_3->skb, sizeof(sctp_errhdr_t));




 VAR_8 = FUNC_6(VAR_3->skb, sizeof(struct sctp_remote_error),
         0, VAR_5);


 FUNC_7(VAR_3->skb, VAR_11);
 if (!VAR_8)
  goto fail;


 VAR_6 = FUNC_3(VAR_8);
 FUNC_4(VAR_6, VAR_0, VAR_8->truesize);

 VAR_7 = (struct sctp_remote_error *)
  FUNC_8(VAR_8, sizeof(struct sctp_remote_error));


 FUNC_9(VAR_8, sizeof(struct sctp_remote_error) + VAR_11);







 VAR_7->sre_type = VAR_1;
 VAR_7->sre_flags = 0;
 VAR_7->sre_length = VAR_8->len;
 VAR_7->sre_error = VAR_10;
 FUNC_5(VAR_6, VAR_2);
 VAR_7->sre_assoc_id = FUNC_2(VAR_2);

 return VAR_6;

fail:
 return ((void*)0);
}
