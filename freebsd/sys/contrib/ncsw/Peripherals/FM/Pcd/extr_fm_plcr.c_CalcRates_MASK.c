
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ committedInfoRate; scalar_t__ peakOrExcessInfoRate; int committedBurstSize; int peakOrExcessBurstSize; int rateMode; } ;
typedef TYPE_1__ t_FmPcdPlcrNonPassthroughAlgParams ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,int,int,int*,int*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_3(uint32_t VAR_2,
                      t_FmPcdPlcrNonPassthroughAlgParams *VAR_3,
                      uint32_t *VAR_4,
                      uint32_t *VAR_5,
                      uint32_t *VAR_6,
                      uint32_t *VAR_7,
                      uint32_t *VAR_8)
{
    uint64_t VAR_9, VAR_10;
    uint32_t VAR_11, VAR_12;
    uint8_t VAR_13=0;


    VAR_12 = (uint32_t)(1000*10/(1 << VAR_2));
    if (VAR_3->committedInfoRate > VAR_3->peakOrExcessInfoRate)
        FUNC_1(VAR_3->rateMode, VAR_3->committedInfoRate, VAR_12, 0, &VAR_9, &VAR_10);
    else
        FUNC_1(VAR_3->rateMode, VAR_3->peakOrExcessInfoRate, VAR_12, 0, &VAR_9, &VAR_10);



    VAR_11 = (uint32_t)((VAR_9<<16) & 0x00000000FFFFFFFF);





    if (VAR_11 != 0)
    {
        while ((VAR_11 & 0x80000000) == 0)
        {
            VAR_11 = VAR_11 << 1;
            VAR_13++;
        }
        if (VAR_13 > 15)
        {
            FUNC_2(VAR_1, VAR_0, ("timeStampPeriod to Information rate ratio is too small"));
            return;
        }
    }
    else
    {
        VAR_11 = (uint32_t)VAR_10;
        if (!VAR_11)

            VAR_13 = 31;
        else
        {


            VAR_13=16;



            while ((VAR_11 & 0x8000) == 0)
            {
                VAR_11 = VAR_11 << 1;
                VAR_13++;
            }
        }
    }





    FUNC_1(VAR_3->rateMode, VAR_3->committedInfoRate, VAR_12, VAR_13, &VAR_9, &VAR_10);
    *VAR_4 = (uint32_t)(VAR_9 << 16 | (VAR_10 & 0xFFFF));
    FUNC_1(VAR_3->rateMode, VAR_3->peakOrExcessInfoRate, VAR_12, VAR_13, &VAR_9, &VAR_10);
    *VAR_6 = (uint32_t)(VAR_9 << 16 | (VAR_10 & 0xFFFF));

    *VAR_5 = VAR_3->committedBurstSize;
    *VAR_7 = VAR_3->peakOrExcessBurstSize;





    *VAR_8 = FUNC_0(VAR_13);
}
