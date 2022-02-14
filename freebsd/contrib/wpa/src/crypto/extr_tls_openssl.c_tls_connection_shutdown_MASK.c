
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int ssl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(void *VAR_0, struct tls_connection *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return -1;




 FUNC_1(VAR_1->ssl, 1);
 FUNC_2(VAR_1->ssl);
 return FUNC_0(VAR_1->ssl) == 1 ? 0 : -1;
}
