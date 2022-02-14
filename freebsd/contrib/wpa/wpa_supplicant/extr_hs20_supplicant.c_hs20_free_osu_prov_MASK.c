
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {size_t osu_prov_count; int * osu_prov; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct wpa_supplicant *VAR_0)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->osu_prov_count; VAR_1++)
  FUNC_0(&VAR_0->osu_prov[VAR_1]);
 FUNC_1(VAR_0->osu_prov);
 VAR_0->osu_prov = ((void*)0);
 VAR_0->osu_prov_count = 0;
}
