
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {unsigned int wnm_num_neighbor_report; TYPE_1__* wnm_neighbor_report_elements; } ;
struct TYPE_2__ {scalar_t__ acceptable; } ;



__attribute__((used)) static void FUNC_0(struct wpa_supplicant *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->wnm_num_neighbor_report; VAR_1++)
  VAR_0->wnm_neighbor_report_elements[VAR_1].acceptable = 0;
}
