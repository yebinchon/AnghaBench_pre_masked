
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int * dh_pubkey_e; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct wps_data *VAR_1, const u8 *VAR_2,
         size_t VAR_3)
{
 if (VAR_2 == ((void*)0) || VAR_3 == 0) {
  FUNC_0(VAR_0, "WPS: No Public Key received");
  return -1;
 }

 FUNC_2(VAR_1->dh_pubkey_e);
 VAR_1->dh_pubkey_e = FUNC_1(VAR_2, VAR_3);
 if (VAR_1->dh_pubkey_e == ((void*)0))
  return -1;

 return 0;
}
