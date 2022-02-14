
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int maxTh; int minTh; int probabilityDenominator; } ;
typedef TYPE_1__ t_QmCgWredCurve ;
typedef int t_Error ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static t_Error FUNC_3(t_QmCgWredCurve *VAR_3, uint32_t *VAR_4)
{
    uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    uint32_t VAR_10=0, VAR_11=0, VAR_12, VAR_13=0, VAR_14=0, VAR_15;
    int VAR_16 = 1000;
    int VAR_17, VAR_18;






     VAR_17 = (int)VAR_3->maxTh;
     for (VAR_8=0 ; VAR_8<256; VAR_8++ )
         for (VAR_9=0 ; VAR_9<32; VAR_9++ )
         {
             VAR_18 = FUNC_0((int)(VAR_3->maxTh - VAR_8*(1<<VAR_9)));
             if (VAR_18 < VAR_17)
             {
                VAR_10 = VAR_8;
                VAR_11 = VAR_9;
                VAR_17 = VAR_18;
             }
         }
     FUNC_1(VAR_10 <256);
     FUNC_1(VAR_11 <32);
     VAR_3->maxTh = VAR_10*(1<<VAR_11);

     if(VAR_3->maxTh <= VAR_3->minTh)
        FUNC_2(VAR_2, VAR_0, ("maxTh must be larger than minTh"));
     if(VAR_3->probabilityDenominator > 64)
        FUNC_2(VAR_2, VAR_0, ("probabilityDenominator mustn't be 1-64"));





    VAR_5 = (uint32_t)(256*1000/VAR_3->probabilityDenominator);
    if (VAR_5 % 4*VAR_16)
    {
        VAR_6 = VAR_5 + (VAR_5 % (4*VAR_16));
        VAR_7 = VAR_6 + 4*VAR_16;
        if((VAR_7 - VAR_5) > (VAR_5 - VAR_6))
            VAR_5 = VAR_6;
        else
            VAR_5 = VAR_7;
    }
    VAR_5 = VAR_5/VAR_16;
    FUNC_1(VAR_5 <= 256);
    VAR_15 = (uint8_t)(VAR_5/4 - 1);

    if(VAR_5 >= (VAR_3->maxTh - VAR_3->minTh))
        FUNC_2(VAR_2, VAR_0, ("Due to probabilityDenominator selected, maxTh-minTh must be larger than %d", VAR_5));

    VAR_16 = 1000000;
    VAR_12 = VAR_5*VAR_16/(VAR_3->maxTh - VAR_3->minTh);

    VAR_17 = (int)VAR_12;
    for (VAR_8=(uint32_t)(64*VAR_16) ; VAR_8<128*VAR_16; VAR_8 += VAR_16 )
        for (VAR_9=7 ; VAR_9<64; VAR_9++ )
        {
            VAR_18 = FUNC_0((int)(VAR_12 - VAR_8/(1<<VAR_9)));
            if (VAR_18 < VAR_17)
            {
               VAR_13 = VAR_8;
               VAR_14 = VAR_9;
               VAR_17 = VAR_18;
            }
        }
    VAR_13 = VAR_13/VAR_16;
    FUNC_1(VAR_13<128 && VAR_13>=64);
    FUNC_1(VAR_14<64 && VAR_14>=7);

    *VAR_4 = ((VAR_10 << 24) |
                    (VAR_11 << 19) |
                    (VAR_13 << 12) |
                    (VAR_14 << 6) |
                    VAR_15);

    return VAR_1;
}
