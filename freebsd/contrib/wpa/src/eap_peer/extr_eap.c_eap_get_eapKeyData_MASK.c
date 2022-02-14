
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {size_t eapKeyDataLen; int const* eapKeyData; } ;



const u8 * FUNC_0(struct eap_sm *VAR_0, size_t *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_0->eapKeyData == ((void*)0)) {
  *VAR_1 = 0;
  return ((void*)0);
 }

 *VAR_1 = VAR_0->eapKeyDataLen;
 return VAR_0->eapKeyData;
}
