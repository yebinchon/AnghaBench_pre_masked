
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int token; } ;
struct wpa_supplicant {int bssid; int own_addr; int assoc_freq; TYPE_1__ rrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 struct wpabuf* FUNC_2 (size_t) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,int const*,size_t) ;
 int FUNC_7 (struct wpabuf*,int ) ;

__attribute__((used)) static void FUNC_8(struct wpa_supplicant *VAR_3,
       const u8 *VAR_4, size_t VAR_5)
{
 struct wpabuf *VAR_6 = FUNC_2(VAR_5 + 3);

 if (!VAR_6)
  return;

 FUNC_7(VAR_6, VAR_1);
 FUNC_7(VAR_6, VAR_2);
 FUNC_7(VAR_6, VAR_3->rrm.token);

 FUNC_6(VAR_6, VAR_4, VAR_5);

 if (FUNC_0(VAR_3, VAR_3->assoc_freq, 0, VAR_3->bssid,
    VAR_3->own_addr, VAR_3->bssid,
    FUNC_4(VAR_6), FUNC_5(VAR_6), 0)) {
  FUNC_1(VAR_0,
      "RRM: Radio measurement report failed: Sending Action frame failed");
 }

 FUNC_3(VAR_6);
}
