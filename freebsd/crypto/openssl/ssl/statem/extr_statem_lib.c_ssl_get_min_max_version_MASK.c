
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int version; TYPE_3__* (* cmeth ) () ;} ;
typedef TYPE_2__ version_info ;
struct TYPE_14__ {int version; TYPE_1__* method; } ;
struct TYPE_13__ {int version; } ;
struct TYPE_11__ {int version; } ;
typedef TYPE_3__ SSL_METHOD ;
typedef TYPE_4__ SSL ;



 int VAR_0 ;
 int VAR_1 ;

 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__ const*,TYPE_3__ const*) ;
 TYPE_3__* FUNC_2 () ;
 TYPE_2__* VAR_3 ;

int FUNC_3(const SSL *VAR_4, int *VAR_5, int *VAR_6,
                            int *VAR_7)
{
    int VAR_8, VAR_9;
    int VAR_10;
    const SSL_METHOD *VAR_11 = ((void*)0);
    const SSL_METHOD *VAR_12;
    const version_info *VAR_13;
    const version_info *VAR_14;

    switch (VAR_4->method->version) {
    default:







        *VAR_5 = *VAR_6 = VAR_4->version;




        if (!FUNC_0(VAR_7 == ((void*)0)))
            return VAR_0;
        return 0;
    case 128:
        VAR_13 = VAR_3;
        break;
    case 129:
        VAR_13 = VAR_2;
        break;
    }
    *VAR_5 = VAR_8 = 0;
    VAR_10 = 1;
    if (VAR_7 != ((void*)0))
        *VAR_7 = 0;
    VAR_9 = 0;
    for (VAR_14 = VAR_13; VAR_14->version != 0; ++VAR_14) {




        if (VAR_14->cmeth == ((void*)0)) {
            VAR_10 = 1;
            VAR_9 = 0;
            continue;
        }
        VAR_12 = VAR_14->cmeth();

        if (VAR_10 == 1 && VAR_9 == 0)
            VAR_9 = VAR_14->version;

        if (FUNC_1(VAR_4, VAR_12) != 0) {
            VAR_10 = 1;
        } else if (!VAR_10) {
            VAR_11 = ((void*)0);
            *VAR_5 = VAR_12->version;
        } else {
            if (VAR_7 != ((void*)0) && VAR_9 != 0)
                *VAR_7 = VAR_9;
            VAR_8 = (VAR_11 = VAR_12)->version;
            *VAR_5 = VAR_8;
            VAR_10 = 0;
        }
    }

    *VAR_6 = VAR_8;


    if (VAR_8 == 0)
        return VAR_1;

    return 0;
}
