
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ num; int flags; scalar_t__ ptr; } ;
struct TYPE_7__ {TYPE_1__* buf; TYPE_1__* readp; } ;
struct TYPE_6__ {size_t length; size_t max; void* data; } ;
typedef TYPE_1__ BUF_MEM ;
typedef TYPE_2__ BIO_BUF_MEM ;
typedef TYPE_3__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 size_t FUNC_3 (void const*) ;

BIO *FUNC_4(const void *VAR_3, int VAR_4)
{
    BIO *VAR_5;
    BUF_MEM *VAR_6;
    BIO_BUF_MEM *VAR_7;
    size_t VAR_8;

    if (VAR_3 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_2);
        return ((void*)0);
    }
    VAR_8 = (VAR_4 < 0) ? FUNC_3(VAR_3) : (size_t)VAR_4;
    if ((VAR_5 = FUNC_0(FUNC_1())) == ((void*)0))
        return ((void*)0);
    VAR_7 = (BIO_BUF_MEM *)VAR_5->ptr;
    VAR_6 = VAR_7->buf;

    VAR_6->data = (void *)VAR_3;
    VAR_6->length = VAR_8;
    VAR_6->max = VAR_8;
    *VAR_7->readp = *VAR_7->buf;
    VAR_5->flags |= VAR_0;

    VAR_5->num = 0;
    return VAR_5;
}
