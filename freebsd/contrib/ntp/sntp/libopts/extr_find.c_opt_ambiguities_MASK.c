
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int optCt; TYPE_2__* pOptDesc; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_6__ {int * pz_DisableName; int * pz_Name; } ;
typedef TYPE_2__ tOptDesc ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,char const* const,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char const*,int *,int) ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(tOptions * VAR_4, char const * VAR_5, int VAR_6)
{
    char const * const VAR_7 =
        FUNC_0(VAR_4) ? "" : VAR_0;

    tOptDesc * VAR_8 = VAR_4->pOptDesc;
    int VAR_9 = 0;

    FUNC_2(VAR_3, VAR_1);
    do {
        if (VAR_8->pz_Name == ((void*)0))
            continue;

        if (FUNC_3(VAR_5, VAR_8->pz_Name, VAR_6) == 0)
            FUNC_1(VAR_1, VAR_2, VAR_7, VAR_8->pz_Name);

        else if ( (VAR_8->pz_DisableName != ((void*)0))
                && (FUNC_3(VAR_5, VAR_8->pz_DisableName, VAR_6) == 0)
                )
            FUNC_1(VAR_1, VAR_2, VAR_7, VAR_8->pz_DisableName);
    } while (VAR_8++, (++VAR_9 < VAR_4->optCt));
}
