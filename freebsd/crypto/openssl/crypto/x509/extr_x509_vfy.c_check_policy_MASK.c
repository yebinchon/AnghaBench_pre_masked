
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int (* verify_cb ) (int,TYPE_2__*) ;int * current_cert; TYPE_1__* param; void* error; int chain; scalar_t__ bare_ta_signed; int explicit_policy; int tree; scalar_t__ parent; } ;
typedef TYPE_2__ X509_STORE_CTX ;
struct TYPE_12__ {int ex_flags; } ;
typedef TYPE_3__ X509 ;
struct TYPE_10__ {int flags; int policies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int *,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 TYPE_3__* FUNC_5 (int ,int) ;
 int FUNC_6 (int,TYPE_2__*) ;
 int FUNC_7 (int,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,int,int ) ;

__attribute__((used)) static int FUNC_9(X509_STORE_CTX *VAR_12)
{
    int VAR_13;

    if (VAR_12->parent)
        return 1;
    if (VAR_12->bare_ta_signed && !FUNC_4(VAR_12->chain, ((void*)0))) {
        FUNC_1(VAR_3, VAR_1);
        VAR_12->error = VAR_10;
        return 0;
    }
    VAR_13 = FUNC_0(&VAR_12->tree, &VAR_12->explicit_policy, VAR_12->chain,
                            VAR_12->param->policies, VAR_12->param->flags);
    if (VAR_12->bare_ta_signed)
        FUNC_3(VAR_12->chain);

    if (VAR_13 == VAR_5) {
        FUNC_1(VAR_3, VAR_1);
        VAR_12->error = VAR_10;
        return 0;
    }

    if (VAR_13 == VAR_6) {
        int VAR_14;


        for (VAR_14 = 1; VAR_14 < FUNC_2(VAR_12->chain); VAR_14++) {
            X509 *VAR_15 = FUNC_5(VAR_12->chain, VAR_14);

            if (!(VAR_15->ex_flags & VAR_2))
                continue;
            if (!FUNC_8(VAR_12, VAR_15, VAR_14,
                                VAR_8))
                return 0;
        }
        return 1;
    }
    if (VAR_13 == VAR_4) {
        VAR_12->current_cert = ((void*)0);
        VAR_12->error = VAR_9;
        return VAR_12->verify_cb(0, VAR_12);
    }
    if (VAR_13 != VAR_7) {
        FUNC_1(VAR_3, VAR_0);
        return 0;
    }

    if (VAR_12->param->flags & VAR_11) {
        VAR_12->current_cert = ((void*)0);






        if (!VAR_12->verify_cb(2, VAR_12))
            return 0;
    }

    return 1;
}
