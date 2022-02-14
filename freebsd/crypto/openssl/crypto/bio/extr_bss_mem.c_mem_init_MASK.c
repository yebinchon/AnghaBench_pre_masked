
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int shutdown; int init; int num; char* ptr; } ;
struct TYPE_5__ {int * buf; int * readp; } ;
typedef TYPE_1__ BIO_BUF_MEM ;
typedef TYPE_2__ BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned long) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, unsigned long VAR_1)
{
    BIO_BUF_MEM *VAR_2 = FUNC_3(sizeof(*VAR_2));

    if (VAR_2 == ((void*)0))
        return 0;
    if ((VAR_2->buf = FUNC_1(VAR_1)) == ((void*)0)) {
        FUNC_2(VAR_2);
        return 0;
    }
    if ((VAR_2->readp = FUNC_3(sizeof(*VAR_2->readp))) == ((void*)0)) {
        FUNC_0(VAR_2->buf);
        FUNC_2(VAR_2);
        return 0;
    }
    *VAR_2->readp = *VAR_2->buf;
    VAR_0->shutdown = 1;
    VAR_0->init = 1;
    VAR_0->num = -1;
    VAR_0->ptr = (char *)VAR_2;
    return 1;
}
