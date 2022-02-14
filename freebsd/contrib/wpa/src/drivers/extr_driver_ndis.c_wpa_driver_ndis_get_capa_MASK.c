
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_ndis_data {int capa; int has_capability; } ;
struct wpa_driver_capa {int dummy; } ;


 int FUNC_0 (struct wpa_driver_capa*,int *,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct wpa_driver_capa *VAR_1)
{
 struct wpa_driver_ndis_data *VAR_2 = VAR_0;
 if (!VAR_2->has_capability)
  return -1;
 FUNC_0(VAR_1, &VAR_2->capa, sizeof(*VAR_1));
 return 0;
}
