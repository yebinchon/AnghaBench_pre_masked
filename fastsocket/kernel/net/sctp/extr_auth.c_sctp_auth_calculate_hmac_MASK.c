
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sctp_shared_key {int dummy; } ;
struct TYPE_4__ {int * hmac; int hmac_id; int shkey_id; } ;
struct sctp_auth_chunk {TYPE_2__ auth_hdr; } ;
struct sctp_auth_bytes {int len; int * data; } ;
struct sctp_association {scalar_t__ active_key_id; TYPE_1__* ep; struct sctp_auth_bytes* asoc_shared_key; } ;
struct scatterlist {int length; } ;
struct hash_desc {int tfm; scalar_t__ flags; } ;
typedef int gfp_t ;
typedef int __u8 ;
typedef scalar_t__ __u16 ;
struct TYPE_3__ {int * auth_hmacs; } ;


 int FUNC_0 (struct hash_desc*,struct scatterlist*,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct sctp_auth_bytes* FUNC_3 (struct sctp_association const*,struct sctp_shared_key*,int ) ;
 struct sctp_shared_key* FUNC_4 (struct sctp_association const*,scalar_t__) ;
 int FUNC_5 (struct sctp_auth_bytes*) ;
 int FUNC_6 (struct scatterlist*,struct sctp_auth_chunk*,int) ;
 unsigned char* FUNC_7 (struct sk_buff*) ;

void FUNC_8(const struct sctp_association *VAR_0,
         struct sk_buff *VAR_1,
         struct sctp_auth_chunk *VAR_2,
         gfp_t VAR_3)
{
 struct scatterlist VAR_4;
 struct hash_desc VAR_5;
 struct sctp_auth_bytes *VAR_6;
 __u16 VAR_7, VAR_8;
 __u8 *VAR_9;
 unsigned char *VAR_10;
 int VAR_11 = 0;





 VAR_7 = FUNC_2(VAR_2->auth_hdr.shkey_id);
 VAR_8 = FUNC_2(VAR_2->auth_hdr.hmac_id);

 if (VAR_7 == VAR_0->active_key_id)
  VAR_6 = VAR_0->asoc_shared_key;
 else {
  struct sctp_shared_key *VAR_12;

  VAR_12 = FUNC_4(VAR_0, VAR_7);
  if (!VAR_12)
   return;

  VAR_6 = FUNC_3(VAR_0, VAR_12, VAR_3);
  if (!VAR_6)
   return;

  VAR_11 = 1;
 }


 VAR_10 = FUNC_7(VAR_1);
 FUNC_6(&VAR_4, VAR_2, VAR_10 - (unsigned char *)VAR_2);

 VAR_5.tfm = VAR_0->ep->auth_hmacs[VAR_8];
 VAR_5.flags = 0;

 VAR_9 = VAR_2->auth_hdr.hmac;
 if (FUNC_1(VAR_5.tfm, &VAR_6->data[0], VAR_6->len))
  goto free;

 FUNC_0(&VAR_5, &VAR_4, VAR_4.length, VAR_9);

free:
 if (VAR_11)
  FUNC_5(VAR_6);
}
