
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * _hidden; } ;


 int FUNC_0 (int *) ;
 unsigned short FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(void)
{
    short unsigned int VAR_2;
    for(VAR_2 = 0; VAR_2 < FUNC_1(VAR_0); VAR_2++) {
        FUNC_0(VAR_1[VAR_2]._hidden);
        VAR_1[VAR_2]._hidden = ((void*)0);
    }
    return 1;
}
