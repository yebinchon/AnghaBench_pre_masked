
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ last_tspecs_count; int * last_tspecs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct wpa_supplicant *VAR_1)
{
 if (VAR_1->last_tspecs) {
  FUNC_1(VAR_0, "WMM AC: Clear saved tspecs");
  FUNC_0(VAR_1->last_tspecs);
  VAR_1->last_tspecs = ((void*)0);
  VAR_1->last_tspecs_count = 0;
 }
}
