
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_dns_reply {int head; } ;
typedef int krb5_realm ;
typedef int krb5_context ;
typedef int dom ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (int ,int *,char*,char*,int *) ;
 int FUNC_3 (struct rk_dns_reply*) ;
 struct rk_dns_reply* FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_6(krb5_context VAR_1,
        const char *VAR_2,
        krb5_realm **VAR_3)
{
    static const char *VAR_4[] = { "_kerberos", ((void*)0) };
    char VAR_5[VAR_0];
    struct rk_dns_reply *VAR_6;
    const char **VAR_7;
    char **VAR_8;
    int VAR_9, VAR_10;

    VAR_8 = FUNC_2(VAR_1, ((void*)0), "libdefaults",
         "dns_lookup_realm_labels", ((void*)0));
    if(VAR_8 != ((void*)0))
 VAR_7 = (const char **)VAR_8;
    else
 VAR_7 = VAR_4;
    if(*VAR_2 == '.')
 VAR_2++;
    for (VAR_9 = 0; VAR_7[VAR_9] != ((void*)0); VAR_9++) {
 VAR_10 = FUNC_5(VAR_5, sizeof(VAR_5), "%s.%s.", VAR_7[VAR_9], VAR_2);
 if(VAR_10 < 0 || (size_t)VAR_10 >= sizeof(VAR_5)) {
     if (VAR_8)
  FUNC_1(VAR_8);
     return -1;
 }
     VAR_6 = FUNC_4(VAR_5, "TXT");
     if(VAR_6 != ((void*)0)) {
     VAR_10 = FUNC_0 (VAR_6->head, VAR_3);
     FUNC_3(VAR_6);
     if(VAR_10 == 0) {
  if (VAR_8)
      FUNC_1(VAR_8);
  return 0;
     }
 }
    }
    if (VAR_8)
 FUNC_1(VAR_8);
    return -1;
}
