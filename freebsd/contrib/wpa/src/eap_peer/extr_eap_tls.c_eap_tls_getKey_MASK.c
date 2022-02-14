
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_tls_data {int * key_data; } ;
struct eap_sm {int dummy; } ;


 size_t VAR_0 ;
 int * FUNC_0 (int *,size_t) ;

__attribute__((used)) static u8 * FUNC_1(struct eap_sm *VAR_1, void *VAR_2, size_t *VAR_3)
{
 struct eap_tls_data *VAR_4 = VAR_2;
 u8 *VAR_5;

 if (VAR_4->key_data == ((void*)0))
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_4->key_data, VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 *VAR_3 = VAR_0;

 return VAR_5;
}
