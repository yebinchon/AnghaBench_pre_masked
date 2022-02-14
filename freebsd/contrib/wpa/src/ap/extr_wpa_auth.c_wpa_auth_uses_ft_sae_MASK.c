
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_state_machine {scalar_t__ wpa_key_mgmt; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct wpa_state_machine *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return 0;
 return VAR_1->wpa_key_mgmt == VAR_0;
}
