
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
struct xfrm_state {TYPE_1__ id; struct esp_data* data; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct scatterlist {int dummy; } ;
struct ip_esp_hdr {scalar_t__ enc_data; int seq_no; int spi; } ;
struct esp_data {int padlen; struct crypto_aead* aead; } ;
struct crypto_aead {int dummy; } ;
struct aead_givcrypt_request {int dummy; } ;
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
 int VAR_5 ;
 struct aead_givcrypt_request* FUNC_13 (struct crypto_aead*,int*) ;
 int* FUNC_14 (struct crypto_aead*,void*) ;
 int FUNC_15 (int ) ;
 struct ip_esp_hdr* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (struct sk_buff*,struct sk_buff*,int) ;
 int FUNC_19 (struct scatterlist*,struct ip_esp_hdr*,int) ;
 int FUNC_20 (struct scatterlist*,int) ;
 int FUNC_21 (struct sk_buff*,int,struct sk_buff**) ;
 int* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*,int ) ;
 int* FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*,struct scatterlist*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_27(struct xfrm_state *VAR_6, struct sk_buff *VAR_7)
{
 int VAR_8;
 struct ip_esp_hdr *VAR_9;
 struct crypto_aead *VAR_10;
 struct aead_givcrypt_request *VAR_11;
 struct scatterlist *VAR_12;
 struct scatterlist *VAR_13;
 struct sk_buff *VAR_14;
 void *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 u8 *VAR_20;
 u8 *VAR_21;
 struct esp_data *VAR_22 = VAR_6->data;


 VAR_8 = -VAR_2;


 VAR_17 = VAR_7->len;

 VAR_10 = VAR_22->aead;
 VAR_18 = FUNC_7(VAR_10);

 VAR_16 = FUNC_0(FUNC_8(VAR_10), 4);
 VAR_17 = FUNC_0(VAR_17 + 2, VAR_16);
 if (VAR_22->padlen)
  VAR_17 = FUNC_0(VAR_17, VAR_22->padlen);

 if ((VAR_8 = FUNC_21(VAR_7, VAR_17 - VAR_7->len + VAR_18, &VAR_14)) < 0)
  goto error;
 VAR_19 = VAR_8;

 VAR_15 = FUNC_11(VAR_10, VAR_19 + 1);
 if (!VAR_15)
  goto error;

 VAR_20 = FUNC_14(VAR_10, VAR_15);
 VAR_11 = FUNC_13(VAR_10, VAR_20);
 VAR_13 = FUNC_12(VAR_10, VAR_11);
 VAR_12 = VAR_13 + 1;


 VAR_21 = FUNC_25(VAR_14);
 do {
  int VAR_23;
  for (VAR_23=0; VAR_23<VAR_17-VAR_7->len - 2; VAR_23++)
   VAR_21[VAR_23] = VAR_23 + 1;
 } while (0);
 VAR_21[VAR_17-VAR_7->len - 2] = (VAR_17 - VAR_7->len) - 2;
 VAR_21[VAR_17 - VAR_7->len - 1] = *FUNC_22(VAR_7);
 FUNC_18(VAR_7, VAR_14, VAR_17 - VAR_7->len + VAR_18);

 FUNC_24(VAR_7, -FUNC_23(VAR_7));
 VAR_9 = FUNC_16(VAR_7);
 *FUNC_22(VAR_7) = VAR_3;

 VAR_9->spi = VAR_6->id.spi;
 VAR_9->seq_no = FUNC_15(FUNC_2(VAR_7)->seq.output);

 FUNC_20(VAR_12, VAR_19);
 FUNC_26(VAR_7, VAR_12,
       VAR_9->enc_data + FUNC_10(VAR_10) - VAR_7->data,
       VAR_17 + VAR_18);
 FUNC_19(VAR_13, VAR_9, sizeof(*VAR_9));

 FUNC_4(VAR_11, 0, VAR_5, VAR_7);
 FUNC_5(VAR_11, VAR_12, VAR_12, VAR_17, VAR_20);
 FUNC_3(VAR_11, VAR_13, sizeof(*VAR_9));
 FUNC_6(VAR_11, VAR_9->enc_data,
         FUNC_2(VAR_7)->seq.output);

 FUNC_1(VAR_7)->tmp = VAR_15;
 VAR_8 = FUNC_9(VAR_11);
 if (VAR_8 == -VAR_1)
  goto error;

 if (VAR_8 == -VAR_0)
  VAR_8 = VAR_4;

 FUNC_17(VAR_15);

error:
 return VAR_8;
}
