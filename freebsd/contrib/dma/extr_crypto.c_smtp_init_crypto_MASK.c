
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_2__ {int * ssl; int features; int * certfile; } ;
typedef int SSL_METHOD ;
typedef int SSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 () ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 TYPE_1__ VAR_8 ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int *) ;
 int VAR_9 ;
 int FUNC_13 (int,int ,int *) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,char*,...) ;

int
FUNC_17(int VAR_10, int VAR_11)
{
 SSL_CTX *VAR_12 = ((void*)0);



 SSL_METHOD *VAR_13 = ((void*)0);

 X509 *VAR_14;
 int VAR_15;



 FUNC_3();
 FUNC_4();





 VAR_13 = FUNC_8();


 VAR_12 = FUNC_0(VAR_13);
 if (VAR_12 == ((void*)0)) {
  FUNC_16(VAR_3, "remote delivery deferred: SSL init failed: %s", FUNC_15());
  return (1);
 }


 if (VAR_8.certfile != ((void*)0)) {
  VAR_15 = FUNC_12(VAR_12, VAR_8.certfile);
  if (VAR_15) {
   FUNC_16(VAR_3, "remote delivery deferred");
   return (1);
  }
 }




 if (((VAR_11 & VAR_5) != 0) &&
      (VAR_11 & VAR_6) != 0) {

  VAR_8.features |= VAR_4;

  FUNC_14(VAR_10, "EHLO %s", FUNC_11());
  if (FUNC_13(VAR_10, 0, ((void*)0)) == 2) {
   FUNC_14(VAR_10, "STARTTLS");
   if (FUNC_13(VAR_10, 0, ((void*)0)) != 2) {
    if ((VAR_11 & VAR_7) == 0) {
     FUNC_16(VAR_0, "remote delivery deferred: STARTTLS not available: %s", VAR_9);
     return (1);
    } else {
     FUNC_16(VAR_1, "in opportunistic TLS mode, STARTTLS not available: %s", VAR_9);
     return (0);
    }
   }
  }

  VAR_8.features &= ~VAR_4;
 }

 VAR_8.ssl = FUNC_5(VAR_12);
 if (VAR_8.ssl == ((void*)0)) {
  FUNC_16(VAR_2, "remote delivery deferred: SSL struct creation failed: %s",
         FUNC_15());
  return (1);
 }


 FUNC_6(VAR_8.ssl);


 VAR_15 = FUNC_7(VAR_8.ssl, VAR_10);
 if (VAR_15 == 0) {
  FUNC_16(VAR_2, "remote delivery deferred: SSL set fd failed: %s",
         FUNC_15());
  return (1);
 }


 VAR_15 = FUNC_1(VAR_8.ssl);
 if (VAR_15 < 0) {
  FUNC_16(VAR_0, "remote delivery deferred: SSL handshake failed fatally: %s",
         FUNC_15());
  return (1);
 }


 VAR_14 = FUNC_2(VAR_8.ssl);
 if (VAR_14 == ((void*)0)) {
  FUNC_16(VAR_3, "remote delivery deferred: Peer did not provide certificate: %s",
         FUNC_15());
 }
 FUNC_10(VAR_14);

 return (0);
}
