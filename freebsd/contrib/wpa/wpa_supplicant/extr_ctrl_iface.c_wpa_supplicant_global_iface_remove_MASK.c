
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {unsigned int added_vif; } ;
struct wpa_global {int ifaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 struct wpa_supplicant* FUNC_2 (struct wpa_global*,char*) ;
 int FUNC_3 (struct wpa_global*,struct wpa_supplicant*,int ) ;

__attribute__((used)) static int FUNC_4(struct wpa_global *VAR_2,
           char *VAR_3)
{
 struct wpa_supplicant *VAR_4;
 int VAR_5;
 unsigned int VAR_6;

 FUNC_1(VAR_0, "CTRL_IFACE GLOBAL INTERFACE_REMOVE '%s'", VAR_3);

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  return -1;
 VAR_6 = VAR_4->added_vif;
 VAR_5 = FUNC_3(VAR_2, VAR_4, 0);
 if (!VAR_5 && VAR_6) {
  FUNC_1(VAR_0, "CTRL_IFACE deleting the interface '%s'",
      VAR_3);
  VAR_5 = FUNC_0(VAR_2->ifaces, VAR_1, VAR_3);
 }
 return VAR_5;
}
