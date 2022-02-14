
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_Frag; } ;
struct TYPE_9__ {int totalFrames; int fragmentedFrames; int generatedFragments; int matchTblPtr; TYPE_1__ fragParams; int ccAdBase; struct TYPE_9__* h_Ad; } ;
typedef TYPE_2__ t_FmPcdManipFragIpStats ;
typedef TYPE_2__ t_FmPcdManip ;
typedef int t_Error ;
struct TYPE_10__ {int gmask; } ;
typedef TYPE_4__ t_AdOfTypeContLookup ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static t_Error FUNC_2(t_FmPcdManip *VAR_1,
                                    t_FmPcdManipFragIpStats *VAR_2)
{
    t_AdOfTypeContLookup *VAR_3;

    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_1->h_Ad);
    FUNC_0(VAR_1->fragParams.p_Frag);

    VAR_3 = (t_AdOfTypeContLookup *)VAR_1->h_Ad;

    VAR_2->totalFrames = FUNC_1(VAR_3->gmask);
    VAR_2->fragmentedFrames = FUNC_1(VAR_1->fragParams.p_Frag->ccAdBase)
            & 0x00ffffff;
    VAR_2->generatedFragments =
            FUNC_1(VAR_1->fragParams.p_Frag->matchTblPtr);

    return VAR_0;
}
