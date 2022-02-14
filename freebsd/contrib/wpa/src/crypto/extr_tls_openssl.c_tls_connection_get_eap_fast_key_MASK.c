
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct tls_connection {int * ssl; } ;
typedef int server_random ;
typedef int master_key ;
typedef int client_random ;
typedef int SSL_SESSION ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned char*) ;
 unsigned char* FUNC_9 (int) ;
 int FUNC_10 (unsigned char*,unsigned char*,size_t) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (unsigned char*,size_t,char*,unsigned char*,int,unsigned char*,int) ;
 int FUNC_13 (unsigned char*,size_t,char*,unsigned char*,int,unsigned char*,int) ;
 int FUNC_14 (int ,char*) ;

int FUNC_15(void *VAR_2, struct tls_connection *VAR_3,
        u8 *VAR_4, size_t VAR_5)
{
 FUNC_14(VAR_0,
     "OpenSSL: EAP-FAST keys cannot be exported in FIPS mode");
 return -1;

}
