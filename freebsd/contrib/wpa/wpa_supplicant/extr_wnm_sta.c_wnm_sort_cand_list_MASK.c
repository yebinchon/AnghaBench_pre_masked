
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int wnm_num_neighbor_report; int wnm_neighbor_report_elements; } ;
struct neighbor_report {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct wpa_supplicant *VAR_1)
{
 if (!VAR_1->wnm_neighbor_report_elements)
  return;
 FUNC_0(VAR_1->wnm_neighbor_report_elements,
       VAR_1->wnm_num_neighbor_report, sizeof(struct neighbor_report),
       VAR_0);
}
