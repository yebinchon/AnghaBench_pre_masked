
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {TYPE_1__* aead; struct esp_data* data; } ;
struct esp_data {struct crypto_aead* aead; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int alg_key_len; int alg_icv_len; int alg_key; int alg_name; } ;


 scalar_t__ FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int) ;
 int FUNC_3 (struct crypto_aead*,int ,int) ;
 struct crypto_aead* FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct xfrm_state *VAR_0)
{
 struct esp_data *VAR_1 = VAR_0->data;
 struct crypto_aead *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_0->aead->alg_name, 0, 0);
 VAR_3 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_2))
  goto error;

 VAR_1->aead = VAR_2;

 VAR_3 = FUNC_3(VAR_2, VAR_0->aead->alg_key,
     (VAR_0->aead->alg_key_len + 7) / 8);
 if (VAR_3)
  goto error;

 VAR_3 = FUNC_2(VAR_2, VAR_0->aead->alg_icv_len / 8);
 if (VAR_3)
  goto error;

error:
 return VAR_3;
}
