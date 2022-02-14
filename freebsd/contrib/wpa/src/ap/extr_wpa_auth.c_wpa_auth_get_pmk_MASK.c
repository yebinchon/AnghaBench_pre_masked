
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_state_machine {int pmk_len; int const* PMK; } ;



const u8 * FUNC_0(struct wpa_state_machine *VAR_0, int *VAR_1)
{
 if (!VAR_0)
  return ((void*)0);
 *VAR_1 = VAR_0->pmk_len;
 return VAR_0->PMK;
}
