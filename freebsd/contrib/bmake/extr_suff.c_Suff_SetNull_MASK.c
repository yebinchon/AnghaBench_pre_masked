
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ Suff ;
typedef int * LstNode ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

void
FUNC_3(char *VAR_5)
{
    Suff *VAR_6;
    LstNode VAR_7;

    VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_2);
    if (VAR_7 != ((void*)0)) {
 VAR_6 = (Suff *)FUNC_0(VAR_7);
 if (VAR_3 != ((void*)0)) {
     VAR_3->flags &= ~VAR_1;
 }
 VAR_6->flags |= VAR_1;



 VAR_3 = VAR_6;
    } else {
 FUNC_2(VAR_0, "Desired null suffix %s not defined.",
       VAR_5);
    }
}
