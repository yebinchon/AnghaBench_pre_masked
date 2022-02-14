
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_krbhst_data {int port; int def_port; int flags; int realm; } ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,int ,char*) ;
 int FUNC_1 (int ,struct krb5_krbhst_data*,char*,int ,int ) ;
 int FUNC_2 (char**) ;
 char** FUNC_3 (int ,int *,char*,int ,char const*,int *) ;

__attribute__((used)) static void
FUNC_4(krb5_context VAR_1, struct krb5_krbhst_data *VAR_2,
   const char *VAR_3)
{
    int VAR_4;
    char **VAR_5;
    VAR_5 = FUNC_3(VAR_1, ((void*)0),
           "realms", VAR_2->realm, VAR_3, ((void*)0));

    FUNC_0(VAR_1, 2, "configuration file for realm %s%s found",
  VAR_2->realm, VAR_5 ? "" : " not");

    if(VAR_5 == ((void*)0))
 return;
    VAR_2->flags |= VAR_0;
    for(VAR_4 = 0; VAR_5 && VAR_5[VAR_4] != ((void*)0); VAR_4++)
 FUNC_1(VAR_1, VAR_2, VAR_5[VAR_4], VAR_2->def_port, VAR_2->port);

    FUNC_2(VAR_5);
}
