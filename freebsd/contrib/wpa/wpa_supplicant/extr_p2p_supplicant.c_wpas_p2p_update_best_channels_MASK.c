
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; } ;
struct p2p_data {int dummy; } ;
struct TYPE_2__ {struct p2p_data* p2p; } ;


 int FUNC_0 (struct p2p_data*,int,int,int) ;

void FUNC_1(struct wpa_supplicant *VAR_0,
       int VAR_1, int VAR_2, int VAR_3)
{
 struct p2p_data *VAR_4 = VAR_0->global->p2p;
 if (VAR_4 == ((void*)0))
  return;
 FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
