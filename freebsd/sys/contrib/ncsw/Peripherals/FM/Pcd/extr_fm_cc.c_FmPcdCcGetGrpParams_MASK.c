
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {size_t numOfGrps; TYPE_1__* fmPcdGroupParam; } ;
typedef TYPE_2__ t_FmPcdCcTree ;
typedef int t_Error ;
struct TYPE_3__ {size_t baseGroupEntry; int totalBitsMask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (scalar_t__,int ) ;

t_Error FUNC_2(t_Handle VAR_3, uint8_t VAR_4,
                            uint32_t *VAR_5, uint8_t *VAR_6)
{
    t_FmPcdCcTree *VAR_7 = (t_FmPcdCcTree *)VAR_3;

    FUNC_1(VAR_3, VAR_0);

    if (VAR_4 >= VAR_7->numOfGrps)
        FUNC_0(VAR_2, VAR_0,
                     ("grpId you asked > numOfGroup of relevant tree"));

    *VAR_5 = VAR_7->fmPcdGroupParam[VAR_4].totalBitsMask;
    *VAR_6 = VAR_7->fmPcdGroupParam[VAR_4].baseGroupEntry;

    return VAR_1;
}
