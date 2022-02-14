
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isExpectingFail; int CurrentTestFailed; char* XFAILMessage; scalar_t__ CurrentTestIgnored; int TestFailures; int TestXPASSES; int CurrentTestLineNumber; int TestFile; int TestPasses; int TestIgnores; int TestXFAILS; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(void)
{
 if (VAR_1.isExpectingFail == 1 && VAR_1.CurrentTestFailed == 1)
 {
  VAR_1.TestXFAILS++;
  if (VAR_1.XFAILMessage != ((void*)0))
  {
   if (VAR_1.XFAILMessage[0] != ' ')
   {
    FUNC_2(" ");
   }

   FUNC_2("| ");
   FUNC_2("%s", VAR_1.XFAILMessage);
   VAR_1.XFAILMessage = ((void*)0);
  }
  else
  {
   FUNC_2(" - EXPECTED FAIL!");
  }
 }
 else

    if (VAR_1.CurrentTestIgnored)
    {
        VAR_1.TestIgnores++;
    }
    else if (!VAR_1.CurrentTestFailed)
    {
 if(VAR_1.isExpectingFail == 0) {
  FUNC_1(VAR_1.TestFile, VAR_1.CurrentTestLineNumber);
  FUNC_0(VAR_2);
  VAR_1.TestPasses++;
 }


 else if (VAR_1.isExpectingFail == 1 && VAR_1.CurrentTestFailed == 0)
 {

  FUNC_1(VAR_1.TestFile, VAR_1.CurrentTestLineNumber);
  FUNC_0(VAR_3);
  VAR_1.TestXPASSES++;

  FUNC_2(" - FAIL WAS EXPECTED, BUT DIDN'T HAPPEN?!");

 }
    }
    else
    {
        VAR_1.TestFailures++;
    }

    VAR_1.CurrentTestFailed = 0;
    VAR_1.CurrentTestIgnored = 0;
    VAR_1.isExpectingFail = 0;

    VAR_0;
}
