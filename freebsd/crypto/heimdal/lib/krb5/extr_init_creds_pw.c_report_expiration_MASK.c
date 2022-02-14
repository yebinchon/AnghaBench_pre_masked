
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int (* krb5_prompter_fct ) (int ,int *,int *,char*,int ,int *) ;
typedef int krb5_data ;
typedef int krb5_context ;


 scalar_t__ FUNC_0 (char**,char*,char const*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int *,char*,int ,int *) ;

__attribute__((used)) static void
FUNC_4 (krb5_context VAR_0,
     krb5_prompter_fct VAR_1,
     krb5_data *VAR_2,
     const char *VAR_3,
     time_t VAR_4)
{
    char *VAR_5 = ((void*)0);

    if (FUNC_0(&VAR_5, "%s%d", VAR_3, FUNC_1(&VAR_4)) < 0 || VAR_5 == ((void*)0))
 return;
    (*VAR_1)(VAR_0, VAR_2, ((void*)0), VAR_5, 0, ((void*)0));
    FUNC_2(VAR_5);
}
