
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;
typedef int FILE ;


 int FUNC_0 (char**,char*,int ) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,int *,char*,char*,char*,int *) ;
 char* VAR_0 ;

__attribute__((used)) static FILE *
FUNC_5(krb5_context VAR_1)
{
    char *VAR_2 = ((void*)0);
    const char *VAR_3;
    FILE *VAR_4;

    if (VAR_0)
 VAR_3 = VAR_0;
    else {
 FUNC_0(&VAR_2, "%d/slaves-stats", FUNC_3(VAR_1));
 VAR_3 = FUNC_4(VAR_1,
         ((void*)0),
         VAR_2,
         "kdc",
         "iprop-stats",
         ((void*)0));
    }
    VAR_4 = FUNC_1(VAR_3, "w");
    if (VAR_2)
 FUNC_2(VAR_2);

    return VAR_4;
}
