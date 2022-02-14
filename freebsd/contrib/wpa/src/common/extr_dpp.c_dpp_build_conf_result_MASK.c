
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct dpp_authentication {TYPE_1__* curve; int ke; int e_nonce; } ;
typedef enum dpp_status_error { ____Placeholder_dpp_status_error } dpp_status_error ;
struct TYPE_2__ {size_t nonce_len; int hash_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int,int,int const**,size_t*,int *) ;
 struct wpabuf* FUNC_1 (int ,size_t) ;
 int FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*,struct wpabuf*) ;
 struct wpabuf* FUNC_5 (size_t) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;
 int * FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;
 void* FUNC_10 (struct wpabuf*,int) ;
 int FUNC_11 (struct wpabuf*,int ,size_t) ;
 int FUNC_12 (struct wpabuf*,int) ;

struct wpabuf * FUNC_13(struct dpp_authentication *VAR_5,
          enum dpp_status_error VAR_6)
{
 struct wpabuf *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10, VAR_11;
 const u8 *VAR_12[2];
 size_t VAR_13[2];
 u8 *VAR_14;

 VAR_9 = VAR_5->curve->nonce_len;
 VAR_10 = 5 + 4 + VAR_9;
 VAR_11 = 4 + VAR_10 + VAR_0;
 VAR_8 = FUNC_5(VAR_10);
 VAR_7 = FUNC_1(VAR_3, VAR_11);
 if (!VAR_8 || !VAR_7)
  return ((void*)0);


 FUNC_2(VAR_8, VAR_6);


 FUNC_12(VAR_8, VAR_1);
 FUNC_12(VAR_8, VAR_9);
 FUNC_11(VAR_8, VAR_5->e_nonce, VAR_9);


 VAR_12[0] = FUNC_8(VAR_7) + 2;
 VAR_13[0] = 3 + 1 + 1 + 1;
 FUNC_3(VAR_4, "DDP: AES-SIV AD[0]", VAR_12[0], VAR_13[0]);


 VAR_12[1] = FUNC_10(VAR_7, 0);
 VAR_13[1] = 0;
 FUNC_3(VAR_4, "DDP: AES-SIV AD[1]", VAR_12[1], VAR_13[1]);


 FUNC_12(VAR_7, VAR_2);
 FUNC_12(VAR_7, FUNC_9(VAR_8) + VAR_0);
 VAR_14 = FUNC_10(VAR_7, FUNC_9(VAR_8) + VAR_0);

 FUNC_4(VAR_4, "DPP: AES-SIV cleartext", VAR_8);
 if (FUNC_0(VAR_5->ke, VAR_5->curve->hash_len,
       FUNC_7(VAR_8), FUNC_9(VAR_8),
       2, VAR_12, VAR_13, VAR_14) < 0)
  goto fail;

 FUNC_4(VAR_4, "DPP: Configuration Result attributes", VAR_7);
 FUNC_6(VAR_8);
 return VAR_7;
fail:
 FUNC_6(VAR_8);
 FUNC_6(VAR_7);
 return ((void*)0);
}
