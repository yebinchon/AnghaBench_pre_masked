
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_bss_anqp {int users; int anqp_elems; } ;


 int FUNC_0 (int *) ;
 struct wpa_bss_anqp* FUNC_1 (int) ;

struct wpa_bss_anqp * FUNC_2(void)
{
 struct wpa_bss_anqp *VAR_0;
 VAR_0 = FUNC_1(sizeof(*VAR_0));
 if (VAR_0 == ((void*)0))
  return ((void*)0);



 VAR_0->users = 1;
 return VAR_0;
}
