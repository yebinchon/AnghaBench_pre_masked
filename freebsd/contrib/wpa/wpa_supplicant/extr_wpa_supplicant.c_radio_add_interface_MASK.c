
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int radio_list; int ifname; struct wpa_supplicant* next; struct wpa_radio* radio; TYPE_1__* global; } ;
struct wpa_radio {int ifaces; int work; int name; } ;
struct TYPE_2__ {struct wpa_supplicant* ifaces; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ,char const*,int) ;
 struct wpa_radio* FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ,char const*) ;

__attribute__((used)) static struct wpa_radio * FUNC_6(struct wpa_supplicant *VAR_1,
           const char *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1->global->ifaces;
 struct wpa_radio *VAR_4;

 while (VAR_2 && VAR_3) {
  VAR_4 = VAR_3->radio;
  if (VAR_4 && FUNC_2(VAR_2, VAR_4->name) == 0) {
   FUNC_5(VAR_0, "Add interface %s to existing radio %s",
       VAR_1->ifname, VAR_2);
   FUNC_0(&VAR_4->ifaces, &VAR_1->radio_list);
   return VAR_4;
  }

  VAR_3 = VAR_3->next;
 }

 FUNC_5(VAR_0, "Add interface %s to a new radio %s",
     VAR_1->ifname, VAR_2 ? VAR_2 : "N/A");
 VAR_4 = FUNC_4(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 if (VAR_2)
  FUNC_3(VAR_4->name, VAR_2, sizeof(VAR_4->name));
 FUNC_1(&VAR_4->ifaces);
 FUNC_1(&VAR_4->work);
 FUNC_0(&VAR_4->ifaces, &VAR_1->radio_list);

 return VAR_4;
}
