
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* p; } ;
struct TYPE_3__ {char* name; } ;
typedef int FICL_VM ;
typedef TYPE_1__ FICL_HASH ;


 TYPE_2__ FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(FICL_VM *VAR_0)
{
    char *VAR_1 = (char *)FUNC_0(VAR_0).p;
    FICL_HASH *VAR_2 = FUNC_0(VAR_0).p;
    VAR_2->name = VAR_1;
    return;
}
