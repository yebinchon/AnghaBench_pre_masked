
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eapol_state_machine {struct wpabuf* radius_cui; } ;



struct wpabuf * FUNC_0(struct eapol_state_machine *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return ((void*)0);
 return VAR_0->radius_cui;
}
