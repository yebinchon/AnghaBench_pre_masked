
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct xfrm_state {struct esp_data* data; } ;
struct sk_buff {int len; scalar_t__ data; int ip_summed; } ;
struct scatterlist {int dummy; } ;
struct ip_esp_hdr {int * enc_data; } ;
struct esp_data {struct crypto_aead* aead; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;
struct TYPE_2__ {void* tmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct aead_request*,struct scatterlist*,int) ;
 int FUNC_2 (struct aead_request*,int ,int ,struct sk_buff*) ;
 int FUNC_3 (struct aead_request*,struct scatterlist*,struct scatterlist*,int,int *) ;
 int FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct crypto_aead*) ;
 void* FUNC_6 (struct crypto_aead*,int) ;
 int VAR_4 ;
 int FUNC_7 (struct sk_buff*,int) ;
 struct scatterlist* FUNC_8 (struct crypto_aead*,struct aead_request*) ;
 int * FUNC_9 (struct crypto_aead*,void*) ;
 struct aead_request* FUNC_10 (struct crypto_aead*,int *) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct scatterlist*,struct ip_esp_hdr*,int) ;
 int FUNC_13 (struct scatterlist*,int) ;
 int FUNC_14 (struct sk_buff*,int ,struct sk_buff**) ;
 int FUNC_15 (struct sk_buff*,struct scatterlist*,int,int) ;

__attribute__((used)) static int FUNC_16(struct xfrm_state *VAR_5, struct sk_buff *VAR_6)
{
 struct ip_esp_hdr *VAR_7;
 struct esp_data *VAR_8 = VAR_5->data;
 struct crypto_aead *VAR_9 = VAR_8->aead;
 struct aead_request *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12 = VAR_6->len - sizeof(*VAR_7) - FUNC_5(VAR_9);
 int VAR_13;
 void *VAR_14;
 u8 *VAR_15;
 struct scatterlist *VAR_16;
 struct scatterlist *VAR_17;
 int VAR_18 = -VAR_2;

 if (!FUNC_11(VAR_6, sizeof(*VAR_7) + FUNC_5(VAR_9)))
  goto out;

 if (VAR_12 <= 0)
  goto out;

 if ((VAR_18 = FUNC_14(VAR_6, 0, &VAR_11)) < 0)
  goto out;
 VAR_13 = VAR_18;

 VAR_18 = -VAR_3;
 VAR_14 = FUNC_6(VAR_9, VAR_13 + 1);
 if (!VAR_14)
  goto out;

 FUNC_0(VAR_6)->tmp = VAR_14;
 VAR_15 = FUNC_9(VAR_9, VAR_14);
 VAR_10 = FUNC_10(VAR_9, VAR_15);
 VAR_17 = FUNC_8(VAR_9, VAR_10);
 VAR_16 = VAR_17 + 1;

 VAR_6->ip_summed = VAR_0;

 VAR_7 = (struct ip_esp_hdr *)VAR_6->data;


 VAR_15 = VAR_7->enc_data;

 FUNC_13(VAR_16, VAR_13);
 FUNC_15(VAR_6, VAR_16, sizeof(*VAR_7) + FUNC_5(VAR_9), VAR_12);
 FUNC_12(VAR_17, VAR_7, sizeof(*VAR_7));

 FUNC_2(VAR_10, 0, VAR_4, VAR_6);
 FUNC_3(VAR_10, VAR_16, VAR_16, VAR_12, VAR_15);
 FUNC_1(VAR_10, VAR_17, sizeof(*VAR_7));

 VAR_18 = FUNC_4(VAR_10);
 if (VAR_18 == -VAR_1)
  goto out;

 VAR_18 = FUNC_7(VAR_6, VAR_18);

out:
 return VAR_18;
}
