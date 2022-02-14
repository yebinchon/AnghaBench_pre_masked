
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int t_List ;
typedef scalar_t__ t_Handle ;
struct TYPE_17__ {int p_AdTableOld; int p_AdTableNew; int p_KeysMatchTableOld; int p_KeysMatchTableNew; scalar_t__ h_CurrentNode; } ;
typedef TYPE_3__ t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_18__ {int ccKeySizeAccExtraction; int maxNumOfKeys; scalar_t__ lclMask; } ;
typedef TYPE_4__ t_FmPcdCcNode ;
struct TYPE_15__ {scalar_t__ h_CcNode; } ;
struct TYPE_16__ {TYPE_1__ ccParams; } ;
struct TYPE_19__ {TYPE_2__ params; int nextEngine; } ;
typedef TYPE_5__ t_FmPcdCcNextEngineParams ;
typedef scalar_t__ t_Error ;
struct TYPE_20__ {scalar_t__ h_CcNode; } ;
typedef TYPE_6__ t_CcNodeInformation ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,TYPE_3__*,TYPE_4__*,TYPE_5__*) ;
 TYPE_6__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int *,TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int *,int *,TYPE_3__*,int) ;
 int VAR_4 ;
 int FUNC_9 (TYPE_5__*,int ,int) ;

__attribute__((used)) static t_Error FUNC_10(
        t_Handle VAR_5, t_List *VAR_6, t_List *VAR_7,
        t_FmPcdModifyCcKeyAdditionalParams *VAR_8,
        bool VAR_9)
{
    t_FmPcdCcNode *VAR_10 =
            (t_FmPcdCcNode *)(VAR_8->h_CurrentNode);
    t_List *VAR_11;
    t_CcNodeInformation *VAR_12;
    t_FmPcdCcNextEngineParams VAR_13;
    t_Handle VAR_14;
    uint32_t VAR_15;
    t_Error VAR_16 = VAR_0;
    uint8_t VAR_17;

    FUNC_0(VAR_5);

    FUNC_9(&VAR_13, 0, sizeof(t_FmPcdCcNextEngineParams));

    VAR_17 = (uint8_t)FUNC_6(VAR_6);

    if (VAR_17)
    {

        VAR_11 = FUNC_5(VAR_7);


        VAR_16 = FUNC_3(VAR_5, VAR_6, VAR_7,
                              VAR_8, VAR_9);
        if (VAR_16)
            FUNC_7(VAR_2, VAR_16, VAR_3);

  if (VAR_9)
  {


   if (VAR_10->lclMask)
    VAR_15 = (uint32_t)(2 * VAR_10->ccKeySizeAccExtraction);
   else
    VAR_15 = VAR_10->ccKeySizeAccExtraction;

   FUNC_4(VAR_8->p_KeysMatchTableOld,
        VAR_8->p_KeysMatchTableNew,
        VAR_10->maxNumOfKeys * VAR_15 * sizeof(uint8_t));

   FUNC_4(
     VAR_8->p_AdTableOld,
     VAR_8->p_AdTableNew,
     (uint32_t)((VAR_10->maxNumOfKeys + 1)
       * VAR_1));


   VAR_12 = FUNC_2(VAR_11);
   VAR_14 = VAR_12->h_CcNode;


   VAR_8->p_KeysMatchTableNew =
     VAR_8->p_KeysMatchTableOld;
   VAR_8->p_AdTableNew = VAR_8->p_AdTableOld;

   VAR_13.nextEngine = VAR_4;
   VAR_13.params.ccParams.h_CcNode = (t_Handle)VAR_10;

   FUNC_1(VAR_14, VAR_8, VAR_10, &VAR_13);


   VAR_16 = FUNC_3(VAR_5, VAR_6, VAR_7,
          VAR_8, VAR_9);
   if (VAR_16)
    FUNC_7(VAR_2, VAR_16, VAR_3);
  }
    }

    VAR_16 = FUNC_8(VAR_5, VAR_6,
                                       VAR_7,
                                       VAR_8, VAR_9);
    if (VAR_16)
        FUNC_7(VAR_2, VAR_16, VAR_3);

    return VAR_0;
}
