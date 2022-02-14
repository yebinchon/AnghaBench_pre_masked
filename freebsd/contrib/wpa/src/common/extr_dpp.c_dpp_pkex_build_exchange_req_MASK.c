
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct dpp_pkex {int Mx; int identifier; void* x; int code; int own_mac; TYPE_1__* own_bi; } ;
struct dpp_curve_params {int prime_len; int ike_group; } ;
struct TYPE_2__ {struct dpp_curve_params* curve; } ;
typedef int const EC_POINT ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int const* FUNC_6 (int *) ;
 int FUNC_7 (int *,int const*,int const*,int const*,int *) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int *,int const*,int *,int *,int *) ;
 int const* FUNC_10 (int *) ;
 int * FUNC_11 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct wpabuf* FUNC_12 (int ,size_t) ;
 scalar_t__ FUNC_13 (int *,int ,int) ;
 int FUNC_14 (char*,int *,int const*) ;
 void* FUNC_15 (struct dpp_curve_params const*) ;
 int const* FUNC_16 (struct dpp_curve_params const*,int ,int ,int ,int *,int **) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_17 (struct dpp_curve_params const**,int ,scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_18 (struct wpabuf*,struct dpp_curve_params const*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (struct wpabuf*) ;
 int FUNC_22 (struct wpabuf*,int) ;
 int FUNC_23 (struct wpabuf*,int) ;
 int FUNC_24 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_25(struct dpp_pkex *VAR_12)
{
 EC_KEY *VAR_13 = ((void*)0);
 const EC_POINT *VAR_14;
 BN_CTX *VAR_15 = ((void*)0);
 EC_GROUP *VAR_16 = ((void*)0);
 EC_POINT *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 struct wpabuf *VAR_19 = ((void*)0);
 BIGNUM *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
 struct wpabuf *VAR_22 = ((void*)0);
 size_t VAR_23;
 const struct dpp_curve_params *VAR_24 = VAR_12->own_bi->curve;

 FUNC_20(VAR_7, "DPP: Build PKEX Exchange Request");


 VAR_15 = FUNC_1();
 if (!VAR_15)
  goto fail;
 VAR_17 = FUNC_16(VAR_24, VAR_12->own_mac, VAR_12->code,
    VAR_12->identifier, VAR_15, &VAR_16);
 if (!VAR_17)
  goto fail;
 VAR_12->x = FUNC_15(VAR_24);

 if (!VAR_12->x)
  goto fail;


 VAR_13 = FUNC_11(VAR_12->x);
 if (!VAR_13)
  goto fail;
 VAR_14 = FUNC_6(VAR_13);
 if (!VAR_14)
  goto fail;
 FUNC_14("DPP: X", VAR_16, VAR_14);
 VAR_18 = FUNC_10(VAR_16);
 VAR_20 = FUNC_3();
 VAR_21 = FUNC_3();
 if (!VAR_18 || !VAR_20 || !VAR_21 ||
     FUNC_7(VAR_16, VAR_18, VAR_14, VAR_17, VAR_15) != 1 ||
     FUNC_9(VAR_16, VAR_18, VAR_20, VAR_21, VAR_15) != 1)
  goto fail;
 FUNC_14("DPP: M", VAR_16, VAR_18);


 VAR_23 = 4 + 2;
 if (VAR_12->identifier)
  VAR_23 += 4 + FUNC_19(VAR_12->identifier);
 VAR_23 += 4 + 2 * VAR_24->prime_len;
 VAR_22 = FUNC_12(VAR_3, VAR_23);
 if (!VAR_22)
  goto fail;
 FUNC_23(VAR_22, VAR_2);
 FUNC_23(VAR_22, 2);
 FUNC_23(VAR_22, VAR_24->ike_group);






 if (VAR_12->identifier) {
  FUNC_23(VAR_22, VAR_0);
  FUNC_23(VAR_22, FUNC_19(VAR_12->identifier));
  FUNC_24(VAR_22, VAR_12->identifier);
 }
 FUNC_23(VAR_22, VAR_1);
 FUNC_23(VAR_22, 2 * VAR_24->prime_len);
 if (FUNC_13(VAR_20, FUNC_22(VAR_22, VAR_24->prime_len),
      VAR_24->prime_len) < 0 ||
     FUNC_13(VAR_20, VAR_12->Mx, VAR_24->prime_len) < 0 ||
     FUNC_13(VAR_21, FUNC_22(VAR_22, VAR_24->prime_len),
      VAR_24->prime_len) < 0)
  goto fail;

out:
 FUNC_21(VAR_19);
 FUNC_5(VAR_13);
 FUNC_8(VAR_18);
 FUNC_8(VAR_17);
 FUNC_2(VAR_20);
 FUNC_2(VAR_21);
 FUNC_0(VAR_15);
 FUNC_4(VAR_16);
 return VAR_22;
fail:
 FUNC_20(VAR_8, "DPP: Failed to build PKEX Exchange Request");
 FUNC_21(VAR_22);
 VAR_22 = ((void*)0);
 goto out;
}
