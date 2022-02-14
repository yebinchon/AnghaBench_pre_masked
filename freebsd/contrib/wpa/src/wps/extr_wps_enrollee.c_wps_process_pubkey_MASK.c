
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct wps_data {int * dh_pubkey_r; int config_error; int const* peer_pubkey_hash; scalar_t__ peer_pubkey_hash_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int const*,int const*,size_t) ;
 int FUNC_1 (int,int const**,size_t*,int const*) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int const*,size_t) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct wps_data*) ;

__attribute__((used)) static int FUNC_7(struct wps_data *VAR_5, const u8 *VAR_6,
         size_t VAR_7)
{
 if (VAR_6 == ((void*)0) || VAR_7 == 0) {
  FUNC_3(VAR_0, "WPS: No Public Key received");
  return -1;
 }

 if (VAR_5->peer_pubkey_hash_set) {
  u8 VAR_8[VAR_3];
  FUNC_1(1, &VAR_6, &VAR_7, VAR_8);
  if (FUNC_0(VAR_8, VAR_5->peer_pubkey_hash,
        VAR_4) != 0) {
   FUNC_3(VAR_1, "WPS: Public Key hash mismatch");
   FUNC_2(VAR_0, "WPS: Received public key",
        VAR_6, VAR_7);
   FUNC_2(VAR_0, "WPS: Calculated public key "
        "hash", VAR_8, VAR_4);
   FUNC_2(VAR_0, "WPS: Expected public key hash",
        VAR_5->peer_pubkey_hash,
        VAR_4);
   VAR_5->config_error = VAR_2;
   return -1;
  }
 }

 FUNC_5(VAR_5->dh_pubkey_r);
 VAR_5->dh_pubkey_r = FUNC_4(VAR_6, VAR_7);
 if (VAR_5->dh_pubkey_r == ((void*)0))
  return -1;

 if (FUNC_6(VAR_5) < 0)
  return -1;

 return 0;
}
