
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct dpp_bootstrap_info {int own; int pubkey_hash; int pubkey; int * curve; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* FUNC_0 (int *,size_t,size_t*) ;
 struct wpabuf* FUNC_1 (int ) ;
 int * VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int **,int const*,size_t) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (int,int const**,size_t*,int ) ;
 int FUNC_9 (int ,char*,int ,int ) ;
 int FUNC_10 (int ,char*,struct wpabuf*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct wpabuf*) ;
 int * FUNC_13 (struct wpabuf*) ;
 size_t FUNC_14 (struct wpabuf*) ;

char * FUNC_15(struct dpp_bootstrap_info *VAR_4, const char *VAR_5,
    const u8 *VAR_6, size_t VAR_7)
{
 unsigned char *VAR_8 = ((void*)0);
 char *VAR_9, *VAR_10;
 size_t VAR_11;
 struct wpabuf *VAR_12 = ((void*)0);
 const u8 *VAR_13[1];
 int VAR_14;

 if (!VAR_5) {
  VAR_4->curve = &VAR_3[0];
 } else {
  VAR_4->curve = FUNC_3(VAR_5);
  if (!VAR_4->curve) {
   FUNC_11(VAR_1, "DPP: Unsupported curve: %s",
       VAR_5);
   return ((void*)0);
  }
 }
 if (VAR_6)
  VAR_4->pubkey = FUNC_4(&VAR_4->curve, VAR_6, VAR_7);
 else
  VAR_4->pubkey = FUNC_2(VAR_4->curve);
 if (!VAR_4->pubkey)
  goto fail;
 VAR_4->own = 1;

 VAR_12 = FUNC_1(VAR_4->pubkey);
 if (!VAR_12)
  goto fail;
 FUNC_10(VAR_0, "DPP: Compressed public key (DER)",
   VAR_12);

 VAR_13[0] = FUNC_13(VAR_12);
 VAR_11 = FUNC_14(VAR_12);
 VAR_14 = FUNC_8(1, VAR_13, &VAR_11, VAR_4->pubkey_hash);
 if (VAR_14 < 0) {
  FUNC_11(VAR_0, "DPP: Failed to hash public key");
  goto fail;
 }
 FUNC_9(VAR_0, "DPP: Public key hash", VAR_4->pubkey_hash,
      VAR_2);

 VAR_8 = FUNC_0(FUNC_13(VAR_12), FUNC_14(VAR_12), &VAR_11);
 FUNC_12(VAR_12);
 VAR_12 = ((void*)0);
 if (!VAR_8)
  goto fail;
 VAR_9 = (char *) VAR_8;
 VAR_10 = VAR_9 + VAR_11;
 for (;;) {
  VAR_9 = FUNC_7(VAR_9, '\n');
  if (!VAR_9)
   break;
  FUNC_6(VAR_9, VAR_9 + 1, VAR_10 - VAR_9);
 }
 return (char *) VAR_8;
fail:
 FUNC_5(VAR_8);
 FUNC_12(VAR_12);
 return ((void*)0);
}
