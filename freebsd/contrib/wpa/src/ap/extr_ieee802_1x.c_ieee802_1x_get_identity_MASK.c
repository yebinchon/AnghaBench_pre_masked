
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eapol_state_machine {size_t identity_len; int * identity; } ;



u8 * FUNC_0(struct eapol_state_machine *VAR_0, size_t *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_0->identity == ((void*)0))
  return ((void*)0);

 *VAR_1 = VAR_0->identity_len;
 return VAR_0->identity;
}
