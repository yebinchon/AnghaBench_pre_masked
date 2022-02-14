
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_interface_info {struct wpa_interface_info* desc; struct wpa_interface_info* ifname; struct wpa_interface_info* next; } ;


 int FUNC_0 (struct wpa_interface_info*) ;

__attribute__((used)) static void FUNC_1(struct wpa_interface_info *VAR_0)
{
 struct wpa_interface_info *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;

  FUNC_0(VAR_1->ifname);
  FUNC_0(VAR_1->desc);
  FUNC_0(VAR_1);
 }
}
