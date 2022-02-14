
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct tls_data {scalar_t__ tls_session_lifetime; } ;
struct tls_connection {int ca_cert_verify; unsigned int flags; int ssl; } ;
typedef int counter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char const*,size_t) ;
 int FUNC_2 (int ,int,int *) ;
 scalar_t__ FUNC_3 (struct tls_connection*,unsigned int,int *) ;
 int * VAR_4 ;

int FUNC_4(void *VAR_5, struct tls_connection *VAR_6,
         int VAR_7, unsigned int VAR_8,
         const u8 *VAR_9, size_t VAR_10)
{
 static int VAR_11 = 0;
 struct tls_data *VAR_12 = VAR_5;

 if (VAR_6 == ((void*)0))
  return -1;

 if (VAR_7) {
  VAR_6->ca_cert_verify = 1;
  FUNC_2(VAR_6->ssl, VAR_3 |
          VAR_1 |
          VAR_0, VAR_4);
 } else {
  VAR_6->ca_cert_verify = 0;
  FUNC_2(VAR_6->ssl, VAR_2, ((void*)0));
 }

 if (FUNC_3(VAR_6, VAR_8, ((void*)0)) < 0)
  return -1;
 VAR_6->flags = VAR_8;

 FUNC_0(VAR_6->ssl);

 if (VAR_12->tls_session_lifetime == 0) {





  VAR_11++;
  FUNC_1(VAR_6->ssl,
        (const unsigned char *) &VAR_11,
        sizeof(VAR_11));
 } else if (VAR_9) {
  FUNC_1(VAR_6->ssl, VAR_9,
        VAR_10);
 }

 return 0;
}
