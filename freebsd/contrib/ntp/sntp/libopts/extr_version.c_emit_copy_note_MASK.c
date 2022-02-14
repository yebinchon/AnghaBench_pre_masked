
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pzBugAddr; int * pzPackager; int * pzCopyNotice; int * pzCopyright; } ;
typedef TYPE_1__ tOptions ;
typedef int FILE ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 () ;
 char* VAR_1 ;
 char* VAR_2 ;

__attribute__((used)) static void
FUNC_5(tOptions * VAR_3, FILE * VAR_4)
{
    if (VAR_3->pzCopyright != ((void*)0))
        FUNC_3(VAR_3->pzCopyright, VAR_4);

    if (VAR_3->pzCopyNotice != ((void*)0))
        FUNC_3(VAR_3->pzCopyNotice, VAR_4);

    FUNC_2(VAR_0, VAR_4);
    FUNC_1(VAR_4, VAR_2, FUNC_4());

    if (FUNC_0(VAR_3) && (VAR_3->pzPackager != ((void*)0))) {
        FUNC_2(VAR_0, VAR_4);
        FUNC_3(VAR_3->pzPackager, VAR_4);

    } else if (VAR_3->pzBugAddr != ((void*)0)) {
        FUNC_2(VAR_0, VAR_4);
        FUNC_1(VAR_4, VAR_1, VAR_3->pzBugAddr);
    }
}
