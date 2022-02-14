
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int t_List ;
typedef int * t_Handle ;
typedef int t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_13__ {int * h_Ad; int ccTreeIdLst; int ccPrevNodesLst; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
struct TYPE_14__ {scalar_t__ h_Manip; } ;
typedef TYPE_2__ t_FmPcdCcNextEngineParams ;
typedef int t_Error ;
struct TYPE_15__ {int * h_CcNode; int member_0; } ;
typedef TYPE_3__ t_CcNodeInformation ;


 int FUNC_0 (int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_3__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int ) ;
 int * FUNC_3 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int *,TYPE_2__**) ;
 int FUNC_8 (TYPE_1__*,int *,TYPE_2__**) ;

__attribute__((used)) static t_Error FUNC_9(
        t_FmPcdCcNode *VAR_6,
        t_FmPcdModifyCcKeyAdditionalParams *VAR_7,
        t_List *VAR_8, t_List *VAR_9)
{
    t_FmPcdCcNextEngineParams *VAR_10 = ((void*)0);
    t_CcNodeInformation VAR_11 = { 0 };
    t_Handle VAR_12;
    t_Handle VAR_13 = ((void*)0);


    if (!FUNC_5(&VAR_6->ccPrevNodesLst))
        FUNC_7(VAR_6, VAR_8,
                                                   &VAR_10);

    if (!FUNC_5(&VAR_6->ccTreeIdLst))
        FUNC_8(VAR_6, VAR_8,
                                                   &VAR_10);


    if (VAR_10)
    {

        VAR_12 = FUNC_3(VAR_6, VAR_2);
        if (!VAR_12)
            FUNC_6(VAR_4, VAR_0, VAR_5);
        FUNC_4(VAR_12, 0, VAR_3);

        VAR_13 = VAR_6->h_Ad;
        FUNC_0(VAR_12, VAR_7, VAR_6,
                   VAR_10);

        VAR_11.h_CcNode = VAR_12;
        FUNC_1(VAR_9, &VAR_11, ((void*)0));

        if (VAR_10->h_Manip && !VAR_13)
            FUNC_2(VAR_10->h_Manip, VAR_2);
    }
    return VAR_1;
}
