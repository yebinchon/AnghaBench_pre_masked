
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refCount; } ;
typedef TYPE_1__ Suff ;
typedef int * LstNode ;
typedef int Lst ;


 int * FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, void *VAR_1)
{
    Lst VAR_2 = (Lst) VAR_0;

    LstNode VAR_3 = FUNC_0(VAR_2, VAR_1);
    if (VAR_3 != ((void*)0)) {
 FUNC_1(VAR_2, VAR_3);
 ((Suff *)VAR_1)->refCount--;
    }
}
