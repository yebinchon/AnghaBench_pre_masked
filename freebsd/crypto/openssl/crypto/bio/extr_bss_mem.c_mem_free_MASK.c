
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ptr; } ;
struct TYPE_6__ {struct TYPE_6__* readp; } ;
typedef TYPE_1__ BIO_BUF_MEM ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_0)
{
    BIO_BUF_MEM *VAR_1;

    if (VAR_0 == ((void*)0))
        return 0;

    VAR_1 = (BIO_BUF_MEM *)VAR_0->ptr;
    if (!FUNC_1(VAR_0))
        return 0;
    FUNC_0(VAR_1->readp);
    FUNC_0(VAR_1);
    return 1;
}
