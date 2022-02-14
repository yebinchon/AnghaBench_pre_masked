
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int operation; TYPE_1__* pmeth; } ;
struct TYPE_5__ {int (* ctrl ) (TYPE_2__*,int,int,void*) ;int pkey_id; int * digest_custom; } ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,int,void*) ;

int FUNC_2(EVP_PKEY_CTX *VAR_5, int VAR_6, int VAR_7,
                      int VAR_8, int VAR_9, void *VAR_10)
{
    int VAR_11;

    if (!VAR_5 || !VAR_5->pmeth || !VAR_5->pmeth->ctrl) {
        FUNC_0(VAR_0, VAR_2);
        return -2;
    }
    if ((VAR_6 != -1) && (VAR_5->pmeth->pkey_id != VAR_6))
        return -1;


    if (VAR_5->pmeth->digest_custom != ((void*)0))
        goto doit;

    if (VAR_5->operation == VAR_1) {
        FUNC_0(VAR_0, VAR_4);
        return -1;
    }

    if ((VAR_7 != -1) && !(VAR_5->operation & VAR_7)) {
        FUNC_0(VAR_0, VAR_3);
        return -1;
    }

 doit:
    VAR_11 = VAR_5->pmeth->ctrl(VAR_5, VAR_8, VAR_9, VAR_10);

    if (VAR_11 == -2)
        FUNC_0(VAR_0, VAR_2);

    return VAR_11;
}
