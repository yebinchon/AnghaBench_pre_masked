
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ version; int * (* cmeth ) () ;} ;
typedef TYPE_2__ version_info ;
struct TYPE_12__ {scalar_t__ version; int server; TYPE_1__* method; } ;
struct TYPE_10__ {int version; } ;
typedef int SSL_METHOD ;
typedef TYPE_3__ SSL ;



 int VAR_0 ;

 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__ const*) ;
 scalar_t__ FUNC_1 (TYPE_3__ const*,int *) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_3__ const*,int,scalar_t__) ;

int FUNC_5(const SSL *VAR_3, int VAR_4, const SSL_METHOD **VAR_5)
{
    const version_info *VAR_6;
    const version_info *VAR_7;

    switch (VAR_3->method->version) {
    default:

        return FUNC_4(VAR_3, VAR_4, VAR_3->version) == 0;
    case 128:
        VAR_7 = VAR_2;
        break;
    case 129:
        VAR_7 = VAR_1;
        break;
    }

    for (VAR_6 = VAR_7;
         VAR_6->version != 0 && FUNC_4(VAR_3, VAR_4, VAR_6->version) <= 0;
         ++VAR_6) {
        if (VAR_6->cmeth != ((void*)0)
                && FUNC_4(VAR_3, VAR_4, VAR_6->version) == 0
                && FUNC_1(VAR_3, VAR_6->cmeth()) == 0
                && (!VAR_3->server
                    || VAR_4 != VAR_0
                    || FUNC_0(VAR_3))) {
            if (VAR_5 != ((void*)0))
                *VAR_5 = VAR_6->cmeth();
            return 1;
        }
    }
    return 0;
}
