
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct proto_conn {int dummy; } ;
typedef int connected ;
typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int) ;
 int VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,char*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,int,struct proto_conn**) ;
 int FUNC_18 (struct proto_conn*) ;
 int FUNC_19 (char*,char const*) ;
 scalar_t__ FUNC_20 (char const*,int,char*,char const*) ;
 int FUNC_21 (int,int*,int,int ) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int *,int) ;
 char* FUNC_24 (char const*) ;
 int FUNC_25 (int *,char const*) ;
 int FUNC_26 (int,int *) ;
 int FUNC_27 (int,int) ;

__attribute__((used)) static void
FUNC_28(const char *VAR_8, int VAR_9, const char *VAR_10,
    const char *VAR_11, const char *VAR_12, const char *VAR_13,
    int VAR_14, int VAR_15)
{
 struct proto_conn *VAR_16;
 char *VAR_17, *VAR_18;
 SSL_CTX *VAR_19;
 SSL *VAR_20;
 long VAR_21;
 int VAR_22, VAR_23;
 uint8_t VAR_24;

 FUNC_13(VAR_15);
 FUNC_16("[TLS sandbox] (client) ");



 FUNC_19("tcp:port", VAR_13);

 VAR_22 = VAR_9;


 if (VAR_10 == ((void*)0)) {
  VAR_17 = ((void*)0);
 } else {
  VAR_17 = FUNC_24(VAR_10);
  if (VAR_17 == ((void*)0))
   FUNC_15(VAR_4, "Unable to allocate memory.");
  FUNC_8("tcp://", VAR_17, 6);
 }
 VAR_18 = FUNC_24(VAR_11);
 if (VAR_18 == ((void*)0))
  FUNC_15(VAR_4, "Unable to allocate memory.");
 FUNC_8("tcp://", VAR_18, 6);


 if (FUNC_17(VAR_17, VAR_18, VAR_14, &VAR_16) == -1)
  FUNC_10(VAR_4);

 FUNC_4();
 FUNC_3();






 VAR_19 = FUNC_0(FUNC_7());
 if (VAR_19 == ((void*)0))
  FUNC_15(VAR_4, "SSL_CTX_new() failed.");

 if (FUNC_20(VAR_8, 1, "proto_tls client: %s", VAR_11) != 0)
  FUNC_15(VAR_3, "Unable to sandbox TLS client.");
 FUNC_12(1, "Privileges successfully dropped.");

 FUNC_1(VAR_19, VAR_5 | VAR_6);





 VAR_20 = FUNC_5(VAR_19);
 if (VAR_20 == ((void*)0))
  FUNC_15(VAR_4, "SSL_new() failed.");

 VAR_23 = FUNC_18(VAR_16);

 FUNC_9(VAR_23);

 if (FUNC_6(VAR_20, VAR_23) != 1)
  FUNC_15(VAR_4, "SSL_set_fd() failed.");

 VAR_21 = FUNC_2(VAR_20);
 FUNC_23(VAR_20, (int)VAR_21);

 FUNC_11(VAR_22);
 FUNC_11(VAR_23);

 FUNC_25(VAR_20, VAR_12);




 VAR_24 = 1;
 for (;;) {
  switch (FUNC_21(VAR_22, &VAR_24, sizeof(VAR_24), 0)) {
  case -1:
   if (VAR_7 == VAR_1 || VAR_7 == VAR_2)
    continue;
   if (VAR_7 == VAR_0) {
    (void)FUNC_27(VAR_22, -1);
    continue;
   }
   FUNC_14(VAR_4, "send() failed");
  case 0:
   FUNC_12(1, "Connection terminated.");
   FUNC_10(0);
  case 1:
   break;
  }
  break;
 }

 FUNC_26(VAR_22, VAR_20);
}
