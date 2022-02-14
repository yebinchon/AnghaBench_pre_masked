
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ p; } ;
struct TYPE_9__ {TYPE_1__* runningWord; } ;
struct TYPE_8__ {TYPE_3__* param; } ;
typedef scalar_t__ IPTYPE ;
typedef TYPE_2__ FICL_VM ;
typedef TYPE_3__ CELL ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    CELL *VAR_1;
    IPTYPE VAR_2;




    VAR_1 = VAR_0->runningWord->param;
    VAR_2 = (IPTYPE)((*VAR_1).p);
    FUNC_0(VAR_1+1);
    FUNC_2(VAR_0, VAR_2);
    return;
}
