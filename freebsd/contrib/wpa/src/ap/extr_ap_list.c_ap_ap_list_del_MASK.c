
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {struct ap_info* ap_list; } ;
struct ap_info {TYPE_1__* prev; struct ap_info* next; } ;
struct TYPE_2__ {struct ap_info* next; } ;



__attribute__((used)) static void FUNC_0(struct hostapd_iface *VAR_0, struct ap_info *VAR_1)
{
 if (VAR_0->ap_list == VAR_1)
  VAR_0->ap_list = VAR_1->next;
 else
  VAR_1->prev->next = VAR_1->next;

 if (VAR_1->next)
  VAR_1->next->prev = VAR_1->prev;
 else if (VAR_0->ap_list)
  VAR_0->ap_list->prev = VAR_1->prev;
}
