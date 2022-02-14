
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * Strings; scalar_t__* Numbers; scalar_t__* Booleans; int term_names; } ;
typedef TYPE_1__ TERMTYPE ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static unsigned long
FUNC_4(TERMTYPE *VAR_0)
{
    unsigned long VAR_1 = FUNC_3(VAR_0->term_names);
    unsigned VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
 VAR_1 += (unsigned long) (VAR_0->Booleans[VAR_2]);
    }
    for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0); VAR_2++) {
 VAR_1 += (unsigned long) (VAR_0->Numbers[VAR_2]);
    }
    for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_0); VAR_2++) {
 VAR_1 += FUNC_3(VAR_0->Strings[VAR_2]);
    }
    return VAR_1;
}
