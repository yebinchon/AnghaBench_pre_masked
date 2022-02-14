
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int CurrentTestIgnored; int NumberOfTests; } ;
struct TYPE_3__ {int Verbose; } ;


 int FUNC_0 (char) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (char const*) ;

void FUNC_3(const char * VAR_2)
{
    VAR_0.NumberOfTests++;
    VAR_0.CurrentTestIgnored = 1;
    if (!VAR_1.Verbose)
        FUNC_0('!');
    else
        FUNC_2(VAR_2);
    FUNC_1();
}
