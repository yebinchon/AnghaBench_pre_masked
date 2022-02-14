
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_state_machine {scalar_t__ PTK_valid; int PTKRequest; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct wpa_state_machine *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 VAR_1->PTKRequest = VAR_0;
 VAR_1->PTK_valid = 0;
}
