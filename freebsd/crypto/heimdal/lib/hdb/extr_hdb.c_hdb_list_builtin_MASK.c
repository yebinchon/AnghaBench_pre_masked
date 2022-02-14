
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdb_method {char* prefix; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 char* FUNC_1 (size_t) ;
 struct hdb_method const* VAR_1 ;
 int FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (char*) ;

krb5_error_code
FUNC_4(krb5_context VAR_2, char **VAR_3)
{
    const struct hdb_method *VAR_4;
    size_t VAR_5 = 0;
    char *VAR_6 = ((void*)0);

    for (VAR_4 = VAR_1; VAR_4->prefix != ((void*)0); ++VAR_4) {
 if (VAR_4->prefix[0] == '\0')
     continue;
 VAR_5 += FUNC_3(VAR_4->prefix) + 2;
    }

    VAR_5 += 1;
    VAR_6 = FUNC_1(VAR_5);
    if (VAR_6 == ((void*)0)) {
 FUNC_0(VAR_2, VAR_0, "malloc: out of memory");
 return VAR_0;
    }
    VAR_6[0] = '\0';

    for (VAR_4 = VAR_1; VAR_4->prefix != ((void*)0); ++VAR_4) {
 if (VAR_4 != VAR_1)
     FUNC_2(VAR_6, ", ", VAR_5);
 FUNC_2(VAR_6, VAR_4->prefix, VAR_5);
    }
    *VAR_3 = VAR_6;
    return 0;
}
