
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int felem_bytearray ;
typedef int felem ;
struct TYPE_15__ {TYPE_12__* generator; } ;
struct TYPE_14__ {int *** g_pre_comp; } ;
struct TYPE_13__ {int Z; int Y; int X; } ;
typedef TYPE_1__ NISTP224_PRE_COMP ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *,TYPE_12__*,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int *,int *,int *,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_14 (int,int **,int *) ;
 int FUNC_15 (int ***,int ,int) ;
 int FUNC_16 (int *,int ,int) ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_1__* FUNC_17 () ;
 int FUNC_18 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_19 (int ,int ,int ,int ,int ,int ) ;

int FUNC_20(EC_GROUP *VAR_3, BN_CTX *VAR_4)
{
    int VAR_5 = 0;
    NISTP224_PRE_COMP *VAR_6 = ((void*)0);
    int VAR_7, VAR_8;
    BN_CTX *VAR_9 = ((void*)0);
    BIGNUM *VAR_10, *VAR_11;
    EC_POINT *VAR_12 = ((void*)0);
    felem VAR_13[32];


    FUNC_12(VAR_3);
    if (VAR_4 == ((void*)0))
        if ((VAR_4 = VAR_9 = FUNC_3()) == ((void*)0))
            return 0;
    FUNC_4(VAR_4);
    VAR_10 = FUNC_2(VAR_4);
    VAR_11 = FUNC_2(VAR_4);
    if (VAR_11 == ((void*)0))
        goto err;

    if (VAR_3->generator == ((void*)0))
        goto err;
    VAR_12 = FUNC_9(VAR_3);
    if (VAR_12 == ((void*)0))
        goto err;
    FUNC_5(VAR_2[3], sizeof(felem_bytearray), VAR_10);
    FUNC_5(VAR_2[4], sizeof(felem_bytearray), VAR_11);
    if (!FUNC_10(VAR_3, VAR_12, VAR_10, VAR_11, VAR_4))
        goto err;
    if ((VAR_6 = FUNC_17()) == ((void*)0))
        goto err;



    if (0 == FUNC_7(VAR_3, VAR_12, VAR_3->generator, VAR_4)) {
        FUNC_15(VAR_6->g_pre_comp, VAR_0, sizeof(VAR_6->g_pre_comp));
        goto done;
    }
    if ((!FUNC_6(VAR_6->g_pre_comp[0][1][0], VAR_3->generator->X)) ||
        (!FUNC_6(VAR_6->g_pre_comp[0][1][1], VAR_3->generator->Y)) ||
        (!FUNC_6(VAR_6->g_pre_comp[0][1][2], VAR_3->generator->Z)))
        goto err;




    for (VAR_7 = 1; VAR_7 <= 8; VAR_7 <<= 1) {
        FUNC_19(VAR_6->g_pre_comp[1][VAR_7][0], VAR_6->g_pre_comp[1][VAR_7][1],
                     VAR_6->g_pre_comp[1][VAR_7][2], VAR_6->g_pre_comp[0][VAR_7][0],
                     VAR_6->g_pre_comp[0][VAR_7][1], VAR_6->g_pre_comp[0][VAR_7][2]);
        for (VAR_8 = 0; VAR_8 < 27; ++VAR_8) {
            FUNC_19(VAR_6->g_pre_comp[1][VAR_7][0], VAR_6->g_pre_comp[1][VAR_7][1],
                         VAR_6->g_pre_comp[1][VAR_7][2], VAR_6->g_pre_comp[1][VAR_7][0],
                         VAR_6->g_pre_comp[1][VAR_7][1], VAR_6->g_pre_comp[1][VAR_7][2]);
        }
        if (VAR_7 == 8)
            break;
        FUNC_19(VAR_6->g_pre_comp[0][2 * VAR_7][0],
                     VAR_6->g_pre_comp[0][2 * VAR_7][1],
                     VAR_6->g_pre_comp[0][2 * VAR_7][2], VAR_6->g_pre_comp[1][VAR_7][0],
                     VAR_6->g_pre_comp[1][VAR_7][1], VAR_6->g_pre_comp[1][VAR_7][2]);
        for (VAR_8 = 0; VAR_8 < 27; ++VAR_8) {
            FUNC_19(VAR_6->g_pre_comp[0][2 * VAR_7][0],
                         VAR_6->g_pre_comp[0][2 * VAR_7][1],
                         VAR_6->g_pre_comp[0][2 * VAR_7][2],
                         VAR_6->g_pre_comp[0][2 * VAR_7][0],
                         VAR_6->g_pre_comp[0][2 * VAR_7][1],
                         VAR_6->g_pre_comp[0][2 * VAR_7][2]);
        }
    }
    for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {

        FUNC_16(VAR_6->g_pre_comp[VAR_7][0], 0, sizeof(VAR_6->g_pre_comp[VAR_7][0]));


        FUNC_18(VAR_6->g_pre_comp[VAR_7][6][0], VAR_6->g_pre_comp[VAR_7][6][1],
                  VAR_6->g_pre_comp[VAR_7][6][2], VAR_6->g_pre_comp[VAR_7][4][0],
                  VAR_6->g_pre_comp[VAR_7][4][1], VAR_6->g_pre_comp[VAR_7][4][2],
                  0, VAR_6->g_pre_comp[VAR_7][2][0], VAR_6->g_pre_comp[VAR_7][2][1],
                  VAR_6->g_pre_comp[VAR_7][2][2]);

        FUNC_18(VAR_6->g_pre_comp[VAR_7][10][0], VAR_6->g_pre_comp[VAR_7][10][1],
                  VAR_6->g_pre_comp[VAR_7][10][2], VAR_6->g_pre_comp[VAR_7][8][0],
                  VAR_6->g_pre_comp[VAR_7][8][1], VAR_6->g_pre_comp[VAR_7][8][2],
                  0, VAR_6->g_pre_comp[VAR_7][2][0], VAR_6->g_pre_comp[VAR_7][2][1],
                  VAR_6->g_pre_comp[VAR_7][2][2]);

        FUNC_18(VAR_6->g_pre_comp[VAR_7][12][0], VAR_6->g_pre_comp[VAR_7][12][1],
                  VAR_6->g_pre_comp[VAR_7][12][2], VAR_6->g_pre_comp[VAR_7][8][0],
                  VAR_6->g_pre_comp[VAR_7][8][1], VAR_6->g_pre_comp[VAR_7][8][2],
                  0, VAR_6->g_pre_comp[VAR_7][4][0], VAR_6->g_pre_comp[VAR_7][4][1],
                  VAR_6->g_pre_comp[VAR_7][4][2]);



        FUNC_18(VAR_6->g_pre_comp[VAR_7][14][0], VAR_6->g_pre_comp[VAR_7][14][1],
                  VAR_6->g_pre_comp[VAR_7][14][2], VAR_6->g_pre_comp[VAR_7][12][0],
                  VAR_6->g_pre_comp[VAR_7][12][1], VAR_6->g_pre_comp[VAR_7][12][2],
                  0, VAR_6->g_pre_comp[VAR_7][2][0], VAR_6->g_pre_comp[VAR_7][2][1],
                  VAR_6->g_pre_comp[VAR_7][2][2]);
        for (VAR_8 = 1; VAR_8 < 8; ++VAR_8) {

            FUNC_18(VAR_6->g_pre_comp[VAR_7][2 * VAR_8 + 1][0],
                      VAR_6->g_pre_comp[VAR_7][2 * VAR_8 + 1][1],
                      VAR_6->g_pre_comp[VAR_7][2 * VAR_8 + 1][2],
                      VAR_6->g_pre_comp[VAR_7][2 * VAR_8][0],
                      VAR_6->g_pre_comp[VAR_7][2 * VAR_8][1],
                      VAR_6->g_pre_comp[VAR_7][2 * VAR_8][2], 0,
                      VAR_6->g_pre_comp[VAR_7][1][0], VAR_6->g_pre_comp[VAR_7][1][1],
                      VAR_6->g_pre_comp[VAR_7][1][2]);
        }
    }
    FUNC_14(31, &(VAR_6->g_pre_comp[0][1]), VAR_13);

 done:
    FUNC_13(VAR_3, VAR_1, VAR_6);
    VAR_6 = ((void*)0);
    VAR_5 = 1;
 err:
    FUNC_0(VAR_4);
    FUNC_8(VAR_12);
    FUNC_1(VAR_9);
    FUNC_11(VAR_6);
    return VAR_5;
}
