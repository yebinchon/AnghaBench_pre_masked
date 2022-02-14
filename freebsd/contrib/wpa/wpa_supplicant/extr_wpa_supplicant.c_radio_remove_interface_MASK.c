
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct wpa_radio* radio; int radio_list; int ifname; } ;
struct wpa_radio {int name; int ifaces; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct wpa_radio*,int *) ;
 int FUNC_3 (struct wpa_radio*) ;
 int FUNC_4 (struct wpa_supplicant*,int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,int ,...) ;

__attribute__((used)) static void FUNC_6(struct wpa_supplicant *VAR_2)
{
 struct wpa_radio *VAR_3 = VAR_2->radio;

 if (!VAR_3)
  return;

 FUNC_5(VAR_0, "Remove interface %s from radio %s",
     VAR_2->ifname, VAR_3->name);
 FUNC_0(&VAR_2->radio_list);
 FUNC_4(VAR_2, ((void*)0), 0);
 VAR_2->radio = ((void*)0);
 if (!FUNC_1(&VAR_3->ifaces))
  return;

 FUNC_5(VAR_0, "Remove radio %s", VAR_3->name);
 FUNC_2(VAR_1, VAR_3, ((void*)0));
 FUNC_3(VAR_3);
}
