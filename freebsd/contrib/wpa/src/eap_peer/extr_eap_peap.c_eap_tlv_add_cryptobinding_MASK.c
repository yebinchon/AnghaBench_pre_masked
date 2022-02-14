
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {int peap_version; int crypto_binding_used; int const* cmk; int binding_nonce; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int,int,int const**,size_t*,int const*) ;
 int FUNC_1 (int ,char*,int const*,size_t) ;
 int const* FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,int) ;
 int FUNC_4 (struct wpabuf*,int ,int) ;
 int FUNC_5 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_4,
         struct eap_peap_data *VAR_5,
         struct wpabuf *VAR_6)
{
 u8 *VAR_7;
 u8 VAR_8 = VAR_1;
 const u8 *VAR_9[2];
 size_t VAR_10[2];
 u16 VAR_11;


 VAR_9[0] = FUNC_2(VAR_6, 0);
 VAR_10[0] = 60;
 VAR_9[1] = &VAR_8;
 VAR_10[1] = 1;

 VAR_11 = VAR_0;
 FUNC_3(VAR_6, VAR_11);
 FUNC_3(VAR_6, 56);

 FUNC_5(VAR_6, 0);
 FUNC_5(VAR_6, VAR_5->peap_version);
 FUNC_5(VAR_6, VAR_5->peap_version);
 FUNC_5(VAR_6, 1);
 FUNC_4(VAR_6, VAR_5->binding_nonce, 32);
 VAR_7 = FUNC_2(VAR_6, 20);
 FUNC_1(VAR_2, "EAP-PEAP: Compound_MAC CMK", VAR_5->cmk, 20);
 FUNC_1(VAR_2, "EAP-PEAP: Compound_MAC data 1",
      VAR_9[0], VAR_10[0]);
 FUNC_1(VAR_2, "EAP-PEAP: Compound_MAC data 2",
      VAR_9[1], VAR_10[1]);
 if (FUNC_0(VAR_5->cmk, 20, 2, VAR_9, VAR_10, VAR_7) < 0)
  return -1;
 FUNC_1(VAR_2, "EAP-PEAP: Compound_MAC", VAR_7, VAR_3);
 VAR_5->crypto_binding_used = 1;

 return 0;
}
