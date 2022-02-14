
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ flags; scalar_t__ init; int * ptr; } ;
struct TYPE_4__ {int * obuf; } ;
typedef TYPE_1__ BIO_LINEBUFFER_CTX ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_0)
{
    BIO_LINEBUFFER_CTX *VAR_1;

    if (VAR_0 == ((void*)0))
        return 0;
    VAR_1 = (BIO_LINEBUFFER_CTX *)VAR_0->ptr;
    FUNC_0(VAR_1->obuf);
    FUNC_0(VAR_0->ptr);
    VAR_0->ptr = ((void*)0);
    VAR_0->init = 0;
    VAR_0->flags = 0;
    return 1;
}
