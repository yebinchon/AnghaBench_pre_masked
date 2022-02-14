
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int flags; int * ptr; scalar_t__ init; scalar_t__ shutdown; } ;
struct TYPE_7__ {TYPE_1__* buf; } ;
struct TYPE_6__ {int * data; } ;
typedef TYPE_1__ BUF_MEM ;
typedef TYPE_2__ BIO_BUF_MEM ;
typedef TYPE_3__ BIO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return 0;

    if (VAR_1->shutdown && VAR_1->init && VAR_1->ptr != ((void*)0)) {
        BIO_BUF_MEM *VAR_2 = (BIO_BUF_MEM *)VAR_1->ptr;
        BUF_MEM *VAR_3 = VAR_2->buf;

        if (VAR_1->flags & VAR_0)
            VAR_3->data = ((void*)0);
        FUNC_0(VAR_3);
    }
    return 1;
}
