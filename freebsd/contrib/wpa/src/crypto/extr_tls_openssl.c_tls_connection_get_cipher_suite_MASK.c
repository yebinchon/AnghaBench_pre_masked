
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tls_connection {int ssl; } ;
typedef int SSL_CIPHER ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int ) ;

u16 FUNC_3(struct tls_connection *VAR_0)
{
 const SSL_CIPHER *VAR_1;

 VAR_1 = FUNC_2(VAR_0->ssl);
 if (!VAR_1)
  return 0;



 return FUNC_0(VAR_1) & 0xFFFF;

}
