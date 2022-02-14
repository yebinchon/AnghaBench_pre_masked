
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ csp; } ;
typedef TYPE_1__ TERMINAL_CONTROL_BLOCK ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_2(TERMINAL_CONTROL_BLOCK * VAR_2, int VAR_3)
{
    bool VAR_4 = VAR_0;

    FUNC_0();
    if (VAR_2->csp)
 VAR_4 = FUNC_1(VAR_2->csp, VAR_3) == 0 ? VAR_0 : VAR_1;

    return VAR_4;
}
