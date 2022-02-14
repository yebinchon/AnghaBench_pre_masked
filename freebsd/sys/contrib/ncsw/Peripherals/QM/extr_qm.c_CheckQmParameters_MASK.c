
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ partCgsBase; scalar_t__ partNumOfCgs; scalar_t__ guestId; int f_Exception; TYPE_1__* p_QmDriverParams; } ;
typedef TYPE_2__ t_Qm ;
typedef int t_Error ;
struct TYPE_4__ {scalar_t__ partFqidBase; scalar_t__ partNumOfFqids; int rtFramesDepth; int totalNumOfFqids; int swPortalsBaseAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static t_Error FUNC_3(t_Qm *VAR_7)
{
    if ((VAR_7->p_QmDriverParams->partFqidBase + VAR_7->p_QmDriverParams->partNumOfFqids) > VAR_6)
            FUNC_0(VAR_2, VAR_0, ("partFqidBase+partNumOfFqids out of range!!!"));
    if ((VAR_7->partCgsBase + VAR_7->partNumOfCgs) > VAR_5)
            FUNC_0(VAR_2, VAR_0, ("partCgsBase+partNumOfCgs out of range!!!"));

    if (VAR_7->guestId == VAR_4)
    {
        uint64_t VAR_8;

        VAR_8 = FUNC_2(FUNC_1(VAR_7->p_QmDriverParams->swPortalsBaseAddress));

        if (VAR_8 & 0x00000000001fffffLL)
            FUNC_0(VAR_2, VAR_0, ("swPortalsBaseAddress isn't properly aligned"));
        if (!VAR_7->p_QmDriverParams->rtFramesDepth)
            FUNC_0(VAR_2, VAR_0, ("rtFramesDepth must be larger than '0'!!!"));
        if (VAR_7->p_QmDriverParams->rtFramesDepth > ((16*VAR_3)*3))
            FUNC_0(VAR_2, VAR_0, ("rtFramesDepth must be equal or smaller than 48MB!!!"));
        if (!VAR_7->p_QmDriverParams->totalNumOfFqids)
            FUNC_0(VAR_2, VAR_0, ("totalNumOfFqids must be larger than '0'!!!"));
        if (VAR_7->p_QmDriverParams->totalNumOfFqids > (16*VAR_3))
            FUNC_0(VAR_2, VAR_0, ("totalNumOfFqids must be equal or smaller than 16MB!!!"));
        if(!VAR_7->f_Exception)
            FUNC_0(VAR_2, VAR_0, ("Exceptions callback not provided"));
    }

    return VAR_1;
}
