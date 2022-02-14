
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* shift; int nshifts; } ;
typedef TYPE_1__ shifts ;
typedef int Value_t ;


 scalar_t__ FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (char,int ) ;
 TYPE_1__** VAR_1 ;
 char** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(int VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7;
    Value_t *VAR_8;
    shifts *VAR_9;

    FUNC_2('\n', VAR_3);
    VAR_9 = VAR_1[VAR_4];
    VAR_8 = VAR_9->shift;
    for (VAR_5 = 0; VAR_5 < VAR_9->nshifts; ++VAR_5)
    {
 VAR_6 = VAR_8[VAR_5];
 VAR_7 = VAR_0[VAR_6];
 if (FUNC_0(VAR_7))
     FUNC_1(VAR_3, "\t%s  goto %d\n", VAR_2[VAR_7], VAR_6);
    }
}
