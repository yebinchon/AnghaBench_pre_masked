
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {size_t identity_len; int const* identity; } ;



const u8 * FUNC_0(struct eap_sm *VAR_0, size_t *VAR_1)
{
 *VAR_1 = VAR_0->identity_len;
 return VAR_0->identity;
}
