
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int * t_Handle ;
struct TYPE_16__ {int p_AdTableNew; int p_KeysMatchTableNew; int numOfKeys; } ;
typedef TYPE_4__ t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_17__ {int h_FmPcd; int * h_Ad; int p_GlblMask; int glblMaskSize; int sizeOfExtraction; int ccKeySizeAccExtraction; int ctrlFlow; int prsArrayOffset; int offset; int parseCode; int lclMask; int h_AdTable; int h_KeysMatchTable; int numOfKeys; } ;
typedef TYPE_5__ t_FmPcdCcNode ;
struct TYPE_14__ {int * h_FrmReplic; } ;
struct TYPE_13__ {int h_CcNode; } ;
struct TYPE_15__ {TYPE_2__ frParams; TYPE_1__ ccParams; } ;
struct TYPE_18__ {scalar_t__ nextEngine; TYPE_3__ params; int * h_Manip; } ;
typedef TYPE_6__ t_FmPcdCcNextEngineParams ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *,int ,TYPE_5__*,int *,int *) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (TYPE_5__*,int ,int) ;

__attribute__((used)) static t_Handle FUNC_6(
        t_Handle VAR_7,
        t_FmPcdModifyCcKeyAdditionalParams *VAR_8,
        t_FmPcdCcNode *VAR_9,
        t_FmPcdCcNextEngineParams *VAR_10)
{
    t_FmPcdCcNode *VAR_11;
    t_Handle VAR_12 = ((void*)0);

    VAR_11 = (t_FmPcdCcNode*)FUNC_4(sizeof(t_FmPcdCcNode));
    if (!VAR_11)
    {
        FUNC_2(VAR_3, VAR_1, ("p_FmPcdCcNodeTmp"));
        return ((void*)0);
    }
    FUNC_5(VAR_11, 0, sizeof(t_FmPcdCcNode));

    VAR_11->numOfKeys = VAR_8->numOfKeys;
    VAR_11->h_KeysMatchTable =
            VAR_8->p_KeysMatchTableNew;
    VAR_11->h_AdTable =
            VAR_8->p_AdTableNew;

    VAR_11->lclMask = VAR_9->lclMask;
    VAR_11->parseCode = VAR_9->parseCode;
    VAR_11->offset = VAR_9->offset;
    VAR_11->prsArrayOffset = VAR_9->prsArrayOffset;
    VAR_11->ctrlFlow = VAR_9->ctrlFlow;
    VAR_11->ccKeySizeAccExtraction = VAR_9->ccKeySizeAccExtraction;
    VAR_11->sizeOfExtraction = VAR_9->sizeOfExtraction;
    VAR_11->glblMaskSize = VAR_9->glblMaskSize;
    VAR_11->p_GlblMask = VAR_9->p_GlblMask;

    if (VAR_10->nextEngine == VAR_5)
    {
        if (VAR_10->h_Manip)
        {
            VAR_12 = VAR_9->h_Ad;
            if (FUNC_0(
                    VAR_10->params.ccParams.h_CcNode)
                    != VAR_2)
            {
                FUNC_2(VAR_3, VAR_0, VAR_4);
                FUNC_3(VAR_11);
                return ((void*)0);
            }
        }
        FUNC_1(VAR_7, ((void*)0), VAR_9->h_FmPcd, VAR_11,
                               VAR_12 ? ((void*)0) : VAR_10->h_Manip, ((void*)0));
    }
    FUNC_3(VAR_11);

    return ((void*)0);
}
