
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int optCt; TYPE_2__* pOptDesc; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_6__ {scalar_t__* pz_Name; int fOptState; scalar_t__* pz_DisableName; } ;
typedef TYPE_2__ tOptDesc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_2(tOptions * VAR_3, char const * VAR_4, int VAR_5,
             int * VAR_6, bool * VAR_7)
{
    int VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10 = VAR_3->optCt;
    tOptDesc * VAR_11 = VAR_3->pOptDesc;

    do {



        if (VAR_11->pz_Name == ((void*)0))
            continue;

        if ( FUNC_0(VAR_11)
           && (VAR_11->fOptState != (VAR_2 | VAR_1)))
            continue;

        if (FUNC_1(VAR_4, VAR_11->pz_Name, VAR_5) == 0) {




            if (VAR_11->pz_Name[ VAR_5 ] == VAR_0) {
                *VAR_6 = VAR_9;
                return 1;
            }
        }






        else if ( (VAR_11->pz_DisableName != ((void*)0))
                && (FUNC_1(VAR_4, VAR_11->pz_DisableName, VAR_5) == 0)
                ) {
            *VAR_7 = 1;





            if (VAR_11->pz_DisableName[ VAR_5 ] == VAR_0) {
                *VAR_6 = VAR_9;
                return 1;
            }
        }

        else
            continue;





        *VAR_6 = VAR_9;
        ++VAR_8;

    } while (VAR_11++, (++VAR_9 < VAR_10));

    return VAR_8;
}
