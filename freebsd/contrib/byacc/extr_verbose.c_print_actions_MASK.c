
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nshifts; size_t* shift; } ;
typedef TYPE_1__ shifts ;
typedef int action ;


 scalar_t__ FUNC_0 (int) ;
 int* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int ** VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(int VAR_6)
{
    action *VAR_7;
    shifts *VAR_8;
    int VAR_9;

    if (VAR_6 == VAR_2)
 FUNC_1(VAR_5, "\t$end  accept\n");

    VAR_7 = VAR_3[VAR_6];
    if (VAR_7)
    {
 FUNC_4(VAR_7);
 FUNC_3(VAR_7, VAR_1[VAR_6]);
    }

    VAR_8 = VAR_4[VAR_6];
    if (VAR_8 && VAR_8->nshifts > 0)
    {
 VAR_9 = VAR_0[VAR_8->shift[VAR_8->nshifts - 1]];
 if (FUNC_0(VAR_9))
     FUNC_2(VAR_6);
    }
}
