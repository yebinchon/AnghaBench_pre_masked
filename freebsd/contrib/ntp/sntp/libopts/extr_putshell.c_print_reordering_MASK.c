
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int curOptIdx; unsigned int origArgCt; int * origArgVect; } ;
typedef TYPE_1__ tOptions ;


 int FUNC_0 (char,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(tOptions * VAR_3)
{
    unsigned int VAR_4;

    FUNC_1(VAR_1, VAR_2);

    for (VAR_4 = VAR_3->curOptIdx;
         VAR_4 < VAR_3->origArgCt;
         VAR_4++) {
        FUNC_0(' ', VAR_2);
        FUNC_2(VAR_3->origArgVect[ VAR_4 ]);
    }
    FUNC_1(VAR_0, VAR_2);
}
