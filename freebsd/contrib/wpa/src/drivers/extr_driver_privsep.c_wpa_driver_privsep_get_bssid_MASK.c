
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_driver_privsep_data {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_driver_privsep_data*,int ,int *,int ,int *,size_t*) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, u8 *VAR_3)
{
 struct wpa_driver_privsep_data *VAR_4 = VAR_2;
 int VAR_5;
 size_t VAR_6 = VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_1, ((void*)0), 0, VAR_3, &VAR_6);
 if (VAR_5 < 0 || VAR_6 != VAR_0)
  return -1;
 return 0;
}
