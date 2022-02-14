
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_18__ {scalar_t__ type; } ;
struct TYPE_17__ {scalar_t__ operation; TYPE_3__* peerkey; TYPE_1__* pmeth; TYPE_13__* pkey; } ;
struct TYPE_16__ {int (* ctrl ) (TYPE_2__*,int ,int,TYPE_3__*) ;scalar_t__ decrypt; scalar_t__ encrypt; scalar_t__ derive; } ;
struct TYPE_15__ {scalar_t__ type; } ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef TYPE_3__ EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_13__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,int ,int,TYPE_3__*) ;

int FUNC_7(EVP_PKEY_CTX *VAR_10, EVP_PKEY *VAR_11)
{
    int VAR_12;
    if (!VAR_10 || !VAR_10->pmeth
        || !(VAR_10->pmeth->derive || VAR_10->pmeth->encrypt || VAR_10->pmeth->decrypt)
        || !VAR_10->pmeth->ctrl) {
        FUNC_4(VAR_0,
               VAR_8);
        return -2;
    }
    if (VAR_10->operation != VAR_3
        && VAR_10->operation != VAR_4
        && VAR_10->operation != VAR_2) {
        FUNC_4(VAR_0,
               VAR_9);
        return -1;
    }

    VAR_12 = VAR_10->pmeth->ctrl(VAR_10, VAR_1, 0, VAR_11);

    if (VAR_12 <= 0)
        return VAR_12;

    if (VAR_12 == 2)
        return 1;

    if (!VAR_10->pkey) {
        FUNC_4(VAR_0, VAR_7);
        return -1;
    }

    if (VAR_10->pkey->type != VAR_11->type) {
        FUNC_4(VAR_0, VAR_5);
        return -1;
    }
    if (!FUNC_2(VAR_11) &&
        !FUNC_0(VAR_10->pkey, VAR_11)) {
        FUNC_4(VAR_0, VAR_6);
        return -1;
    }

    FUNC_1(VAR_10->peerkey);
    VAR_10->peerkey = VAR_11;

    VAR_12 = VAR_10->pmeth->ctrl(VAR_10, VAR_1, 1, VAR_11);

    if (VAR_12 <= 0) {
        VAR_10->peerkey = ((void*)0);
        return VAR_12;
    }

    FUNC_3(VAR_11);
    return 1;
}
