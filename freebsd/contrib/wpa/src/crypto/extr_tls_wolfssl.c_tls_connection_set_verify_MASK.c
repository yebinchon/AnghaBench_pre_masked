
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int ca_cert_verify; int ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(void *VAR_5, struct tls_connection *VAR_6,
         int VAR_7, unsigned int VAR_8,
         const u8 *VAR_9, size_t VAR_10)
{
 if (!VAR_6)
  return -1;

 FUNC_2(VAR_0, "SSL: set verify: %d", VAR_7);

 if (VAR_7) {
  VAR_6->ca_cert_verify = 1;
  FUNC_1(VAR_6->ssl, VAR_3 |
       VAR_1,
       VAR_4);
 } else {
  VAR_6->ca_cert_verify = 0;
  FUNC_1(VAR_6->ssl, VAR_2, ((void*)0));
 }

 FUNC_0(VAR_6->ssl);



 return 0;
}
