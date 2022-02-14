
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_params {int wpa_debug_level; } ;
struct wpa_interface {int wpa_debug_level; } ;
struct wpa_global {int dummy; } ;
typedef int params ;
typedef int iface ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_params*,int ,int) ;
 int * FUNC_1 (struct wpa_global*,struct wpa_params*,int *) ;
 int FUNC_2 (struct wpa_global*) ;
 struct wpa_global* FUNC_3 (struct wpa_params*) ;
 int FUNC_4 (struct wpa_global*) ;

int FUNC_5(int VAR_1, char *VAR_2[])
{
 struct wpa_interface VAR_3;
 int VAR_4 = 0;
 struct wpa_params VAR_5;
 struct wpa_global *VAR_6;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.wpa_debug_level = VAR_0;

 VAR_6 = FUNC_3(&VAR_5);
 if (VAR_6 == ((void*)0))
  return -1;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));


 if (FUNC_1(VAR_6, &VAR_3, ((void*)0)) == ((void*)0))
  VAR_4 = -1;

 if (VAR_4 == 0)
  VAR_4 = FUNC_4(VAR_6);

 FUNC_2(VAR_6);

 return VAR_4;
}
