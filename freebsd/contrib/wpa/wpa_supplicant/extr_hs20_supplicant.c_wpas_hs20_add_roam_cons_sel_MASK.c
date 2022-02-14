
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_ssid {scalar_t__ roaming_consortium_selection_len; int roaming_consortium_selection; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wpabuf*,int ) ;
 int FUNC_1 (struct wpabuf*,int ,scalar_t__) ;
 int FUNC_2 (struct wpabuf*,scalar_t__) ;

void FUNC_3(struct wpabuf *VAR_3,
     const struct wpa_ssid *VAR_4)
{
 if (!VAR_4->roaming_consortium_selection ||
     !VAR_4->roaming_consortium_selection_len)
  return;

 FUNC_2(VAR_3, VAR_2);
 FUNC_2(VAR_3, 4 + VAR_4->roaming_consortium_selection_len);
 FUNC_0(VAR_3, VAR_1);
 FUNC_2(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_4->roaming_consortium_selection,
   VAR_4->roaming_consortium_selection_len);
}
