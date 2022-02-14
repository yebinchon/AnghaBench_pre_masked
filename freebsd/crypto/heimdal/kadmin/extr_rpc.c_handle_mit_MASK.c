
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef int krb5_socket_t ;
typedef int krb5_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,size_t,int *) ;

int
FUNC_3(krb5_context VAR_1, void *VAR_2, size_t VAR_3, krb5_socket_t VAR_4)
{
    krb5_storage *VAR_5;

    VAR_0 = VAR_1;

    VAR_5 = FUNC_1(VAR_4);
    FUNC_0(VAR_5 != ((void*)0));

    FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5);

    return 0;
}
