
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct p2p_data {int dummy; } ;
struct TYPE_2__ {struct p2p_data* p2p; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;
 int FUNC_1 (struct p2p_data*,int *) ;

int FUNC_2(struct wpa_supplicant *VAR_1, const char *VAR_2)
{
 u8 VAR_3[VAR_0];
 struct p2p_data *VAR_4 = VAR_1->global->p2p;

 if (VAR_4 == ((void*)0))
  return -1;

 if (FUNC_0(VAR_2, VAR_3))
  return -1;

 return FUNC_1(VAR_4, VAR_3);
}
