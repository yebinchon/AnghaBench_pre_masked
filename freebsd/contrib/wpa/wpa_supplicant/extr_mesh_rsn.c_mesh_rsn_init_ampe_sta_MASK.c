
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int mesh_rsn; } ;
struct sta_info {int peer_nonce; int my_nonce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sta_info*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(struct wpa_supplicant *VAR_2, struct sta_info *VAR_3)
{
 if (FUNC_2(VAR_3->my_nonce, VAR_1) < 0) {
  FUNC_3(VAR_0, "mesh: Failed to derive random nonce");

 }
 FUNC_1(VAR_3->peer_nonce, 0, VAR_1);
 FUNC_0(VAR_2->mesh_rsn, VAR_3);
}
