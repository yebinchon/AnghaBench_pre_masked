
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct gas_query {int pending; struct wpa_supplicant* wpa_s; } ;


 int FUNC_0 (int *) ;
 struct gas_query* FUNC_1 (int) ;

struct gas_query * FUNC_2(struct wpa_supplicant *VAR_0)
{
 struct gas_query *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_1->wpa_s = VAR_0;
 FUNC_0(&VAR_1->pending);

 return VAR_1;
}
