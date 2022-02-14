
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
typedef TYPE_1__ Suff ;
typedef int * LstNode ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2(char *VAR_3)
{
    LstNode VAR_4;
    Suff *VAR_5;

    VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
    if (VAR_4 != ((void*)0)) {
 VAR_5 = (Suff *)FUNC_0(VAR_4);
 VAR_5->flags |= VAR_0;
    }
}
