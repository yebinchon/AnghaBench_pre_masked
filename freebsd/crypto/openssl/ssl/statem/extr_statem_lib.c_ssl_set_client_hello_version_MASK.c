
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int version; int client_version; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int*,int*,int *) ;

int FUNC_3(SSL *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;





    if (!FUNC_1(VAR_1))
        return 0;

    VAR_4 = FUNC_2(VAR_1, &VAR_2, &VAR_3, ((void*)0));

    if (VAR_4 != 0)
        return VAR_4;

    VAR_1->version = VAR_3;


    if (!FUNC_0(VAR_1) && VAR_3 > VAR_0)
        VAR_3 = VAR_0;

    VAR_1->client_version = VAR_3;
    return 0;
}
