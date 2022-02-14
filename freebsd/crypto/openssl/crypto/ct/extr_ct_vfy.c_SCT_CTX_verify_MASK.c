
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ entry_type; scalar_t__ version; scalar_t__ log_id_len; scalar_t__ timestamp; int sig_len; int sig; int log_id; } ;
struct TYPE_8__ {scalar_t__ pkeyhashlen; scalar_t__ epoch_time_in_ms; int * pkey; int pkeyhash; int * ihash; } ;
typedef TYPE_1__ SCT_CTX ;
typedef TYPE_2__ SCT ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int *,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (TYPE_2__ const*) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int *,TYPE_1__ const*,TYPE_2__ const*) ;

int FUNC_9(const SCT_CTX *VAR_9, const SCT *VAR_10)
{
    EVP_MD_CTX *VAR_11 = ((void*)0);
    int VAR_12 = 0;

    if (!FUNC_6(VAR_10) || VAR_9->pkey == ((void*)0) ||
        VAR_10->entry_type == VAR_1 ||
        (VAR_10->entry_type == VAR_2 && VAR_9->ihash == ((void*)0))) {
        FUNC_0(VAR_0, VAR_6);
        return 0;
    }
    if (VAR_10->version != VAR_8) {
        FUNC_0(VAR_0, VAR_7);
        return 0;
    }
    if (VAR_10->log_id_len != VAR_9->pkeyhashlen ||
        FUNC_7(VAR_10->log_id, VAR_9->pkeyhash, VAR_9->pkeyhashlen) != 0) {
        FUNC_0(VAR_0, VAR_5);
        return 0;
    }
    if (VAR_10->timestamp > VAR_9->epoch_time_in_ms) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }

    VAR_11 = FUNC_4();
    if (VAR_11 == ((void*)0))
        goto end;

    if (!FUNC_2(VAR_11, ((void*)0), FUNC_5(), ((void*)0), VAR_9->pkey))
        goto end;

    if (!FUNC_8(VAR_11, VAR_9, VAR_10))
        goto end;


    VAR_12 = FUNC_1(VAR_11, VAR_10->sig, VAR_10->sig_len);

    if (VAR_12 == 0)
        FUNC_0(VAR_0, VAR_4);

end:
    FUNC_3(VAR_11);
    return VAR_12;
}
