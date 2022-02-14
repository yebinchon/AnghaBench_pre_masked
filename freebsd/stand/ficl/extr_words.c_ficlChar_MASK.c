
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* cp; } ;
typedef TYPE_1__ STRINGINFO ;
typedef int FICL_VM ;
typedef int FICL_UNS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_1__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    STRINGINFO VAR_1;




    VAR_1 = FUNC_2(VAR_0);
    FUNC_0((FICL_UNS)(VAR_1.cp[0]));
    return;
}
