
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* Booleans; scalar_t__* Numbers; int * Strings; } ;
typedef TYPE_1__ TERMTYPE ;
typedef int PredIdx ;


 int VAR_0 ;
 unsigned int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_4(TERMTYPE *VAR_2, TERMTYPE *VAR_3)

{
    unsigned VAR_4;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
 if (VAR_2->Booleans[VAR_4] != VAR_3->Booleans[VAR_4])
     return (VAR_0);

    for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_2); VAR_4++)
 if (VAR_2->Numbers[VAR_4] != VAR_3->Numbers[VAR_4])
     return (VAR_0);

    for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_2); VAR_4++)
 if (FUNC_3((PredIdx) VAR_4, VAR_2->Strings[VAR_4], VAR_3->Strings[VAR_4]))
     return (VAR_0);

    return (VAR_1);
}
