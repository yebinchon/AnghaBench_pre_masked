
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int,int *) ;

void FUNC_3(X509_ALGOR *VAR_3, const EVP_MD *VAR_4)
{
    int VAR_5;

    if (VAR_4->flags & VAR_0)
        VAR_5 = VAR_2;
    else
        VAR_5 = VAR_1;

    FUNC_2(VAR_3, FUNC_1(FUNC_0(VAR_4)), VAR_5, ((void*)0));

}
