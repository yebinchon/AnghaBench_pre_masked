
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pad; int pSys; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_UNS ;


 unsigned int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    unsigned VAR_1;





    FUNC_3(VAR_0);
    VAR_1 = FUNC_0();
    FUNC_1(VAR_0->pSys, VAR_0->pad, (FICL_UNS)VAR_1);
    return;
}
