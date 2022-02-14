
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (char*,int *) ;

__attribute__((used)) static SSL*
FUNC_12(SSL_CTX* VAR_4, int VAR_5)
{
 X509* VAR_6;
 int VAR_7;
 SSL* VAR_8 = FUNC_5(VAR_4);
 if(!VAR_8) {
  if(VAR_3) FUNC_10("SSL_new error\n");
  return ((void*)0);
 }
 FUNC_6(VAR_8);
 (void)FUNC_8(VAR_8, VAR_2);
 if(!FUNC_7(VAR_8, VAR_5)) {
  if(VAR_3) FUNC_10("SSL_set_fd error\n");
  FUNC_2(VAR_8);
  return ((void*)0);
 }
 while(1) {
  FUNC_0();
  if( (VAR_7=FUNC_1(VAR_8)) == 1)
   break;
  VAR_7 = FUNC_3(VAR_8, VAR_7);
  if(VAR_7 != VAR_0 && VAR_7 != VAR_1) {
   if(VAR_3) FUNC_10("SSL handshake failed\n");
   FUNC_2(VAR_8);
   return ((void*)0);
  }

 }
 VAR_6 = FUNC_4(VAR_8);
 if(!VAR_6) {
  if(VAR_3) FUNC_10("Server presented no peer certificate\n");
  FUNC_2(VAR_8);
  return ((void*)0);
 }
 FUNC_11("server SSL certificate", VAR_6);
 FUNC_9(VAR_6);
 return VAR_8;
}
