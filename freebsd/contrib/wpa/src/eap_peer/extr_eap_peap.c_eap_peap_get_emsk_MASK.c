
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {scalar_t__ key_data; scalar_t__ crypto_binding_used; int phase2_success; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (scalar_t__,size_t) ;

__attribute__((used)) static u8 * FUNC_1(struct eap_sm *VAR_2, void *VAR_3, size_t *VAR_4)
{
 struct eap_peap_data *VAR_5 = VAR_3;
 u8 *VAR_6;

 if (!VAR_5->key_data || !VAR_5->phase2_success)
  return ((void*)0);

 if (VAR_5->crypto_binding_used) {

  return ((void*)0);
 }

 VAR_6 = FUNC_0(VAR_5->key_data + VAR_1, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 *VAR_4 = VAR_0;

 return VAR_6;
}
