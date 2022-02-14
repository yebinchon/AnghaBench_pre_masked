
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {scalar_t__ used; } ;
struct sae_data {int const* pmk; int const* pmkid; int send_confirm; TYPE_1__* tmp; } ;
struct crypto_bignum {int dummy; } ;
typedef int sae ;
typedef int peer_confirm ;
typedef int peer_commit ;
typedef int local_rand ;
typedef int local_mask ;
typedef int local_confirm ;
typedef int local_commit ;
struct TYPE_2__ {int const* kck; int own_commit_element_ecc; int ec; int pwe_ecc; int own_commit_scalar; int order; struct crypto_bignum* sae_rand; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct crypto_bignum*,struct crypto_bignum*,int ) ;
 int FUNC_1 (struct crypto_bignum*,int) ;
 void* FUNC_2 (int const*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,struct crypto_bignum*,int ) ;
 scalar_t__ FUNC_6 (int const*,int const*,int) ;
 int FUNC_7 (struct sae_data*,int ,int) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (struct sae_data*,int const*,int) ;
 int FUNC_10 (struct sae_data*) ;
 scalar_t__ FUNC_11 (struct sae_data*,int const*,int,int *,int *,int *) ;
 scalar_t__ FUNC_12 (int const*,int const*,int const*,int ,char const*,struct sae_data*) ;
 scalar_t__ FUNC_13 (struct sae_data*) ;
 scalar_t__ FUNC_14 (struct sae_data*,int) ;
 int FUNC_15 (struct sae_data*,struct wpabuf*,int *,char const*) ;
 int FUNC_16 (struct sae_data*,struct wpabuf*) ;
 int FUNC_17 (int ,char*,struct wpabuf*) ;
 int FUNC_18 (int ,char*) ;
 struct wpabuf* FUNC_19 (int) ;
 int FUNC_20 (struct wpabuf*) ;
 int const* FUNC_21 (struct wpabuf*) ;
 int FUNC_22 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_23(void)
{
 return 0;

}
