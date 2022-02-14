
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_driver_privsep_data {int dummy; } ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpa_driver_privsep_data*,int ,int *,int ,int*,size_t*) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, u8 *VAR_4)
{
 struct wpa_driver_privsep_data *VAR_5 = VAR_3;
 int VAR_6, VAR_7;
 u8 VAR_8[sizeof(int) + VAR_2];
 size_t VAR_9 = sizeof(VAR_8);

 VAR_6 = FUNC_2(VAR_5, VAR_1, ((void*)0), 0, VAR_8, &VAR_9);
 if (VAR_6 < 0 || VAR_9 < sizeof(int))
  return -1;
 FUNC_0(&VAR_7, VAR_8, sizeof(int));
 if (VAR_7 < 0 || VAR_7 > VAR_2 ||
     sizeof(int) + VAR_7 > VAR_9) {
  FUNC_1(VAR_0, "privsep: Invalid get SSID reply");
  return -1;
 }
 FUNC_0(VAR_4, &VAR_8[sizeof(int)], VAR_7);
 return VAR_7;
}
