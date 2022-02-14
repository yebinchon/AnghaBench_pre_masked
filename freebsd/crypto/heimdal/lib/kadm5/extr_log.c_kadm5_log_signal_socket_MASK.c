
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 char const* FUNC_4 (int ,int *,int ,char*,char*,int *) ;
 int VAR_1 ;

const char *
FUNC_5(krb5_context VAR_2)
{
    FUNC_0(&VAR_1);
    if (!VAR_0)
 FUNC_2(&VAR_0, "%d/signal", FUNC_3(VAR_2));
    FUNC_1(&VAR_1);

    return FUNC_4(VAR_2,
       ((void*)0),
       VAR_0,
       "kdc",
       "signal_socket",
       ((void*)0));
}
