
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct wpa_supplicant {int dummy; } ;
struct sta_info {int plink_state; scalar_t__ peer_aid; scalar_t__ peer_lid; scalar_t__ my_lid; } ;
typedef int llid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_1,
          struct sta_info *VAR_2)
{
 u16 VAR_3;

 do {
  if (FUNC_1((u8 *) &VAR_3, sizeof(VAR_3)) < 0)
   VAR_3 = 0;
 } while (!VAR_3 || FUNC_0(VAR_1, VAR_3));

 VAR_2->my_lid = VAR_3;
 VAR_2->peer_lid = 0;
 VAR_2->peer_aid = 0;





 VAR_2->plink_state = VAR_0;
}
