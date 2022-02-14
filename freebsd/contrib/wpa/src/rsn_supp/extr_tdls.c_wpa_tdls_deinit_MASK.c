
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {int * l2_tdls; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct wpa_sm*) ;

void FUNC_2(struct wpa_sm *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->l2_tdls)
  FUNC_0(VAR_0->l2_tdls);
 VAR_0->l2_tdls = ((void*)0);

 FUNC_1(VAR_0);
}
