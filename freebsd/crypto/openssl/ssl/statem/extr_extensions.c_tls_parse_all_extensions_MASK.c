
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_17__ {int context; int (* final ) (TYPE_3__*,int,int ) ;} ;
struct TYPE_16__ {int present; } ;
struct TYPE_15__ {TYPE_2__* cert; } ;
struct TYPE_13__ {scalar_t__ meths_count; } ;
struct TYPE_14__ {TYPE_1__ custext; } ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ RAW_EXTENSION ;
typedef TYPE_5__ EXTENSION_DEFINITION ;


 size_t FUNC_0 (TYPE_5__*) ;
 TYPE_5__* VAR_0 ;
 int FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (TYPE_3__*,size_t,int,TYPE_4__*,int *,size_t) ;

int FUNC_3(SSL *VAR_1, int VAR_2, RAW_EXTENSION *VAR_3, X509 *VAR_4,
                             size_t VAR_5, int VAR_6)
{
    size_t VAR_7, VAR_8 = FUNC_0(VAR_0);
    const EXTENSION_DEFINITION *VAR_9;


    VAR_8 += VAR_1->cert->custext.meths_count;


    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        if (!FUNC_2(VAR_1, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5)) {

            return 0;
        }
    }

    if (VAR_6) {




        for (VAR_7 = 0, VAR_9 = VAR_0; VAR_7 < FUNC_0(VAR_0);
             VAR_7++, VAR_9++) {
            if (VAR_9->final != ((void*)0) && (VAR_9->context & VAR_2) != 0
                && !VAR_9->final(VAR_1, VAR_2, VAR_3[VAR_7].present)) {

                return 0;
            }
        }
    }

    return 1;
}
