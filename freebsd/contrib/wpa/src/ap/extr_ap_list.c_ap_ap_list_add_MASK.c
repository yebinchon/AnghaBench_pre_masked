
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {struct ap_info* ap_list; } ;
struct ap_info {struct ap_info* next; struct ap_info* prev; } ;



__attribute__((used)) static void FUNC_0(struct hostapd_iface *VAR_0, struct ap_info *VAR_1)
{
 if (VAR_0->ap_list) {
  VAR_1->prev = VAR_0->ap_list->prev;
  VAR_0->ap_list->prev = VAR_1;
 } else
  VAR_1->prev = VAR_1;
 VAR_1->next = VAR_0->ap_list;
 VAR_0->ap_list = VAR_1;
}
