
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pzPROGNAME; } ;
typedef TYPE_1__ tOptions ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (char*,int ) ;
 size_t FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,size_t) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static char *
FUNC_5(tOptions * VAR_1, char * VAR_2)
{
    size_t VAR_3 = FUNC_2(VAR_1->pzPROGNAME);
    if ( (FUNC_3(VAR_2+1, VAR_1->pzPROGNAME, VAR_3) == 0)
        && (VAR_2[VAR_3+1] == ']'))
        return FUNC_1(VAR_2 + VAR_3 + 2, VAR_0);

    if (VAR_3 > 16)
        return ((void*)0);

    {
        char VAR_4[24];
        FUNC_0(VAR_4, "[%s]", VAR_1->pzPROGNAME);
        VAR_2 = FUNC_4(VAR_2, VAR_4);
    }

    if (VAR_2 != ((void*)0))
        VAR_2 = FUNC_1(VAR_2, VAR_0);
    return VAR_2;
}
