
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int krb5_auth_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int,char*) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ,int*,int *) ;

__attribute__((used)) static void
FUNC_8 (krb5_context VAR_1, int VAR_2,
       krb5_auth_context VAR_3)
{
    krb5_storage *VAR_4;
    krb5_data VAR_5;
    int VAR_6;

    VAR_6 = FUNC_0 (&VAR_5, 4);
    if (VAR_6)
 FUNC_2 (VAR_1, 1, VAR_6, "send_im_here");

    VAR_4 = FUNC_5 (&VAR_5);
    if (VAR_4 == ((void*)0))
 FUNC_3 (VAR_1, 1, "krb5_storage_from_data");
    FUNC_6(VAR_4, VAR_0);
    FUNC_4(VAR_4);

    VAR_6 = FUNC_7(VAR_1, VAR_3, &VAR_2, &VAR_5);
    FUNC_1(&VAR_5);

    if (VAR_6)
 FUNC_2 (VAR_1, 1, VAR_6, "krb5_write_priv_message");
}
