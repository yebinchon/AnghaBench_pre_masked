
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {int control_cert_file; int control_key_file; int server_cert_file; scalar_t__ control_use_cert; } ;
typedef int SSL_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int ,struct config_file*,int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (struct config_file*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;

__attribute__((used)) static SSL_CTX*
FUNC_14(struct config_file* VAR_4)
{
 char* VAR_5=((void*)0), *VAR_6=((void*)0), *VAR_7=((void*)0);
 SSL_CTX* VAR_8;

 if(!(FUNC_11(VAR_4) && VAR_4->control_use_cert))
  return ((void*)0);
 VAR_5 = FUNC_9(VAR_4->server_cert_file, VAR_4, 1);
 VAR_6 = FUNC_9(VAR_4->control_key_file, VAR_4, 1);
 VAR_7 = FUNC_9(VAR_4->control_cert_file, VAR_4, 1);
 if(!VAR_5 || !VAR_6 || !VAR_7)
  FUNC_8("out of memory");
 VAR_8 = FUNC_2(FUNC_7());
 if(!VAR_8)
  FUNC_12("could not allocate SSL_CTX pointer");
 if((FUNC_3(VAR_8, VAR_1) & VAR_1)
  != VAR_1)
  FUNC_12("could not set SSL_OP_NO_SSLv2");
 if((FUNC_3(VAR_8, VAR_2) & VAR_2)
  != VAR_2)
  FUNC_12("could not set SSL_OP_NO_SSLv3");
 if(!FUNC_6(VAR_8,VAR_7))
  FUNC_13("Error setting up SSL_CTX client cert", VAR_7);
 if (!FUNC_5(VAR_8,VAR_6,VAR_0))
  FUNC_13("Error setting up SSL_CTX client key", VAR_6);
 if (!FUNC_0(VAR_8))
  FUNC_12("Error setting up SSL_CTX client key");
 if (FUNC_1(VAR_8, VAR_5, ((void*)0)) != 1)
  FUNC_13("Error setting up SSL_CTX verify, server cert",
        VAR_5);
 FUNC_4(VAR_8, VAR_3, ((void*)0));

 FUNC_10(VAR_5);
 FUNC_10(VAR_6);
 FUNC_10(VAR_7);
 return VAR_8;
}
