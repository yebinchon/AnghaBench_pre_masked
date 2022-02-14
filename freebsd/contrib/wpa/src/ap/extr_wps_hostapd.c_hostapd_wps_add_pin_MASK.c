
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_add_pin_data {int timeout; scalar_t__ added; int * uuid; int pin_len; int const* pin; int const* addr; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_data*,int ,struct wps_add_pin_data*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,int *) ;
 int VAR_1 ;

int FUNC_4(struct hostapd_data *VAR_2, const u8 *VAR_3,
   const char *VAR_4, const char *VAR_5, int VAR_6)
{
 u8 VAR_7[VAR_0];
 struct wps_add_pin_data VAR_8;

 VAR_8.addr = VAR_3;
 VAR_8.uuid = VAR_7;
 VAR_8.pin = (const u8 *) VAR_5;
 VAR_8.pin_len = FUNC_2(VAR_5);
 VAR_8.timeout = VAR_6;
 VAR_8.added = 0;

 if (FUNC_1(VAR_4, "any") == 0)
  VAR_8.uuid = ((void*)0);
 else {
  if (FUNC_3(VAR_4, VAR_7))
   return -1;
  VAR_8.uuid = VAR_7;
 }
 if (FUNC_0(VAR_2, VAR_1, &VAR_8) < 0)
  return -1;
 return VAR_8.added ? 0 : -1;
}
