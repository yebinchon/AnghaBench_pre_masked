
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * searchPath; } ;
typedef TYPE_1__ Suff ;
typedef int * LstNode ;
typedef int * Lst ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

Lst
FUNC_2(char *VAR_2)
{
    LstNode VAR_3;
    Suff *VAR_4;

    VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
    if (VAR_3 == ((void*)0)) {
 return ((void*)0);
    } else {
 VAR_4 = (Suff *)FUNC_0(VAR_3);
 return (VAR_4->searchPath);
    }
}
