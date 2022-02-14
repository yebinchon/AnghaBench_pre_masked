
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int ccKeySizeAccExtraction; int maxNumOfKeys; int h_FmPcd; scalar_t__ maskSupport; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static t_Error FUNC_3(t_FmPcdCcNode *VAR_5,
                                     bool VAR_6,
                                     uint32_t *VAR_7,
                                     uint32_t *VAR_8)
{
    uint32_t VAR_9;
    t_Error VAR_10;



    *VAR_7 = VAR_5->ccKeySizeAccExtraction * sizeof(uint8_t)
            * VAR_5->maxNumOfKeys;

    if (VAR_5->maskSupport)
        *VAR_7 *= 2;


    *VAR_8 = (uint32_t)((VAR_5->maxNumOfKeys + 1)
            * VAR_2);
    VAR_9 = VAR_2;


    if (VAR_6)
        VAR_9 += *VAR_7;


    VAR_9 += *VAR_8;


    VAR_10 = FUNC_1(VAR_5->h_FmPcd, (uint32_t)VAR_9,
                              VAR_3);
    if (VAR_10 != VAR_1)
    {
        FUNC_0(VAR_5);
        FUNC_2(VAR_4, VAR_0, ("MURAM allocation for CC node shadow"));
    }

    return VAR_1;
}
