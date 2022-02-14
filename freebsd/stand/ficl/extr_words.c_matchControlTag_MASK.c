
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0, char *VAR_1)
{
    char *VAR_2;



    VAR_2 = (char *)FUNC_0(VAR_0->pStack);



    if ( (VAR_2 != VAR_1) && FUNC_1(VAR_2, VAR_1) )
    {
        FUNC_3(VAR_0, "Error -- unmatched control structure \"%s\"", VAR_1);
    }

    return;
}
