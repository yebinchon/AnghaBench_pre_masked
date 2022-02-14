
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int dst_addr; int token; int rrm_used; } ;
struct wpa_supplicant {scalar_t__ wpa_state; TYPE_1__ rrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*) ;
 struct wpabuf* FUNC_3 (struct wpa_supplicant*,int const*,size_t) ;
 int FUNC_4 (struct wpa_supplicant*,struct wpabuf*) ;

void FUNC_5(struct wpa_supplicant *VAR_3,
            const u8 *VAR_4, const u8 *VAR_5,
            const u8 *VAR_6, size_t VAR_7)
{
 struct wpabuf *VAR_8;

 if (VAR_3->wpa_state != VAR_2) {
  FUNC_1(VAR_1,
      "RRM: Ignoring radio measurement request: Not associated");
  return;
 }

 if (!VAR_3->rrm.rrm_used) {
  FUNC_1(VAR_1,
      "RRM: Ignoring radio measurement request: Not RRM network");
  return;
 }

 if (VAR_7 < 3) {
  FUNC_1(VAR_1,
      "RRM: Ignoring too short radio measurement request");
  return;
 }

 VAR_3->rrm.token = *VAR_6;
 FUNC_0(VAR_3->rrm.dst_addr, VAR_5, VAR_0);



 VAR_8 = FUNC_3(VAR_3, VAR_6 + 3, VAR_7 - 3);
 if (!VAR_8)
  return;

 FUNC_4(VAR_3, VAR_8);
 FUNC_2(VAR_8);
}
