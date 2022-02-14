
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int t_Handle ;
struct TYPE_11__ {int sizeForFragmentation; int dontFragAction; int sgBpid; int scratchBpid; scalar_t__ sgBpidEn; } ;
typedef TYPE_2__ t_FmPcdManipFragIpParams ;
struct TYPE_10__ {int scratchBpid; TYPE_5__* p_Frag; } ;
struct TYPE_12__ {int h_Ad; int sizeForFragmentation; TYPE_1__ fragParams; int frag; TYPE_4__* h_FmPcd; } ;
typedef TYPE_3__ t_FmPcdManip ;
struct TYPE_13__ {int h_FmMuram; scalar_t__ physicalMuramBase; int ipv6FrameIdAddr; } ;
typedef TYPE_4__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_14__ {int gmask; int ccAdBase; int pcAndOffsets; } ;
typedef TYPE_5__ t_AdOfTypeContLookup ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 char* VAR_14 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int,int ) ;
 int VAR_15 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static t_Error FUNC_9(t_FmPcdManipFragIpParams *VAR_16,
                               t_FmPcdManip *VAR_17)
{
    uint32_t VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
    t_FmPcd *VAR_21;




    FUNC_5(VAR_17->h_Ad, VAR_0);
    FUNC_5(VAR_16->sizeForFragmentation != 0xFFFF,
                              VAR_1);

    VAR_21 = VAR_17->h_FmPcd;

    VAR_17->fragParams.p_Frag = (t_AdOfTypeContLookup *)FUNC_0(
            VAR_21->h_FmMuram, VAR_5,
            VAR_6);
    if (!VAR_17->fragParams.p_Frag)
        FUNC_4(VAR_13, VAR_2,
                     ("MURAM alloc for Fragmentation table descriptor"));
    FUNC_3(VAR_17->fragParams.p_Frag, 0, VAR_5);


    VAR_18 = (uint32_t)VAR_12;


    VAR_19 = VAR_4;
    VAR_19 |= (VAR_16->dontFragAction
            << VAR_7);



    if (VAR_16->sgBpidEn)
    {
        VAR_19 |= VAR_9;
        VAR_18 |= ((VAR_16->sgBpid
                << VAR_11)
                & VAR_10);
    }


    VAR_20 = (uint32_t)(FUNC_8(FUNC_6(VAR_21->ipv6FrameIdAddr))
            - VAR_21->physicalMuramBase);



    VAR_20 |= (0xFF) << VAR_8;



    FUNC_7(VAR_17->fragParams.p_Frag->pcAndOffsets, VAR_18);
    FUNC_7(VAR_17->fragParams.p_Frag->ccAdBase, VAR_19);
    FUNC_7(VAR_17->fragParams.p_Frag->gmask, VAR_20);


    VAR_17->frag = VAR_15;
    VAR_17->sizeForFragmentation = VAR_16->sizeForFragmentation;
    return VAR_3;
}
