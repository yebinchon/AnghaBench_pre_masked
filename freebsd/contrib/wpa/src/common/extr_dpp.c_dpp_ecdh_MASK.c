
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int buf ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,size_t*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int *,size_t) ;
 int FUNC_10 (int,char*,int *,size_t) ;
 int FUNC_11 (int,char*,int) ;

__attribute__((used)) static int FUNC_12(EVP_PKEY *VAR_3, EVP_PKEY *VAR_4,
      u8 *VAR_5, size_t *VAR_6)
{
 EVP_PKEY_CTX *VAR_7;
 int VAR_8 = -1;

 FUNC_0();
 *VAR_6 = 0;

 VAR_7 = FUNC_4(VAR_3, ((void*)0));
 if (!VAR_7) {
  FUNC_11(VAR_2, "DPP: EVP_PKEY_CTX_new failed: %s",
      FUNC_1(FUNC_2(), ((void*)0)));
  return -1;
 }

 if (FUNC_6(VAR_7) != 1) {
  FUNC_11(VAR_2, "DPP: EVP_PKEY_derive_init failed: %s",
      FUNC_1(FUNC_2(), ((void*)0)));
  goto fail;
 }

 if (FUNC_7(VAR_7, VAR_4) != 1) {
  FUNC_11(VAR_2,
      "DPP: EVP_PKEY_derive_set_peet failed: %s",
      FUNC_1(FUNC_2(), ((void*)0)));
  goto fail;
 }

 if (FUNC_5(VAR_7, ((void*)0), VAR_6) != 1) {
  FUNC_11(VAR_2, "DPP: EVP_PKEY_derive(NULL) failed: %s",
      FUNC_1(FUNC_2(), ((void*)0)));
  goto fail;
 }

 if (*VAR_6 > VAR_0) {
  u8 VAR_9[200];
  int VAR_10 = *VAR_6 > 200 ? VAR_2 : VAR_1;
  FUNC_11(VAR_10,
      "DPP: Unexpected secret_len=%d from EVP_PKEY_derive()",
      (int) *VAR_6);
  if (*VAR_6 > 200)
   goto fail;
  if (FUNC_5(VAR_7, VAR_9, VAR_6) != 1) {
   FUNC_11(VAR_2, "DPP: EVP_PKEY_derive failed: %s",
       FUNC_1(FUNC_2(), ((void*)0)));
   goto fail;
  }
  if (*VAR_6 > VAR_0) {
   FUNC_11(VAR_2,
       "DPP: Unexpected secret_len=%d from EVP_PKEY_derive()",
       (int) *VAR_6);
   goto fail;
  }
  FUNC_10(VAR_1, "DPP: Unexpected secret_len change",
    VAR_9, *VAR_6);
  FUNC_9(VAR_5, VAR_9, *VAR_6);
  FUNC_8(VAR_9, sizeof(VAR_9));
  goto done;
 }

 if (FUNC_5(VAR_7, VAR_5, VAR_6) != 1) {
  FUNC_11(VAR_2, "DPP: EVP_PKEY_derive failed: %s",
      FUNC_1(FUNC_2(), ((void*)0)));
  goto fail;
 }

done:
 VAR_8 = 0;

fail:
 FUNC_3(VAR_7);
 return VAR_8;
}
