
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char const u8 ;
struct wpabuf {int dummy; } ;
struct dpp_authentication {char const* e_nonce; TYPE_1__* curve; int ke; } ;
struct TYPE_2__ {size_t nonce_len; int hash_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int,int ,int *,int *,char const*) ;
 int FUNC_1 (struct wpabuf*,int ) ;
 scalar_t__ VAR_13 ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,size_t) ;
 int FUNC_4 (int ,char*,char const*,int) ;
 int FUNC_5 (int ,char*,char const*,size_t) ;
 int FUNC_6 (int ,char*,struct wpabuf*) ;
 int FUNC_7 (int ,char*) ;
 struct wpabuf* FUNC_8 (size_t) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*) ;
 char const* FUNC_12 (struct wpabuf*,int) ;
 int FUNC_13 (struct wpabuf*,char const*,size_t) ;
 int FUNC_14 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_15(struct dpp_authentication *VAR_14,
            const char *VAR_15)
{
 size_t VAR_16;
 size_t VAR_17, VAR_18;
 struct wpabuf *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 u8 *VAR_21;
 size_t VAR_22;

 FUNC_7(VAR_10, "DPP: Build configuration request");

 VAR_16 = VAR_14->curve->nonce_len;
 if (FUNC_3(VAR_14->e_nonce, VAR_16)) {
  FUNC_7(VAR_11, "DPP: Failed to generate E-nonce");
  goto fail;
 }
 FUNC_4(VAR_10, "DPP: E-nonce", VAR_14->e_nonce, VAR_16);
 VAR_17 = FUNC_2(VAR_15);
 FUNC_5(VAR_10, "DPP: configAttr JSON", VAR_15, VAR_17);


 VAR_18 = 4 + VAR_16 + 4 + VAR_17;
 VAR_19 = FUNC_8(VAR_18);
 VAR_22 = 4 + VAR_18 + VAR_0;




 VAR_20 = FUNC_8(VAR_22);
 if (!VAR_19 || !VAR_20)
  goto fail;
 FUNC_14(VAR_19, VAR_2);
 FUNC_14(VAR_19, VAR_16);
 FUNC_13(VAR_19, VAR_14->e_nonce, VAR_16);
 FUNC_14(VAR_19, VAR_1);
 FUNC_14(VAR_19, VAR_17);
 FUNC_13(VAR_19, VAR_15, VAR_17);





 FUNC_14(VAR_20, VAR_3);
 FUNC_14(VAR_20, FUNC_11(VAR_19) + VAR_0);
 VAR_21 = FUNC_12(VAR_20, FUNC_11(VAR_19) + VAR_0);


 FUNC_6(VAR_10, "DPP: AES-SIV cleartext", VAR_19);
 if (FUNC_0(VAR_14->ke, VAR_14->curve->hash_len,
       FUNC_10(VAR_19), FUNC_11(VAR_19),
       0, ((void*)0), ((void*)0), VAR_21) < 0)
  goto fail;
 FUNC_4(VAR_10, "DPP: AES-SIV ciphertext",
      VAR_21, FUNC_11(VAR_19) + VAR_0);
 FUNC_6(VAR_10,
   "DPP: Configuration Request frame attributes", VAR_20);
 FUNC_9(VAR_19);
 return VAR_20;

fail:
 FUNC_9(VAR_19);
 FUNC_9(VAR_20);
 return ((void*)0);
}
