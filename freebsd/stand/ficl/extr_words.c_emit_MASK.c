
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* pad; int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    char *VAR_1 = VAR_0->pad;
    int VAR_2;




    VAR_2 = FUNC_0(VAR_0->pStack);
    VAR_1[0] = (char)VAR_2;
    VAR_1[1] = '\0';
    FUNC_2(VAR_0, VAR_1, 0);
    return;
}
