
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int eap; } ;
typedef enum wps_request_type { ____Placeholder_wps_request_type } wps_request_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

enum wps_request_type FUNC_2(struct wpa_ssid *VAR_2)
{
 if (FUNC_0(&VAR_2->eap) ||
     FUNC_1(&VAR_2->eap))
  return VAR_0;
 else
  return VAR_1;
}
