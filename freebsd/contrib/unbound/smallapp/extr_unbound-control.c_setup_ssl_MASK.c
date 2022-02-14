
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
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static SSL*
FUNC_11(SSL_CTX* VAR_4, int VAR_5)
{
 SSL* VAR_6;
 X509* VAR_7;
 int VAR_8;

 if(!VAR_4) return ((void*)0);
 VAR_6 = FUNC_5(VAR_4);
 if(!VAR_6)
  FUNC_10("could not SSL_new");
 FUNC_6(VAR_6);
 (void)FUNC_8(VAR_6, VAR_2);
 if(!FUNC_7(VAR_6, VAR_5))
  FUNC_10("could not SSL_set_fd");
 while(1) {
  FUNC_0();
  if( (VAR_8=FUNC_1(VAR_6)) == 1)
   break;
  VAR_8 = FUNC_2(VAR_6, VAR_8);
  if(VAR_8 != VAR_0 && VAR_8 != VAR_1)
   FUNC_10("SSL handshake failed");

 }


 if(FUNC_4(VAR_6) != VAR_3)
  FUNC_10("SSL verification failed");
 VAR_7 = FUNC_3(VAR_6);
 if(!VAR_7)
  FUNC_10("Server presented no peer certificate");
 FUNC_9(VAR_7);

 return VAR_6;
}
