
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct wpabuf {int dummy; } ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int const*,int const*,int) ;
 int FUNC_2 (int,int const**,size_t*,int const*) ;
 int FUNC_3 (int ,char*,int const*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpabuf*) ;
 int const* FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_8(EVP_PKEY *VAR_2, struct wpabuf *VAR_3)
{
 struct wpabuf *VAR_4;
 int VAR_5;
 u8 VAR_6[VAR_1];
 const u8 *VAR_7[1];
 size_t VAR_8[1];

 if (FUNC_7(VAR_3) != VAR_1)
  return -1;
 VAR_4 = FUNC_0(VAR_2, 1);
 if (!VAR_4)
  return -1;
 VAR_7[0] = FUNC_6(VAR_4);
 VAR_8[0] = FUNC_7(VAR_4);
 FUNC_3(VAR_0, "DPP: Uncompressed public key",
      VAR_7[0], VAR_8[0]);
 VAR_5 = FUNC_2(1, VAR_7, VAR_8, VAR_6);
 FUNC_5(VAR_4);
 if (VAR_5 < 0)
  return -1;
 if (FUNC_1(VAR_6, FUNC_6(VAR_3), VAR_1) != 0) {
  FUNC_4(VAR_0,
      "DPP: Received hash value does not match calculated public key hash value");
  FUNC_3(VAR_0, "DPP: Calculated hash",
       VAR_6, VAR_1);
  return -1;
 }
 return 0;
}
