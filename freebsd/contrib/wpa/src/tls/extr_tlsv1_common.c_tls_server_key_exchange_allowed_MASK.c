
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tls_cipher ;
struct tls_cipher_suite {int key_exchange; } ;
 struct tls_cipher_suite* FUNC_0 (int ) ;

int FUNC_1(tls_cipher VAR_0)
{
 const struct tls_cipher_suite *VAR_1;


 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0))
  return 0;

 switch (VAR_1->key_exchange) {
 case 134:
 case 133:
 case 132:
 case 131:
 case 129:
 case 130:
  return 1;
 case 128:
  return 1 ;
 default:
  return 0;
 }
}
