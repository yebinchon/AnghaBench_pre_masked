
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_hmac {scalar_t__ hmac_len; scalar_t__ hmac_id; } ;
struct TYPE_3__ {int auth_hdr; } ;
struct sctp_chunk {int skb; int chunk_end; TYPE_2__* chunk_hdr; TYPE_1__ subh; } ;
struct sctp_authhdr {void* shkey_id; void* hmac_id; } ;
struct sctp_association {scalar_t__ active_key_id; } ;
typedef int sctp_authhdr_t ;
typedef int __u8 ;
struct TYPE_4__ {void* length; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (struct sctp_chunk*,int,struct sctp_authhdr*) ;
 struct sctp_hmac* FUNC_4 (struct sctp_association const*) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association const*,int ,int ,scalar_t__) ;
 int * FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

struct sctp_chunk *FUNC_9(const struct sctp_association *VAR_1)
{
 struct sctp_chunk *VAR_2;
 struct sctp_hmac *VAR_3;
 struct sctp_authhdr VAR_4;
 __u8 *VAR_5;


 VAR_3 = FUNC_4(VAR_1);
 if (FUNC_8(!VAR_3))
  return ((void*)0);

 VAR_2 = FUNC_5(VAR_1, VAR_0, 0,
   VAR_3->hmac_len + sizeof(sctp_authhdr_t));
 if (!VAR_2)
  return ((void*)0);

 VAR_4.hmac_id = FUNC_0(VAR_3->hmac_id);
 VAR_4.shkey_id = FUNC_0(VAR_1->active_key_id);

 VAR_2->subh.auth_hdr = FUNC_3(VAR_2, sizeof(sctp_authhdr_t),
      &VAR_4);

 VAR_5 = FUNC_6(VAR_2->skb, VAR_3->hmac_len);
 FUNC_1(VAR_5, 0, VAR_3->hmac_len);


 VAR_2->chunk_hdr->length =
  FUNC_0(FUNC_2(VAR_2->chunk_hdr->length) + VAR_3->hmac_len);
 VAR_2->chunk_end = FUNC_7(VAR_2->skb);

 return VAR_2;
}
