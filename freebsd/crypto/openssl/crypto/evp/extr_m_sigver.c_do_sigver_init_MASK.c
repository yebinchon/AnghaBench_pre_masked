
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {TYPE_2__* pctx; void* update; } ;
struct TYPE_18__ {TYPE_1__* pmeth; int operation; } ;
struct TYPE_17__ {int flags; scalar_t__ (* verifyctx_init ) (TYPE_2__*,TYPE_3__*) ;scalar_t__ digestverify; scalar_t__ (* signctx_init ) (TYPE_2__*,TYPE_3__*) ;scalar_t__ digestsign; int (* digest_custom ) (TYPE_2__*,TYPE_3__*) ;} ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef TYPE_3__ EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int ENGINE ;


 int FUNC_0 (TYPE_3__*,int const*,int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_6 ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*) ;
 void* VAR_7 ;

__attribute__((used)) static int FUNC_11(EVP_MD_CTX *VAR_8, EVP_PKEY_CTX **VAR_9,
                          const EVP_MD *VAR_10, ENGINE *VAR_11, EVP_PKEY *VAR_12,
                          int VAR_13)
{
    if (VAR_8->pctx == ((void*)0))
        VAR_8->pctx = FUNC_1(VAR_12, VAR_11);
    if (VAR_8->pctx == ((void*)0))
        return 0;

    if (!(VAR_8->pctx->pmeth->flags & VAR_1)) {

        if (VAR_10 == ((void*)0)) {
            int VAR_14;
            if (FUNC_3(VAR_12, &VAR_14) > 0)
                VAR_10 = FUNC_6(VAR_14);
        }

        if (VAR_10 == ((void*)0)) {
            FUNC_7(VAR_0, VAR_6);
            return 0;
        }
    }

    if (VAR_13) {
        if (VAR_8->pctx->pmeth->verifyctx_init) {
            if (VAR_8->pctx->pmeth->verifyctx_init(VAR_8->pctx, VAR_8) <= 0)
                return 0;
            VAR_8->pctx->operation = VAR_5;
        } else if (VAR_8->pctx->pmeth->digestverify != 0) {
            VAR_8->pctx->operation = VAR_4;
            VAR_8->update = VAR_7;
        } else if (FUNC_5(VAR_8->pctx) <= 0) {
            return 0;
        }
    } else {
        if (VAR_8->pctx->pmeth->signctx_init) {
            if (VAR_8->pctx->pmeth->signctx_init(VAR_8->pctx, VAR_8) <= 0)
                return 0;
            VAR_8->pctx->operation = VAR_3;
        } else if (VAR_8->pctx->pmeth->digestsign != 0) {
            VAR_8->pctx->operation = VAR_2;
            VAR_8->update = VAR_7;
        } else if (FUNC_4(VAR_8->pctx) <= 0) {
            return 0;
        }
    }
    if (FUNC_2(VAR_8->pctx, VAR_10) <= 0)
        return 0;
    if (VAR_9)
        *VAR_9 = VAR_8->pctx;
    if (VAR_8->pctx->pmeth->flags & VAR_1)
        return 1;
    if (!FUNC_0(VAR_8, VAR_10, VAR_11))
        return 0;




    if (VAR_8->pctx->pmeth->digest_custom != ((void*)0))
        return VAR_8->pctx->pmeth->digest_custom(VAR_8->pctx, VAR_8);

    return 1;
}
