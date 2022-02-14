
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* const table; } ;
typedef TYPE_1__ memoTable_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__* const) ;

__attribute__((used)) static void FUNC_1(memoTable_t* const VAR_1) {
    int VAR_2;
    if(VAR_1 == ((void*)0)) { return; }
    for(VAR_2 = 1; VAR_2 <= (int)VAR_0; VAR_2++) {
        FUNC_0(VAR_1[VAR_2].table);
    }
    FUNC_0(VAR_1);
}
