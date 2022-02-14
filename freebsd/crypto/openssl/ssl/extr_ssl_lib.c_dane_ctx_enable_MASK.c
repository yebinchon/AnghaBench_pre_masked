
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const* uint8_t ;
struct dane_ctx_st {int const* mdmax; int const** mdord; int const** mdevp; } ;
struct TYPE_3__ {scalar_t__ nid; size_t mtype; int * ord; } ;
typedef int EVP_MD ;


 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int const**) ;
 int ** FUNC_2 (int) ;
 size_t FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_5(struct dane_ctx_st *VAR_5)
{
    const EVP_MD **VAR_6;
    uint8_t *VAR_7;
    uint8_t VAR_8 = VAR_0;
    int VAR_9 = ((int)VAR_8) + 1;
    size_t VAR_10;

    if (VAR_5->mdevp != ((void*)0))
        return 1;

    VAR_6 = FUNC_2(VAR_9 * sizeof(*VAR_6));
    VAR_7 = FUNC_2(VAR_9 * sizeof(*VAR_7));

    if (VAR_7 == ((void*)0) || VAR_6 == ((void*)0)) {
        FUNC_1(VAR_7);
        FUNC_1(VAR_6);
        FUNC_4(VAR_3, VAR_1);
        return 0;
    }


    for (VAR_10 = 0; VAR_10 < FUNC_3(VAR_4); ++VAR_10) {
        const EVP_MD *VAR_11;

        if (VAR_4[VAR_10].nid == VAR_2 ||
            (VAR_11 = FUNC_0(VAR_4[VAR_10].nid)) == ((void*)0))
            continue;
        VAR_6[VAR_4[VAR_10].mtype] = VAR_11;
        VAR_7[VAR_4[VAR_10].mtype] = VAR_4[VAR_10].ord;
    }

    VAR_5->mdevp = VAR_6;
    VAR_5->mdord = VAR_7;
    VAR_5->mdmax = VAR_8;

    return 1;
}
