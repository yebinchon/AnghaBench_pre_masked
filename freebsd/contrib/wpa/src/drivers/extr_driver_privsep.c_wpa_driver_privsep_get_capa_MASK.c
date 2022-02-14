
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_privsep_data {int dummy; } ;
struct wpa_driver_capa {scalar_t__ extended_capa_len; int * extended_capa_mask; int * extended_capa; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_driver_privsep_data*,int ,int *,int ,struct wpa_driver_capa*,size_t*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1,
           struct wpa_driver_capa *VAR_2)
{
 struct wpa_driver_privsep_data *VAR_3 = VAR_1;
 int VAR_4;
 size_t VAR_5 = sizeof(*VAR_2);

 VAR_4 = FUNC_0(VAR_3, VAR_0, ((void*)0), 0, VAR_2, &VAR_5);
 if (VAR_4 < 0 || VAR_5 != sizeof(*VAR_2))
  return -1;

 VAR_2->extended_capa = ((void*)0);
 VAR_2->extended_capa_mask = ((void*)0);
 VAR_2->extended_capa_len = 0;
 return 0;
}
