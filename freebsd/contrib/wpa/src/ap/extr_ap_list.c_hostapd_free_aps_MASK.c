
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {struct ap_info* ap_list; } ;
struct ap_info {struct ap_info* next; } ;


 int FUNC_0 (struct hostapd_iface*,struct ap_info*) ;

__attribute__((used)) static void FUNC_1(struct hostapd_iface *VAR_0)
{
 struct ap_info *VAR_1, *VAR_2;

 VAR_1 = VAR_0->ap_list;

 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_0, VAR_2);
 }

 VAR_0->ap_list = ((void*)0);
}
