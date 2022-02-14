
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int linestart; int * prefix; } ;
typedef TYPE_1__ PREFIX_CTX ;
typedef int BIO ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_0)
{
    PREFIX_CTX *VAR_1 = FUNC_2(sizeof(*VAR_1));

    if (VAR_1 == ((void*)0))
        return 0;

    VAR_1->prefix = ((void*)0);
    VAR_1->linestart = 1;
    FUNC_0(VAR_0, VAR_1);
    FUNC_1(VAR_0, 1);
    return 1;
}
