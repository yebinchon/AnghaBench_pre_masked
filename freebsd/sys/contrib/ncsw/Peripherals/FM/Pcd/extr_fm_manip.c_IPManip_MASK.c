
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int p_Frag; } ;
struct TYPE_8__ {scalar_t__ frag; scalar_t__ sizeForFragmentation; scalar_t__ physicalMuramBase; TYPE_1__ fragParams; scalar_t__ h_Ad; struct TYPE_8__* h_FmPcd; } ;
typedef TYPE_2__ t_FmPcdManip ;
typedef TYPE_2__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_9__ {int gmask; int ccAdBase; int pcAndOffsets; } ;
typedef TYPE_4__ t_AdOfTypeContLookup ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static t_Error FUNC_3(t_FmPcdManip *VAR_8)
{
    t_Error VAR_9 = VAR_1;
    t_FmPcd *VAR_10;
    t_AdOfTypeContLookup *VAR_11;
    uint32_t VAR_12 = 0, VAR_13 = 0;

    FUNC_0(VAR_8, VAR_0);
    VAR_10 = VAR_8->h_FmPcd;
    FUNC_0(VAR_10, VAR_0);

    VAR_11 = (t_AdOfTypeContLookup *)VAR_8->h_Ad;

    VAR_12 = VAR_5;
    if (VAR_8->frag == VAR_7)
    {
        VAR_13 = (uint32_t)(FUNC_2(VAR_8->fragParams.p_Frag)
                - (VAR_10->physicalMuramBase));
        VAR_12 = (uint32_t)VAR_8->sizeForFragmentation
                << VAR_4;
    }

    VAR_13 |= VAR_2;
    VAR_12 |= VAR_6;





    FUNC_1(VAR_11->pcAndOffsets, VAR_12);
    FUNC_1(VAR_11->ccAdBase, VAR_13);
    FUNC_1(VAR_11->gmask, 0);


    return VAR_9;
}
