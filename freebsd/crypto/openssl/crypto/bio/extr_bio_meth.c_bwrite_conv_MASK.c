
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* method; } ;
struct TYPE_5__ {int (* bwrite_old ) (TYPE_2__*,char const*,int) ;} ;
typedef TYPE_2__ BIO ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*,char const*,int) ;

int FUNC_1(BIO *VAR_1, const char *VAR_2, size_t VAR_3, size_t *VAR_4)
{
    int VAR_5;

    if (VAR_3 > VAR_0)
        VAR_3 = VAR_0;

    VAR_5 = VAR_1->method->bwrite_old(VAR_1, VAR_2, (int)VAR_3);

    if (VAR_5 <= 0) {
        *VAR_4 = 0;
        return VAR_5;
    }

    *VAR_4 = (size_t)VAR_5;

    return 1;
}
