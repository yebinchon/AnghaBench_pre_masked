
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int authkey; int * psk2; int * snonce; int * dh_pubkey_r; int * dh_pubkey_e; int * psk1; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int const**,size_t*,int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*,int *,int) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int * FUNC_6 (struct wpabuf*,int) ;
 int FUNC_7 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_8(struct wps_data *VAR_7, struct wpabuf *VAR_8)
{
 u8 *VAR_9;
 const u8 *VAR_10[4];
 size_t VAR_11[4];

 if (FUNC_1(VAR_7->snonce, 2 * VAR_6) < 0)
  return -1;
 FUNC_2(VAR_2, "WPS: R-S1", VAR_7->snonce, VAR_6);
 FUNC_2(VAR_2, "WPS: R-S2",
      VAR_7->snonce + VAR_6, VAR_6);

 if (VAR_7->dh_pubkey_e == ((void*)0) || VAR_7->dh_pubkey_r == ((void*)0)) {
  FUNC_3(VAR_2, "WPS: DH public keys not available for "
      "R-Hash derivation");
  return -1;
 }

 FUNC_3(VAR_2, "WPS:  * R-Hash1");
 FUNC_7(VAR_8, VAR_0);
 FUNC_7(VAR_8, VAR_3);
 VAR_9 = FUNC_6(VAR_8, VAR_3);

 VAR_10[0] = VAR_7->snonce;
 VAR_11[0] = VAR_6;
 VAR_10[1] = VAR_7->psk1;
 VAR_11[1] = VAR_5;
 VAR_10[2] = FUNC_4(VAR_7->dh_pubkey_e);
 VAR_11[2] = FUNC_5(VAR_7->dh_pubkey_e);
 VAR_10[3] = FUNC_4(VAR_7->dh_pubkey_r);
 VAR_11[3] = FUNC_5(VAR_7->dh_pubkey_r);
 FUNC_0(VAR_7->authkey, VAR_4, 4, VAR_10, VAR_11, VAR_9);
 FUNC_2(VAR_2, "WPS: R-Hash1", VAR_9, VAR_3);

 FUNC_3(VAR_2, "WPS:  * R-Hash2");
 FUNC_7(VAR_8, VAR_1);
 FUNC_7(VAR_8, VAR_3);
 VAR_9 = FUNC_6(VAR_8, VAR_3);

 VAR_10[0] = VAR_7->snonce + VAR_6;
 VAR_10[1] = VAR_7->psk2;
 FUNC_0(VAR_7->authkey, VAR_4, 4, VAR_10, VAR_11, VAR_9);
 FUNC_2(VAR_2, "WPS: R-Hash2", VAR_9, VAR_3);

 return 0;
}
