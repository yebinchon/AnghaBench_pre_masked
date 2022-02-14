
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct dpp_bootstrap_info {int pubkey_hash; int pubkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (int ) ;
 int FUNC_1 (int,int const**,size_t*,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,char*,struct wpabuf*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpabuf*) ;
 int * FUNC_6 (struct wpabuf*) ;
 size_t FUNC_7 (struct wpabuf*) ;

int FUNC_8(struct dpp_bootstrap_info *VAR_2)
{
 struct wpabuf *VAR_3;
 int VAR_4;
 const u8 *VAR_5[1];
 size_t VAR_6[1];

 VAR_3 = FUNC_0(VAR_2->pubkey);
 if (!VAR_3)
  return -1;
 FUNC_3(VAR_0, "DPP: Compressed public key (DER)",
   VAR_3);

 VAR_5[0] = FUNC_6(VAR_3);
 VAR_6[0] = FUNC_7(VAR_3);
 VAR_4 = FUNC_1(1, VAR_5, VAR_6, VAR_2->pubkey_hash);
 if (VAR_4 < 0)
  FUNC_4(VAR_0, "DPP: Failed to hash public key");
 else
  FUNC_2(VAR_0, "DPP: Public key hash", VAR_2->pubkey_hash,
       VAR_1);
 FUNC_5(VAR_3);
 return VAR_4;
}
