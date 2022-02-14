
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {void* error; TYPE_1__* param; int chain; scalar_t__ parent; } ;
typedef TYPE_2__ X509_STORE_CTX ;
struct TYPE_13__ {int ex_flags; int ex_pathlen; int ex_pcpathlen; } ;
typedef TYPE_3__ X509 ;
struct TYPE_11__ {int flags; int purpose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int,int,int) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int,int ) ;

__attribute__((used)) static int FUNC_5(X509_STORE_CTX *VAR_14)
{
    int VAR_15, VAR_16, VAR_17 = 0;
    X509 *VAR_18;
    int VAR_19 = 0;
    int VAR_20;
    int VAR_21;
    int VAR_22 = FUNC_2(VAR_14->chain);
    VAR_16 = -1;


    if (VAR_14->parent) {
        VAR_21 = 0;
        VAR_20 = VAR_3;
    } else {
        VAR_21 =
            ! !(VAR_14->param->flags & VAR_10);
        VAR_20 = VAR_14->param->purpose;
    }

    for (VAR_15 = 0; VAR_15 < VAR_22; VAR_15++) {
        int VAR_23;
        VAR_18 = FUNC_3(VAR_14->chain, VAR_15);
        if (!(VAR_14->param->flags & VAR_11)
            && (VAR_18->ex_flags & VAR_0)) {
            if (!FUNC_4(VAR_14, VAR_18, VAR_15,
                                VAR_9))
                return 0;
        }
        if (!VAR_21 && (VAR_18->ex_flags & VAR_1)) {
            if (!FUNC_4(VAR_14, VAR_18, VAR_15,
                                VAR_7))
                return 0;
        }
        VAR_23 = FUNC_0(VAR_18);
        switch (VAR_16) {
        case -1:
            if ((VAR_14->param->flags & VAR_12)
                && (VAR_23 != 1) && (VAR_23 != 0)) {
                VAR_23 = 0;
                VAR_14->error = VAR_4;
            } else
                VAR_23 = 1;
            break;
        case 0:
            if (VAR_23 != 0) {
                VAR_23 = 0;
                VAR_14->error = VAR_5;
            } else
                VAR_23 = 1;
            break;
        default:

            if ((VAR_23 == 0)
                || ((VAR_15 + 1 < VAR_22 || VAR_14->param->flags & VAR_12)
                    && (VAR_23 != 1))) {
                VAR_23 = 0;
                VAR_14->error = VAR_4;
            } else
                VAR_23 = 1;
            break;
        }
        if (VAR_23 == 0 && !FUNC_4(VAR_14, VAR_18, VAR_15, VAR_13))
            return 0;

        if (VAR_20 > 0 && !FUNC_1(VAR_14, VAR_18, VAR_20, VAR_15, VAR_16))
            return 0;

        if ((VAR_15 > 1) && (VAR_18->ex_pathlen != -1)
            && (VAR_17 > (VAR_18->ex_pathlen + VAR_19))) {
            if (!FUNC_4(VAR_14, VAR_18, VAR_15, VAR_6))
                return 0;
        }

        if (VAR_15 > 0 && (VAR_18->ex_flags & VAR_2) == 0)
            VAR_17++;





        if (VAR_18->ex_flags & VAR_1) {
            if (VAR_18->ex_pcpathlen != -1) {
                if (VAR_19 > VAR_18->ex_pcpathlen) {
                    if (!FUNC_4(VAR_14, VAR_18, VAR_15,
                                        VAR_8))
                        return 0;
                }
                VAR_19 = VAR_18->ex_pcpathlen;
            }
            VAR_19++;
            VAR_16 = 0;
        } else
            VAR_16 = 1;
    }
    return 1;
}
