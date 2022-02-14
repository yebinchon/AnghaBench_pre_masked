
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int nid; int uptodate; int * funct; int sk; } ;
struct TYPE_10__ {int piles; } ;
typedef TYPE_1__ ENGINE_TABLE ;
typedef TYPE_2__ ENGINE_PILE ;
typedef int ENGINE_CLEANUP_CB ;
typedef int ENGINE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__**,int) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (int *,TYPE_2__*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int *) ;

int FUNC_15(ENGINE_TABLE **VAR_3, ENGINE_CLEANUP_CB *VAR_4,
                          ENGINE *VAR_5, const int *VAR_6, int VAR_7,
                          int VAR_8)
{
    int VAR_9 = 0, VAR_10 = 0;
    ENGINE_PILE VAR_11, *VAR_12;
    FUNC_1(VAR_2);
    if (!(*VAR_3))
        VAR_10 = 1;
    if (!FUNC_8(VAR_3, 1))
        goto end;
    if (VAR_10)

        FUNC_5(VAR_4);
    while (VAR_7--) {
        VAR_11.nid = *VAR_6;
        VAR_12 = FUNC_10(&(*VAR_3)->piles, &VAR_11);
        if (!VAR_12) {
            VAR_12 = FUNC_4(sizeof(*VAR_12));
            if (VAR_12 == ((void*)0))
                goto end;
            VAR_12->uptodate = 1;
            VAR_12->nid = *VAR_6;
            VAR_12->sk = FUNC_13();
            if (!VAR_12->sk) {
                FUNC_3(VAR_12);
                goto end;
            }
            VAR_12->funct = ((void*)0);
            (void)FUNC_9(&(*VAR_3)->piles, VAR_12);
            if (FUNC_10(&(*VAR_3)->piles, &VAR_11) != VAR_12) {
                FUNC_12(VAR_12->sk);
                FUNC_3(VAR_12);
                goto end;
            }
        }

        (void)FUNC_11(VAR_12->sk, VAR_5);



        if (!FUNC_14(VAR_12->sk, VAR_5))
            goto end;

        VAR_12->uptodate = 0;
        if (VAR_8) {
            if (!FUNC_7(VAR_5)) {
                FUNC_2(VAR_0,
                          VAR_1);
                goto end;
            }
            if (VAR_12->funct)
                FUNC_6(VAR_12->funct, 0);
            VAR_12->funct = VAR_5;
            VAR_12->uptodate = 1;
        }
        VAR_6++;
    }
    VAR_9 = 1;
 end:
    FUNC_0(VAR_2);
    return VAR_9;
}
