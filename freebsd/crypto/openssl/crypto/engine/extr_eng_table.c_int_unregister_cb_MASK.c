
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * funct; scalar_t__ uptodate; int sk; } ;
typedef TYPE_1__ ENGINE_PILE ;
typedef int ENGINE ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(ENGINE_PILE *VAR_0, ENGINE *VAR_1)
{
    int VAR_2;

    while ((VAR_2 = FUNC_2(VAR_0->sk, VAR_1)) >= 0) {
        (void)FUNC_1(VAR_0->sk, VAR_2);
        VAR_0->uptodate = 0;
    }
    if (VAR_0->funct == VAR_1) {
        FUNC_0(VAR_1, 0);
        VAR_0->funct = ((void*)0);
    }
}
