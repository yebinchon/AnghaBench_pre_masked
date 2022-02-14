
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* pz_DisableName; char* pz_Name; } ;
typedef TYPE_1__ tOptDesc ;
typedef int FILE ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,char const*) ;

__attribute__((used)) static void
FUNC_2(FILE * VAR_0, tOptDesc * VAR_1, tOptDesc * VAR_2)
{





    char const * VAR_3 =
        (FUNC_0(VAR_1)) ? VAR_2->pz_DisableName : VAR_2->pz_Name;





    if (VAR_3 == ((void*)0))
        VAR_3 = VAR_2->pz_Name;

    FUNC_1(VAR_0, "%s\n", VAR_3);
}
