
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*,char const*,int,int) ;
 char* FUNC_3 (int,int ,char*) ;
 int VAR_0 ;

void FUNC_4(SSL *VAR_1, int VAR_2, int VAR_3,
               const unsigned char *VAR_4, int VAR_5, void *VAR_6)
{
    BIO *VAR_7 = VAR_6;
    const char *VAR_8 = FUNC_3(VAR_3, VAR_0, "unknown");

    FUNC_2(VAR_7, "TLS %s extension \"%s\" (id=%d), len=%d\n",
               VAR_2 ? "server" : "client", VAR_8, VAR_3, VAR_5);
    FUNC_0(VAR_7, (const char *)VAR_4, VAR_5);
    (void)FUNC_1(VAR_7);
}
