
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {scalar_t__ mac_addr; int * wps_state; scalar_t__ primary_dev_type; } ;
struct wps_er_ap {int mac_addr; int wps_state; int pri_dev_type; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wps_er_ap*) ;
 scalar_t__ FUNC_3 (struct wpabuf*,struct wps_parse_attr*) ;

__attribute__((used)) static void FUNC_4(struct wps_er_ap *VAR_2, struct wpabuf *VAR_3)
{
 struct wps_parse_attr VAR_4;

 if (FUNC_3(VAR_3, &VAR_4) < 0) {
  FUNC_1(VAR_1, "WPS ER: Failed to parse M1");
  return;
 }
 if (VAR_4.primary_dev_type)
  FUNC_0(VAR_2->pri_dev_type, VAR_4.primary_dev_type, 8);
 if (VAR_4.wps_state)
  VAR_2->wps_state = *VAR_4.wps_state;
 if (VAR_4.mac_addr)
  FUNC_0(VAR_2->mac_addr, VAR_4.mac_addr, VAR_0);

 FUNC_2(VAR_2);
}
