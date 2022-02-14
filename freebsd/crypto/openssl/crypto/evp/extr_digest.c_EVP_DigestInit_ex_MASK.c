
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; int (* init ) (TYPE_1__*) ;scalar_t__ ctx_size; int update; } ;
struct TYPE_9__ {int flags; TYPE_2__ const* digest; scalar_t__ pctx; int * md_data; int update; int * engine; } ;
typedef TYPE_1__ EVP_MD_CTX ;
typedef TYPE_2__ const EVP_MD ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 TYPE_2__ const* FUNC_1 (int *,scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__,int,int ,int ,int ,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 int * FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;

int FUNC_10(EVP_MD_CTX *VAR_8, const EVP_MD *VAR_9, ENGINE *VAR_10)
{
    FUNC_4(VAR_8, VAR_2);







    if (VAR_8->engine && VAR_8->digest &&
        (VAR_9 == ((void*)0) || (VAR_9->type == VAR_8->digest->type)))
        goto skip_to_init;
    if (VAR_9) {





        FUNC_0(VAR_8->engine);
        if (VAR_10 != ((void*)0)) {
            if (!FUNC_3(VAR_10)) {
                FUNC_6(VAR_1, VAR_6);
                return 0;
            }
        } else {

            VAR_10 = FUNC_2(VAR_9->type);
        }
        if (VAR_10 != ((void*)0)) {

            const EVP_MD *VAR_11 = FUNC_1(VAR_10, VAR_9->type);

            if (VAR_11 == ((void*)0)) {
                FUNC_6(VAR_1, VAR_6);
                FUNC_0(VAR_10);
                return 0;
            }

            VAR_9 = VAR_11;




            VAR_8->engine = VAR_10;
        } else
            VAR_8->engine = ((void*)0);
    } else {
        if (!VAR_8->digest) {
            FUNC_6(VAR_1, VAR_7);
            return 0;
        }
        VAR_9 = VAR_8->digest;
    }

    if (VAR_8->digest != VAR_9) {
        if (VAR_8->digest && VAR_8->digest->ctx_size) {
            FUNC_7(VAR_8->md_data, VAR_8->digest->ctx_size);
            VAR_8->md_data = ((void*)0);
        }
        VAR_8->digest = VAR_9;
        if (!(VAR_8->flags & VAR_3) && VAR_9->ctx_size) {
            VAR_8->update = VAR_9->update;
            VAR_8->md_data = FUNC_8(VAR_9->ctx_size);
            if (VAR_8->md_data == ((void*)0)) {
                FUNC_6(VAR_1, VAR_0);
                return 0;
            }
        }
    }

 skip_to_init:

    if (VAR_8->pctx) {
        int VAR_12;
        VAR_12 = FUNC_5(VAR_8->pctx, -1, VAR_5,
                              VAR_4, 0, VAR_8);
        if (VAR_12 <= 0 && (VAR_12 != -2))
            return 0;
    }
    if (VAR_8->flags & VAR_3)
        return 1;
    return VAR_8->digest->init(VAR_8);
}
