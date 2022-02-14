
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pzProgName; TYPE_2__* pOptDesc; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_8__ {int* pOptMust; int* pOptCant; int pz_Name; } ;
typedef TYPE_2__ tOptDesc ;


 int const VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;

__attribute__((used)) static bool
FUNC_3(tOptions * VAR_4, tOptDesc * VAR_5)
{
    if (VAR_5->pOptMust != ((void*)0)) {
        int const * VAR_6 = VAR_5->pOptMust;

        while (*VAR_6 != VAR_0) {
            tOptDesc * VAR_7 = VAR_4->pOptDesc + *(VAR_6++);
            if (FUNC_1(VAR_7)) {
                const tOptDesc * VAR_8 = VAR_4->pOptDesc + VAR_6[-1];
                FUNC_2(VAR_1, VAR_3, VAR_4->pzProgName,
                        VAR_5->pz_Name, VAR_8->pz_Name);
                return 1;
            }
        }
    }

    if (VAR_5->pOptCant != ((void*)0)) {
        int const * VAR_9 = VAR_5->pOptCant;

        while (*VAR_9 != VAR_0) {
            tOptDesc * VAR_10 = VAR_4->pOptDesc + *(VAR_9++);
            if (FUNC_0(VAR_10)) {
                const tOptDesc * VAR_11 = VAR_4->pOptDesc + VAR_9[-1];
                FUNC_2(VAR_1, VAR_2, VAR_4->pzProgName,
                        VAR_5->pz_Name, VAR_11->pz_Name);
                return 1;
            }
        }
    }

    return 0;
}
