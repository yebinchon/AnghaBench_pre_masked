
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,unsigned int,char**) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,int *,int ,int ,void**) ;
 int FUNC_4 (int ,int,scalar_t__,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 unsigned int FUNC_7 (char const*,char***) ;

__attribute__((used)) static void
FUNC_8 (const char *VAR_1, unsigned VAR_2)
{
    krb5_error_code VAR_3;
    int VAR_4;
    void *VAR_5;
    krb5_context VAR_6;
    unsigned VAR_7;
    char **VAR_8;

    VAR_3 = FUNC_6(&VAR_6);
    if (VAR_3)
 FUNC_1 (1, "krb5_init_context failed: %d", VAR_3);
    VAR_3 = FUNC_3(VAR_6,
      VAR_0,
      ((void*)0),
      VAR_0,
      ((void*)0), 0, 0,
      &VAR_5);
    if(VAR_3)
 FUNC_4(VAR_6, 1, VAR_3, "kadm5_init_with_password");

    VAR_7 = FUNC_7 (VAR_1, &VAR_8);

    for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
 FUNC_0 (VAR_6, VAR_5, VAR_7, VAR_8);
    FUNC_2(VAR_5);
    FUNC_5(VAR_6);
}
