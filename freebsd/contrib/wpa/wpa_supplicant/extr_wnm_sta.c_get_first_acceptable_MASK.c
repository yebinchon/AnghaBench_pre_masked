
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {unsigned int wnm_num_neighbor_report; struct neighbor_report* wnm_neighbor_report_elements; } ;
struct wpa_bss {int dummy; } ;
struct neighbor_report {int bssid; scalar_t__ acceptable; } ;


 struct wpa_bss* FUNC_0 (struct wpa_supplicant*,int ) ;

__attribute__((used)) static struct wpa_bss * FUNC_1(struct wpa_supplicant *VAR_0)
{
 unsigned int VAR_1;
 struct neighbor_report *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->wnm_num_neighbor_report; VAR_1++) {
  VAR_2 = &VAR_0->wnm_neighbor_report_elements[VAR_1];
  if (VAR_2->acceptable)
   return FUNC_0(VAR_0, VAR_2->bssid);
 }

 return ((void*)0);
}
