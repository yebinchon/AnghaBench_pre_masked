
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tls_cipher ;
struct tls_cipher_data {scalar_t__ cipher; } ;


 size_t VAR_0 ;
 struct tls_cipher_data const* VAR_1 ;

const struct tls_cipher_data * FUNC_0(tls_cipher VAR_2)
{
 size_t VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].cipher == VAR_2)
   return &VAR_1[VAR_3];
 return ((void*)0);
}
