
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct wpa_supplicant {int coloc_intf_auto_report; struct wpabuf* coloc_intf_elems; scalar_t__ coloc_intf_dialog_token; TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ coloc_intf_reporting; } ;


 int FUNC_0 (struct wpa_supplicant*,scalar_t__,struct wpabuf*) ;
 int FUNC_1 (struct wpabuf*) ;
 scalar_t__ FUNC_2 (struct wpabuf*) ;

void FUNC_3(struct wpa_supplicant *VAR_0,
         struct wpabuf *VAR_1)
{
 FUNC_1(VAR_0->coloc_intf_elems);
 if (VAR_1 && FUNC_2(VAR_1) == 0) {
  FUNC_1(VAR_1);
  VAR_1 = ((void*)0);
 }
 VAR_0->coloc_intf_elems = VAR_1;

 if (VAR_0->conf->coloc_intf_reporting && VAR_0->coloc_intf_elems &&
     VAR_0->coloc_intf_dialog_token &&
     (VAR_0->coloc_intf_auto_report == 1 ||
      VAR_0->coloc_intf_auto_report == 3)) {



  FUNC_0(VAR_0,
        VAR_0->coloc_intf_dialog_token,
        VAR_0->coloc_intf_elems);
 }
}
