
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wpa_supplicant {scalar_t__ wpa_state; int key_mgmt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_2, u16 VAR_3,
     int VAR_4)
{
 if (VAR_2->wpa_state != VAR_1 ||
     !FUNC_0(VAR_2->key_mgmt))
  return 0;







 if (VAR_4) {
  if (VAR_3 == VAR_0)
   return 0;
 }

 return 1;
}
