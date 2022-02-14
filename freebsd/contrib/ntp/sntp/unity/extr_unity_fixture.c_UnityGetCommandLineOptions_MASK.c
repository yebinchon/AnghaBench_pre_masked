
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Verbose; char const* GroupFilter; char const* NameFilter; int RepeatCount; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int FUNC_2(int VAR_1, const char* VAR_2[])
{
    int VAR_3;
    VAR_0.Verbose = 0;
    VAR_0.GroupFilter = 0;
    VAR_0.NameFilter = 0;
    VAR_0.RepeatCount = 1;

    if (VAR_1 == 1)
        return 0;

    for (VAR_3 = 1; VAR_3 < VAR_1; )
    {
        if (FUNC_1(VAR_2[VAR_3], "-v") == 0)
        {
            VAR_0.Verbose = 1;
            VAR_3++;
        }
        else if (FUNC_1(VAR_2[VAR_3], "-g") == 0)
        {
            VAR_3++;
            if (VAR_3 >= VAR_1)
                return 1;
            VAR_0.GroupFilter = VAR_2[VAR_3];
            VAR_3++;
        }
        else if (FUNC_1(VAR_2[VAR_3], "-n") == 0)
        {
            VAR_3++;
            if (VAR_3 >= VAR_1)
                return 1;
            VAR_0.NameFilter = VAR_2[VAR_3];
            VAR_3++;
        }
        else if (FUNC_1(VAR_2[VAR_3], "-r") == 0)
        {
            VAR_0.RepeatCount = 2;
            VAR_3++;
            if (VAR_3 < VAR_1)
            {
                if (*(VAR_2[VAR_3]) >= '0' && *(VAR_2[VAR_3]) <= '9')
                {
                    VAR_0.RepeatCount = FUNC_0(VAR_2[VAR_3]);
                    VAR_3++;
                }
            }
        } else {

            VAR_3++;
        }
    }
    return 0;
}
