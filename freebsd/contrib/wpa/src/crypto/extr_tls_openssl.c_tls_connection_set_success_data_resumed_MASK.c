
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int success_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

void FUNC_1(struct tls_connection *VAR_1)
{
 FUNC_0(VAR_0,
     "OpenSSL: Success data accepted for resumed session");
 VAR_1->success_data = 1;
}
