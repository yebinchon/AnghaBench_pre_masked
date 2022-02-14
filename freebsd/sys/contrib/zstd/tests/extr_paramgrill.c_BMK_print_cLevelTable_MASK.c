
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int result; int params; } ;
typedef TYPE_1__ winnerInfo_t ;
typedef int FILE ;


 int FUNC_0 (int *,int,int ,int ,size_t const) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void
FUNC_2(FILE* VAR_1, const winnerInfo_t* VAR_2, const size_t VAR_3)
{
    int VAR_4;

    FUNC_1(VAR_1, "\n /* Proposed configurations : */ \n");
    FUNC_1(VAR_1, "   /* W,  C,  H,  S,  L,  T, strat */ \n");

    for (VAR_4=0; VAR_4 <= VAR_0; VAR_4++)
        FUNC_0(VAR_1,
                              VAR_4, VAR_2[VAR_4].params,
                              VAR_2[VAR_4].result, VAR_3);
}
