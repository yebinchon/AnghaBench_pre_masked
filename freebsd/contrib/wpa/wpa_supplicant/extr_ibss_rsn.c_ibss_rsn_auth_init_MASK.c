
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ibss_rsn_peer {int * auth; int addr; } ;
struct ibss_rsn {int auth_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int *,int,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct ibss_rsn *VAR_3,
         struct ibss_rsn_peer *VAR_4)
{
 VAR_4->auth = FUNC_2(VAR_3->auth_group, VAR_4->addr, ((void*)0));
 if (VAR_4->auth == ((void*)0)) {
  FUNC_3(VAR_0, "AUTH: wpa_auth_sta_init() failed");
  return -1;
 }


 if (FUNC_4(VAR_3->auth_group, VAR_4->auth, 0,
    (u8 *) "\x30\x14\x01\x00"
    "\x00\x0f\xac\x04"
    "\x01\x00\x00\x0f\xac\x04"
    "\x01\x00\x00\x0f\xac\x02"
    "\x00\x00", 22, ((void*)0), 0, ((void*)0), 0) !=
     VAR_2) {
  FUNC_3(VAR_0, "AUTH: wpa_validate_wpa_ie() failed");
  return -1;
 }

 if (FUNC_0(VAR_4->auth, VAR_1))
  return -1;

 if (FUNC_1(VAR_3->auth_group, VAR_4->auth))
  return -1;

 return 0;
}
