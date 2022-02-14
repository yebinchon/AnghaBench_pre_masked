
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char version; size_t log_id_len; size_t ext_len; size_t sct_len; int * sct; int * ext; int timestamp; int * log_id; } ;
typedef TYPE_1__ SCT ;


 void* FUNC_0 (unsigned char const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (unsigned char const*,int ) ;
 int FUNC_5 (unsigned char const*,size_t) ;
 int FUNC_6 (TYPE_1__*,unsigned char const**,size_t) ;

SCT *FUNC_7(SCT **VAR_5, const unsigned char **VAR_6, size_t VAR_7)
{
    SCT *VAR_8 = ((void*)0);
    const unsigned char *VAR_9;

    if (VAR_7 == 0 || VAR_7 > VAR_3) {
        FUNC_1(VAR_0, VAR_1);
        goto err;
    }

    if ((VAR_8 = FUNC_3()) == ((void*)0))
        goto err;

    VAR_9 = *VAR_6;

    VAR_8->version = *VAR_9;
    if (VAR_8->version == VAR_4) {
        int VAR_10;
        size_t VAR_11;
        if (VAR_7 < 43) {
            FUNC_1(VAR_0, VAR_1);
            goto err;
        }
        VAR_7 -= 43;
        VAR_9++;
        VAR_8->log_id = FUNC_0(VAR_9, VAR_2);
        if (VAR_8->log_id == ((void*)0))
            goto err;
        VAR_8->log_id_len = VAR_2;
        VAR_9 += VAR_2;

        FUNC_4(VAR_9, VAR_8->timestamp);

        FUNC_5(VAR_9, VAR_11);
        if (VAR_7 < VAR_11) {
            FUNC_1(VAR_0, VAR_1);
            goto err;
        }
        if (VAR_11 > 0) {
            VAR_8->ext = FUNC_0(VAR_9, VAR_11);
            if (VAR_8->ext == ((void*)0))
                goto err;
        }
        VAR_8->ext_len = VAR_11;
        VAR_9 += VAR_11;
        VAR_7 -= VAR_11;

        VAR_10 = FUNC_6(VAR_8, &VAR_9, VAR_7);
        if (VAR_10 <= 0) {
            FUNC_1(VAR_0, VAR_1);
            goto err;
        }
        VAR_7 -= VAR_10;
        *VAR_6 = VAR_9 + VAR_7;
    } else {

        VAR_8->sct = FUNC_0(VAR_9, VAR_7);
        if (VAR_8->sct == ((void*)0))
            goto err;
        VAR_8->sct_len = VAR_7;
        *VAR_6 = VAR_9 + VAR_7;
    }

    if (VAR_5 != ((void*)0)) {
        FUNC_2(*VAR_5);
        *VAR_5 = VAR_8;
    }

    return VAR_8;
err:
    FUNC_2(VAR_8);
    return ((void*)0);
}
