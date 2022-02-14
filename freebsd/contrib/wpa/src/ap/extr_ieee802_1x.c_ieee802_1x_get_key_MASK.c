
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eapol_state_machine {TYPE_1__* eap_if; } ;
struct TYPE_2__ {size_t eapKeyDataLen; int const* eapKeyData; } ;



const u8 * FUNC_0(struct eapol_state_machine *VAR_0, size_t *VAR_1)
{
 *VAR_1 = 0;
 if (VAR_0 == ((void*)0))
  return ((void*)0);

 *VAR_1 = VAR_0->eap_if->eapKeyDataLen;
 return VAR_0->eap_if->eapKeyData;
}
