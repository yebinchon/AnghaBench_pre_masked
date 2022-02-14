
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef struct wpabuf const wpabuf ;
struct dpp_pkex {int z; TYPE_1__* own_bi; } ;
struct dpp_curve_params {int prime_len; int hash_len; } ;
typedef int octet ;
struct TYPE_2__ {struct dpp_curve_params* curve; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int ,int,int ,int,int,int const**,size_t*,int*) ;
 struct wpabuf const* FUNC_1 (int ,size_t) ;
 int FUNC_2 (struct wpabuf const*,int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_3 (struct wpabuf const*,struct dpp_curve_params const*) ;
 int FUNC_4 (int ,char*,int const*,int) ;
 int FUNC_5 (int ,char*,struct wpabuf const*) ;
 int FUNC_6 (int ,char*) ;
 struct wpabuf const* FUNC_7 (size_t) ;
 int FUNC_8 (struct wpabuf const*) ;
 int FUNC_9 (struct wpabuf const*) ;
 int* FUNC_10 (struct wpabuf const*) ;
 int FUNC_11 (struct wpabuf const*) ;
 int* FUNC_12 (struct wpabuf const*,int) ;
 int FUNC_13 (struct wpabuf const*,struct wpabuf const*) ;
 int FUNC_14 (struct wpabuf const*,int const*,int) ;
 int FUNC_15 (struct wpabuf const*,int) ;
 int FUNC_16 (struct wpabuf const*,int const) ;

__attribute__((used)) static struct wpabuf *
FUNC_17(struct dpp_pkex *VAR_16,
     const struct wpabuf *VAR_17, const u8 *VAR_18)
{
 const struct dpp_curve_params *VAR_19 = VAR_16->own_bi->curve;
 struct wpabuf *VAR_20 = ((void*)0);
 size_t VAR_21, VAR_22;
 struct wpabuf *VAR_23 = ((void*)0);
 u8 *VAR_24;
 u8 VAR_25;
 const u8 *VAR_26[2];
 size_t VAR_27[2];


 VAR_21 = 4 + 2 * VAR_19->prime_len + 4 + VAR_19->hash_len;
 VAR_23 = FUNC_7(VAR_21);
 VAR_22 = 4 + VAR_21 + VAR_0;




 VAR_20 = FUNC_1(VAR_5, VAR_22);
 if (!VAR_23 || !VAR_20)
  goto fail;
 FUNC_15(VAR_23, VAR_1);
 FUNC_15(VAR_23, FUNC_11(VAR_17));
 FUNC_13(VAR_23, VAR_17);
 FUNC_15(VAR_23, VAR_2);
 FUNC_15(VAR_23, VAR_19->hash_len);
 FUNC_14(VAR_23, VAR_18, VAR_19->hash_len);
 VAR_26[0] = FUNC_10(VAR_20) + 2;
 VAR_27[0] = VAR_4;
 VAR_25 = 0;
 VAR_26[1] = &VAR_25;
 VAR_27[1] = sizeof(VAR_25);
 FUNC_4(VAR_13, "DDP: AES-SIV AD[0]", VAR_26[0], VAR_27[0]);
 FUNC_4(VAR_13, "DDP: AES-SIV AD[1]", VAR_26[1], VAR_27[1]);

 FUNC_15(VAR_20, VAR_3);
 FUNC_15(VAR_20, FUNC_11(VAR_23) + VAR_0);
 VAR_24 = FUNC_12(VAR_20, FUNC_11(VAR_23) + VAR_0);

 FUNC_5(VAR_13, "DPP: AES-SIV cleartext", VAR_23);
 if (FUNC_0(VAR_16->z, VAR_19->hash_len,
       FUNC_9(VAR_23), FUNC_11(VAR_23),
       2, VAR_26, VAR_27, VAR_24) < 0)
  goto fail;
 FUNC_4(VAR_13, "DPP: AES-SIV ciphertext",
      VAR_24, FUNC_11(VAR_23) + VAR_0);
out:
 FUNC_8(VAR_23);
 return VAR_20;

fail:
 FUNC_8(VAR_20);
 VAR_20 = ((void*)0);
 goto out;
}
