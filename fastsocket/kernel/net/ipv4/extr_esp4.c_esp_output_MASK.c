
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int spi; } ;
struct xfrm_state {TYPE_1__ id; int lock; struct xfrm_encap_tmpl* encap; struct esp_data* data; } ;
struct xfrm_encap_tmpl {int encap_type; void* encap_dport; void* encap_sport; } ;
struct udphdr {scalar_t__ check; int len; void* dest; void* source; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct scatterlist {int dummy; } ;
struct ip_esp_hdr {scalar_t__ enc_data; int seq_no; int spi; } ;
struct esp_data {int padlen; struct crypto_aead* aead; } ;
struct crypto_aead {int dummy; } ;
struct aead_givcrypt_request {int dummy; } ;
typedef int __be32 ;
typedef void* __be16 ;
struct TYPE_8__ {void* tmp; } ;
struct TYPE_6__ {int output; } ;
struct TYPE_7__ {TYPE_2__ seq; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct aead_givcrypt_request*,struct scatterlist*,int) ;
 int FUNC_4 (struct aead_givcrypt_request*,int ,int ,struct sk_buff*) ;
 int FUNC_5 (struct aead_givcrypt_request*,struct scatterlist*,struct scatterlist*,int,int*) ;
 int FUNC_6 (struct aead_givcrypt_request*,scalar_t__,int ) ;
 int FUNC_7 (struct crypto_aead*) ;
 int FUNC_8 (struct crypto_aead*) ;
 int FUNC_9 (struct aead_givcrypt_request*) ;
 scalar_t__ FUNC_10 (struct crypto_aead*) ;
 void* FUNC_11 (struct crypto_aead*,int) ;
 struct scatterlist* FUNC_12 (struct crypto_aead*,struct aead_givcrypt_request*) ;
 int VAR_6 ;
 struct aead_givcrypt_request* FUNC_13 (struct crypto_aead*,int*) ;
 int* FUNC_14 (struct crypto_aead*,void*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__) ;
 struct ip_esp_hdr* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (void*) ;
 int FUNC_19 (struct sk_buff*,struct sk_buff*,int) ;
 int FUNC_20 (struct scatterlist*,struct ip_esp_hdr*,int) ;
 int FUNC_21 (struct scatterlist*,int) ;
 int FUNC_22 (struct sk_buff*,int,struct sk_buff**) ;
 int* FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*,int ) ;
 int* FUNC_26 (struct sk_buff*) ;
 int FUNC_27 (struct sk_buff*,struct scatterlist*,scalar_t__,int) ;
 scalar_t__ FUNC_28 (struct sk_buff*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;

__attribute__((used)) static int FUNC_31(struct xfrm_state *VAR_7, struct sk_buff *VAR_8)
{
 int VAR_9;
 struct ip_esp_hdr *VAR_10;
 struct crypto_aead *VAR_11;
 struct aead_givcrypt_request *VAR_12;
 struct scatterlist *VAR_13;
 struct scatterlist *VAR_14;
 struct esp_data *VAR_15;
 struct sk_buff *VAR_16;
 void *VAR_17;
 u8 *VAR_18;
 u8 *VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;



 VAR_9 = -VAR_2;


 VAR_21 = VAR_8->len;

 VAR_15 = VAR_7->data;
 VAR_11 = VAR_15->aead;
 VAR_22 = FUNC_7(VAR_11);

 VAR_20 = FUNC_0(FUNC_8(VAR_11), 4);
 VAR_21 = FUNC_0(VAR_21 + 2, VAR_20);
 if (VAR_15->padlen)
  VAR_21 = FUNC_0(VAR_21, VAR_15->padlen);

 if ((VAR_9 = FUNC_22(VAR_8, VAR_21 - VAR_8->len + VAR_22, &VAR_16)) < 0)
  goto error;
 VAR_23 = VAR_9;

 VAR_17 = FUNC_11(VAR_11, VAR_23 + 1);
 if (!VAR_17)
  goto error;

 VAR_18 = FUNC_14(VAR_11, VAR_17);
 VAR_12 = FUNC_13(VAR_11, VAR_18);
 VAR_14 = FUNC_12(VAR_11, VAR_12);
 VAR_13 = VAR_14 + 1;


 VAR_19 = FUNC_26(VAR_16);
 do {
  int VAR_24;
  for (VAR_24=0; VAR_24<VAR_21-VAR_8->len - 2; VAR_24++)
   VAR_19[VAR_24] = VAR_24 + 1;
 } while (0);
 VAR_19[VAR_21 - VAR_8->len - 2] = (VAR_21 - VAR_8->len) - 2;
 VAR_19[VAR_21 - VAR_8->len - 1] = *FUNC_23(VAR_8);
 FUNC_19(VAR_8, VAR_16, VAR_21 - VAR_8->len + VAR_22);

 FUNC_25(VAR_8, -FUNC_24(VAR_8));
 VAR_10 = FUNC_17(VAR_8);
 *FUNC_23(VAR_8) = VAR_3;


 if (VAR_7->encap) {
  struct xfrm_encap_tmpl *VAR_25 = VAR_7->encap;
  struct udphdr *VAR_26;
  __be32 *VAR_27;
  __be16 VAR_28, VAR_29;
  int VAR_30;

  FUNC_29(&VAR_7->lock);
  VAR_28 = VAR_25->encap_sport;
  VAR_29 = VAR_25->encap_dport;
  VAR_30 = VAR_25->encap_type;
  FUNC_30(&VAR_7->lock);

  VAR_26 = (struct udphdr *)VAR_10;
  VAR_26->source = VAR_28;
  VAR_26->dest = VAR_29;
  VAR_26->len = FUNC_16(VAR_8->len - FUNC_28(VAR_8));
  VAR_26->check = 0;

  switch (VAR_30) {
  default:
  case 129:
   VAR_10 = (struct ip_esp_hdr *)(VAR_26 + 1);
   break;
  case 128:
   VAR_27 = (__be32 *)(VAR_26 + 1);
   VAR_27[0] = VAR_27[1] = 0;
   VAR_10 = (struct ip_esp_hdr *)(VAR_27 + 2);
   break;
  }

  *FUNC_23(VAR_8) = VAR_4;
 }

 VAR_10->spi = VAR_7->id.spi;
 VAR_10->seq_no = FUNC_15(FUNC_2(VAR_8)->seq.output);

 FUNC_21(VAR_13, VAR_23);
 FUNC_27(VAR_8, VAR_13,
       VAR_10->enc_data + FUNC_10(VAR_11) - VAR_8->data,
       VAR_21 + VAR_22);
 FUNC_20(VAR_14, VAR_10, sizeof(*VAR_10));

 FUNC_4(VAR_12, 0, VAR_6, VAR_8);
 FUNC_5(VAR_12, VAR_13, VAR_13, VAR_21, VAR_18);
 FUNC_3(VAR_12, VAR_14, sizeof(*VAR_10));
 FUNC_6(VAR_12, VAR_10->enc_data,
         FUNC_2(VAR_8)->seq.output);

 FUNC_1(VAR_8)->tmp = VAR_17;
 VAR_9 = FUNC_9(VAR_12);
 if (VAR_9 == -VAR_1)
  goto error;

 if (VAR_9 == -VAR_0)
  VAR_9 = VAR_5;

 FUNC_18(VAR_17);

error:
 return VAR_9;
}
