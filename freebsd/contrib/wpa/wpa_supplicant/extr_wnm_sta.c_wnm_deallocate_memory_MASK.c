
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int wnm_num_neighbor_report; int * coloc_intf_elems; TYPE_1__* wnm_neighbor_report_elements; } ;
struct TYPE_2__ {struct TYPE_2__* mul_bssid; struct TYPE_2__* meas_pilot; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct wpa_supplicant *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->wnm_num_neighbor_report; VAR_1++) {
  FUNC_0(VAR_0->wnm_neighbor_report_elements[VAR_1].meas_pilot);
  FUNC_0(VAR_0->wnm_neighbor_report_elements[VAR_1].mul_bssid);
 }

 VAR_0->wnm_num_neighbor_report = 0;
 FUNC_0(VAR_0->wnm_neighbor_report_elements);
 VAR_0->wnm_neighbor_report_elements = ((void*)0);

 FUNC_1(VAR_0->coloc_intf_elems);
 VAR_0->coloc_intf_elems = ((void*)0);
}
