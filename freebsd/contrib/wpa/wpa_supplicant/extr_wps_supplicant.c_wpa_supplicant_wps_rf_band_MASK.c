
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int assoc_freq; int current_ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(void *VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_3;

 if (!VAR_4->current_ssid || !VAR_4->assoc_freq)
  return 0;

 return (VAR_4->assoc_freq > 50000) ? VAR_2 :
  (VAR_4->assoc_freq > 2484) ? VAR_1 : VAR_0;
}
