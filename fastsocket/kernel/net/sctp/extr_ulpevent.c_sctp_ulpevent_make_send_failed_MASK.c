
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int truesize; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_sndrcvinfo {int dummy; } ;
struct TYPE_4__ {int sinfo_flags; } ;
struct sctp_send_failed {int ssf_length; int ssf_assoc_id; TYPE_2__ ssf_info; int ssf_error; int ssf_flags; int ssf_type; } ;
struct sctp_data_chunk {int dummy; } ;
struct sctp_chunk {TYPE_1__* chunk_hdr; int sinfo; int skb; } ;
struct sctp_association {int dummy; } ;
typedef int gfp_t ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_3__ {int flags; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_association const*) ;
 struct sctp_ulpevent* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sctp_ulpevent*,int ,int ) ;
 int FUNC_5 (struct sctp_ulpevent*,struct sctp_association const*) ;
 struct sk_buff* FUNC_6 (int ,int,int ,int ) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;

struct sctp_ulpevent *FUNC_10(
 const struct sctp_association *VAR_2, struct sctp_chunk *VAR_3,
 __u16 VAR_4, __u32 VAR_5, gfp_t VAR_6)
{
 struct sctp_ulpevent *VAR_7;
 struct sctp_send_failed *VAR_8;
 struct sk_buff *VAR_9;


 int VAR_10 = FUNC_1(VAR_3->chunk_hdr->length);


 VAR_9 = FUNC_6(VAR_3->skb,
         sizeof(struct sctp_send_failed),
         0,
         VAR_6);
 if (!VAR_9)
  goto fail;


 FUNC_7(VAR_9, sizeof(struct sctp_data_chunk));
 VAR_10 -= sizeof(struct sctp_data_chunk);


 VAR_7 = FUNC_3(VAR_9);
 FUNC_4(VAR_7, VAR_0, VAR_9->truesize);

 VAR_8 = (struct sctp_send_failed *)
  FUNC_8(VAR_9, sizeof(struct sctp_send_failed));







 VAR_8->ssf_type = VAR_1;
 VAR_8->ssf_flags = VAR_4;
 VAR_8->ssf_length = sizeof(struct sctp_send_failed) + VAR_10;
 FUNC_9(VAR_9, VAR_8->ssf_length);
 VAR_8->ssf_error = VAR_5;
 FUNC_0(&VAR_8->ssf_info, &VAR_3->sinfo, sizeof(struct sctp_sndrcvinfo));




 VAR_8->ssf_info.sinfo_flags = VAR_3->chunk_hdr->flags;
 FUNC_5(VAR_7, VAR_2);
 VAR_8->ssf_assoc_id = FUNC_2(VAR_2);
 return VAR_7;

fail:
 return ((void*)0);
}
