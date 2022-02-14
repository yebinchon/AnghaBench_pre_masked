
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int _U_SINT ;
struct TYPE_2__ {unsigned int TestFailures; unsigned int TestXPASSES; scalar_t__ TestIgnores; scalar_t__ TestXFAILS; scalar_t__ TestPasses; scalar_t__ NumberOfTests; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_5(void)
{
    VAR_0;
    FUNC_1(VAR_2);
    VAR_0;
    FUNC_3((_U_SINT)(VAR_1.NumberOfTests));
    FUNC_1(VAR_6);
    VAR_0;
    FUNC_3((_U_SINT)(VAR_1.TestPasses));
    FUNC_1(VAR_5);
    VAR_0;
    FUNC_3((_U_SINT)(VAR_1.TestXFAILS));
    FUNC_1(VAR_7);
    VAR_0;
    FUNC_3((_U_SINT)(VAR_1.TestFailures));
    FUNC_1(VAR_3);
    VAR_0;
    FUNC_3((_U_SINT)(VAR_1.TestXPASSES));
    FUNC_1(VAR_8);
    VAR_0;
    FUNC_3((_U_SINT)(VAR_1.TestIgnores));
    FUNC_1(VAR_4);
    VAR_0;

    VAR_0;
    if (VAR_1.TestFailures == 0U && VAR_1.TestXPASSES == 0U)
    {
        FUNC_4();
    }
    else
    {
        FUNC_2();
    }
    VAR_0;
    FUNC_0();
    return (int)(VAR_1.TestFailures);
}
