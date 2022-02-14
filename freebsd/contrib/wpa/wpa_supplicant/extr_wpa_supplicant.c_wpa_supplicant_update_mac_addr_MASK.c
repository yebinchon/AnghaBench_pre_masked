
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int drv_flags; int own_addr; int wpa; int * l2; int ifname; int p2p_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int *,int ,int ,struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int const*,int ) ;
 int FUNC_5 (struct wpa_supplicant*,int ,char*) ;
 int * FUNC_6 (struct wpa_supplicant*) ;
 int FUNC_7 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int VAR_7 ;

int FUNC_9(struct wpa_supplicant *VAR_8)
{
 if ((!VAR_8->p2p_mgmt ||
      !(VAR_8->drv_flags & VAR_5)) &&
     !(VAR_8->drv_flags & VAR_6)) {
  FUNC_0(VAR_8->l2);
  VAR_8->l2 = FUNC_2(VAR_8->ifname,
        FUNC_6(VAR_8),
        VAR_1,
        VAR_7, VAR_8, 0);
  if (VAR_8->l2 == ((void*)0))
   return -1;

  if (FUNC_3(VAR_8->l2,
      VAR_2))
   FUNC_5(VAR_8, VAR_3,
    "Failed to attach pkt_type filter");
 } else {
  const u8 *VAR_9 = FUNC_6(VAR_8);
  if (VAR_9)
   FUNC_4(VAR_8->own_addr, VAR_9, VAR_0);
 }

 if (VAR_8->l2 && FUNC_1(VAR_8->l2, VAR_8->own_addr)) {
  FUNC_7(VAR_8, VAR_4, "Failed to get own L2 address");
  return -1;
 }

 FUNC_8(VAR_8->wpa, VAR_8->own_addr);

 return 0;
}
