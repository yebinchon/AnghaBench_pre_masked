
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int RepeatCount; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (int,char const**) ;
 int FUNC_5 (unsigned int) ;

int FUNC_6(int VAR_1, const char* VAR_2[], void (*VAR_3)(void))
{
    int VAR_4 = FUNC_4(VAR_1, VAR_2);
    unsigned int VAR_5;
    if (VAR_4 != 0)
        return VAR_4;

    for (VAR_5 = 0; VAR_5 < VAR_0.RepeatCount; VAR_5++)
    {
        FUNC_1(VAR_2[0]);
        FUNC_5(VAR_5);
        VAR_3();
        FUNC_0('\n');
        FUNC_2();
    }

    return FUNC_3();
}
