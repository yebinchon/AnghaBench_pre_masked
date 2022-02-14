
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ CurrentTestIgnored; scalar_t__ CurrentTestFailed; int TestFailures; int TestIgnores; } ;
struct TYPE_3__ {scalar_t__ Verbose; } ;


 int FUNC_0 (char) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*) ;

void FUNC_2(void)
{
    if (VAR_0.CurrentTestIgnored)
    {
        if (VAR_1.Verbose)
        {
            FUNC_0('\n');
        }
        VAR_0.TestIgnores++;
    }
    else if (!VAR_0.CurrentTestFailed)
    {
        if (VAR_1.Verbose)
        {
            FUNC_1(" PASS");
            FUNC_0('\n');
        }
    }
    else if (VAR_0.CurrentTestFailed)
    {
        VAR_0.TestFailures++;
    }

    VAR_0.CurrentTestFailed = 0;
    VAR_0.CurrentTestIgnored = 0;
}
