
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct dpp_curve_params {char* jwk_crv; int prime_len; } ;
typedef int EVP_PKEY ;


 scalar_t__ FUNC_0 (int const*,int ,int *,int ) ;
 struct wpabuf* FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wpabuf*) ;
 int * FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*,char const*) ;

__attribute__((used)) static int FUNC_6(struct wpabuf *VAR_0, const char *VAR_1, EVP_PKEY *VAR_2,
    const char *VAR_3, const struct dpp_curve_params *VAR_4)
{
 struct wpabuf *VAR_5;
 const u8 *VAR_6;
 char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = -1;

 VAR_5 = FUNC_1(VAR_2, 0);
 if (!VAR_5)
  goto fail;
 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = (char *) FUNC_0(VAR_6, VAR_4->prime_len, ((void*)0), 0);
 VAR_6 += VAR_4->prime_len;
 VAR_8 = (char *) FUNC_0(VAR_6, VAR_4->prime_len, ((void*)0), 0);
 if (!VAR_7 || !VAR_8)
  goto fail;

 FUNC_5(VAR_0, "\"");
 FUNC_5(VAR_0, VAR_1);
 FUNC_5(VAR_0, "\":{\"kty\":\"EC\",\"crv\":\"");
 FUNC_5(VAR_0, VAR_4->jwk_crv);
 FUNC_5(VAR_0, "\",\"x\":\"");
 FUNC_5(VAR_0, VAR_7);
 FUNC_5(VAR_0, "\",\"y\":\"");
 FUNC_5(VAR_0, VAR_8);
 if (VAR_3) {
  FUNC_5(VAR_0, "\",\"kid\":\"");
  FUNC_5(VAR_0, VAR_3);
 }
 FUNC_5(VAR_0, "\"}");
 VAR_9 = 0;
fail:
 FUNC_3(VAR_5);
 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 return VAR_9;
}
