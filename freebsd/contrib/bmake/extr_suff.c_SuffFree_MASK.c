
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* name; int searchPath; int parents; int children; int ref; scalar_t__ refCount; } ;
typedef TYPE_1__ Suff ;


 int * VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,TYPE_1__*,scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
    Suff *VAR_4 = (Suff *)VAR_3;

    if (VAR_4 == VAR_2)
 VAR_2 = ((void*)0);

    if (VAR_4 == VAR_1)
 VAR_1 = ((void*)0);
    FUNC_0(VAR_4->ref, ((void*)0));
    FUNC_0(VAR_4->children, ((void*)0));
    FUNC_0(VAR_4->parents, ((void*)0));
    FUNC_0(VAR_4->searchPath, VAR_0);

    FUNC_2(VAR_4->name);
    FUNC_2(VAR_4);
}
