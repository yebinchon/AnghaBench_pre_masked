
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ p_KeysMatchTableNew; scalar_t__ h_CurrentNode; scalar_t__ p_AdTableNew; } ;
typedef TYPE_1__ t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_5__ {int h_FmPcd; } ;
typedef TYPE_2__ t_FmPcdCcNode ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(
        t_FmPcdModifyCcKeyAdditionalParams *VAR_0)
{
    if (VAR_0->p_AdTableNew)
        FUNC_0(
                FUNC_1(
                        ((t_FmPcdCcNode *)(VAR_0->h_CurrentNode))->h_FmPcd),
                VAR_0->p_AdTableNew);

    if (VAR_0->p_KeysMatchTableNew)
        FUNC_0(
                FUNC_1(
                        ((t_FmPcdCcNode *)(VAR_0->h_CurrentNode))->h_FmPcd),
                VAR_0->p_KeysMatchTableNew);
}
