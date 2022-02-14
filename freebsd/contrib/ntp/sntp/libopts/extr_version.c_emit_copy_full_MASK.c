
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pzBugAddr; int * pzPackager; int pzUsageTitle; int * pzFullVersion; int * pzCopyright; } ;
typedef TYPE_1__ tOptions ;
typedef int FILE ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *,int *) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int *) ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_5(tOptions * VAR_2, FILE * VAR_3)
{
    if (VAR_2->pzCopyright != ((void*)0))
        FUNC_4(VAR_2->pzCopyright, VAR_3);

    else if (VAR_2->pzFullVersion != ((void*)0))
        FUNC_4(VAR_2->pzFullVersion, VAR_3);

    else
        FUNC_1(VAR_3, VAR_2->pzUsageTitle, ((void*)0), ((void*)0));

    if (FUNC_0(VAR_2) && (VAR_2->pzPackager != ((void*)0))) {
        FUNC_3(VAR_0, VAR_3);
        FUNC_4(VAR_2->pzPackager, VAR_3);

    } else if (VAR_2->pzBugAddr != ((void*)0)) {
        FUNC_3(VAR_0, VAR_3);
        FUNC_2(VAR_3, VAR_1, VAR_2->pzBugAddr);
    }
}
