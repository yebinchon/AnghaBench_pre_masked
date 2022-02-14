
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* p; } ;
struct TYPE_3__ {char* name; } ;
typedef int FICL_VM ;
typedef char* FICL_INT ;
typedef TYPE_1__ FICL_HASH ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 TYPE_2__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    FICL_HASH *VAR_1 = FUNC_2(VAR_0).p;
    char *VAR_2 = VAR_1->name;
    FICL_INT VAR_3 = 0;

    if (VAR_2)
        VAR_3 = FUNC_1(VAR_2);

    FUNC_3(VAR_0, FUNC_0(VAR_2));
    FUNC_3(VAR_0, FUNC_0(VAR_3));
    return;
}
