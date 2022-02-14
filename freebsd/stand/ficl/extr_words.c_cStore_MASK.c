
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UNS8 ;
struct TYPE_6__ {scalar_t__ u; } ;
struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 TYPE_3__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    UNS8 *VAR_1;



    VAR_1 = (UNS8 *)FUNC_1(VAR_0->pStack);
    *VAR_1 = (UNS8)(FUNC_0(VAR_0->pStack).u);
}
