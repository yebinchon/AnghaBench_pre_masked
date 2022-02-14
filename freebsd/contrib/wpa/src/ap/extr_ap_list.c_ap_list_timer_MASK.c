
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct os_reltime {int dummy; } ;
struct hostapd_iface {scalar_t__ olbc_ht; scalar_t__ olbc; struct ap_info* ap_list; TYPE_1__* conf; } ;
struct ap_info {struct ap_info* next; int ht_support; int last_beacon; struct ap_info* prev; } ;
struct TYPE_2__ {int ap_table_expiration_time; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_iface*,struct ap_info*) ;
 scalar_t__ FUNC_1 (struct hostapd_iface*,struct ap_info*) ;
 int FUNC_2 (struct hostapd_iface*) ;
 int FUNC_3 (struct hostapd_iface*) ;
 int FUNC_4 (struct os_reltime*) ;
 int FUNC_5 (struct os_reltime*,int *,int ) ;
 int FUNC_6 (int ,char*) ;

void FUNC_7(struct hostapd_iface *VAR_1)
{
 struct os_reltime VAR_2;
 struct ap_info *VAR_3;
 int VAR_4 = 0;

 if (!VAR_1->ap_list)
  return;

 FUNC_4(&VAR_2);

 while (VAR_1->ap_list) {
  VAR_3 = VAR_1->ap_list->prev;
  if (!FUNC_5(&VAR_2, &VAR_3->last_beacon,
     VAR_1->conf->ap_table_expiration_time))
   break;

  FUNC_0(VAR_1, VAR_3);
 }

 if (VAR_1->olbc || VAR_1->olbc_ht) {
  int VAR_5 = 0;
  int VAR_6 = 0;

  VAR_3 = VAR_1->ap_list;
  while (VAR_3 && (VAR_5 == 0 || VAR_6 == 0)) {
   if (FUNC_1(VAR_1, VAR_3))
    VAR_5 = 1;
   if (!VAR_3->ht_support)
    VAR_6 = 1;
   VAR_3 = VAR_3->next;
  }
  if (!VAR_5 && VAR_1->olbc) {
   FUNC_6(VAR_0, "OLBC not detected anymore");
   VAR_1->olbc = 0;
   VAR_4++;
  }
 }

 if (VAR_4)
  FUNC_3(VAR_1);
}
