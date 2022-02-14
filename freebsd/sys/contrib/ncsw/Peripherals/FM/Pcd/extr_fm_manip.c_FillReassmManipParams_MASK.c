
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {scalar_t__ nonConsistentSpFqid; int p_Ipv6ReassTbl; scalar_t__ h_Ipv6Ad; int p_Ipv4ReassTbl; scalar_t__ h_Ipv4Ad; } ;
struct TYPE_9__ {int p_ReassTbl; scalar_t__ h_Ad; } ;
struct TYPE_11__ {int sgBpid; TYPE_2__ ip; TYPE_1__ capwap; } ;
struct TYPE_12__ {int updateParams; int reassm; TYPE_3__ reassmParams; scalar_t__ h_FmPcd; } ;
typedef TYPE_4__ t_FmPcdManip ;
struct TYPE_13__ {scalar_t__ physicalMuramBase; } ;
typedef TYPE_5__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_14__ {int pcAndOffsets; int gmask; int matchTblPtr; int ccAdBase; } ;
typedef TYPE_6__ t_AdOfTypeContLookup ;
typedef int e_NetHeaderType ;


 int FUNC_0 (TYPE_4__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_11 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static t_Error FUNC_4(t_FmPcdManip *VAR_12, e_NetHeaderType VAR_13)
{
    t_AdOfTypeContLookup *VAR_14;
    t_FmPcd *VAR_15 = (t_FmPcd *)VAR_12->h_FmPcd;
    uint32_t VAR_16;
    t_Error VAR_17 = VAR_2;




    if ((VAR_17 = FUNC_0(VAR_12, VAR_13)) != VAR_2)
        FUNC_1(VAR_7, VAR_17, VAR_8);


    VAR_16 = 0;
    VAR_16 |= VAR_3;


    switch (VAR_13)
    {
        case 129:
            VAR_14 = (t_AdOfTypeContLookup *)VAR_12->reassmParams.ip.h_Ipv4Ad;
            VAR_16 |= (uint32_t)(FUNC_3(
                    VAR_12->reassmParams.ip.p_Ipv4ReassTbl)
                    - (VAR_15->physicalMuramBase));
            break;
        case 128:
            VAR_14 = (t_AdOfTypeContLookup *)VAR_12->reassmParams.ip.h_Ipv6Ad;
            VAR_16 |= (uint32_t)(FUNC_3(
                    VAR_12->reassmParams.ip.p_Ipv6ReassTbl)
                    - (VAR_15->physicalMuramBase));
            break;
        case 130:
            VAR_14 = (t_AdOfTypeContLookup *)VAR_12->reassmParams.capwap.h_Ad;
            VAR_16 |= (uint32_t)(FUNC_3(
                    VAR_12->reassmParams.capwap.p_ReassTbl)
                    - (VAR_15->physicalMuramBase));
            break;
        default:
            FUNC_1(VAR_7, VAR_1, ("header type"));
    }

    FUNC_2(VAR_14->ccAdBase, VAR_16);



    VAR_12->updateParams = (VAR_10 | VAR_9 | VAR_0);

    if ((VAR_13 == 128) || (VAR_13 == 129))
    {
        VAR_16 = 0;
        VAR_16 |= (uint32_t)VAR_6;
    }
    FUNC_2(VAR_14->pcAndOffsets, VAR_16);

    VAR_12->reassm = VAR_11;

    return VAR_2;
}
