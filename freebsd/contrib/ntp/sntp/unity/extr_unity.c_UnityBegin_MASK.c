
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* TestFile; int * XFAILMessage; scalar_t__ TestXPASSES; scalar_t__ TestPasses; scalar_t__ isExpectingFail; scalar_t__ TestXFAILS; scalar_t__ CurrentTestIgnored; scalar_t__ CurrentTestFailed; scalar_t__ TestIgnores; scalar_t__ TestFailures; scalar_t__ NumberOfTests; scalar_t__ CurrentTestLineNumber; int * CurrentTestName; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;

void FUNC_1(const char* VAR_1)
{
    VAR_0.TestFile = VAR_1;
    VAR_0.CurrentTestName = ((void*)0);
    VAR_0.CurrentTestLineNumber = 0;
    VAR_0.NumberOfTests = 0;
    VAR_0.TestFailures = 0;
    VAR_0.TestIgnores = 0;
    VAR_0.CurrentTestFailed = 0;
    VAR_0.CurrentTestIgnored = 0;
    VAR_0.TestXFAILS = 0;
    VAR_0.isExpectingFail = 0;
    VAR_0.TestPasses = 0;
    VAR_0.TestXPASSES = 0;
    VAR_0.XFAILMessage = ((void*)0);

    FUNC_0();
}
