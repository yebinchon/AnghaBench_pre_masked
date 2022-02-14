
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* func_read ) (TYPE_2__*,void*,size_t,int *) ;int (* func_write ) (TYPE_2__*,void*,size_t,int *) ;int (* func_other ) (TYPE_2__*) ;} ;
struct ssl_async_args {size_t num; int type; TYPE_1__ f; void* buf; TYPE_2__* s; } ;
struct TYPE_7__ {int asyncrw; } ;
typedef TYPE_2__ SSL ;





 int FUNC_0 (TYPE_2__*,void*,size_t,int *) ;
 int FUNC_1 (TYPE_2__*,void*,size_t,int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
    struct ssl_async_args *VAR_1;
    SSL *VAR_2;
    void *VAR_3;
    size_t VAR_4;

    VAR_1 = (struct ssl_async_args *)VAR_0;
    VAR_2 = VAR_1->s;
    VAR_3 = VAR_1->buf;
    VAR_4 = VAR_1->num;
    switch (VAR_1->type) {
    case 129:
        return VAR_1->f.func_read(VAR_2, VAR_3, VAR_4, &VAR_2->asyncrw);
    case 128:
        return VAR_1->f.func_write(VAR_2, VAR_3, VAR_4, &VAR_2->asyncrw);
    case 130:
        return VAR_1->f.func_other(VAR_2);
    }
    return -1;
}
