
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refCount; } ;
typedef TYPE_1__ Path ;
typedef int * LstNode ;
typedef int Lst ;


 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ,TYPE_1__*) ;
 int * FUNC_4 (int *) ;

void
FUNC_5(Lst VAR_0, Lst VAR_1)
{
    LstNode VAR_2;
    Path *VAR_3;

    for (VAR_2 = FUNC_2(VAR_1); VAR_2 != ((void*)0); VAR_2 = FUNC_4(VAR_2)) {
 VAR_3 = (Path *)FUNC_1(VAR_2);
 if (FUNC_3(VAR_0, VAR_3) == ((void*)0)) {
     VAR_3->refCount += 1;
     (void)FUNC_0(VAR_0, VAR_3);
 }
    }
}
