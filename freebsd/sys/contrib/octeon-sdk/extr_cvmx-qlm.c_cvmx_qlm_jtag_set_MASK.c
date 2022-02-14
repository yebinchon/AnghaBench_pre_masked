
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int start_bit; int stop_bit; } ;
typedef TYPE_1__ __cvmx_qlm_jtag_field_t ;


 int VAR_0 ;
 int** VAR_1 ;
 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

void FUNC_7(int VAR_2, int VAR_3, const char *VAR_4, uint64_t VAR_5)
{
    int VAR_6, VAR_7;
    uint32_t VAR_8[VAR_0];
    int VAR_9 = FUNC_4(VAR_2);
    const __cvmx_qlm_jtag_field_t *VAR_10 = FUNC_0(VAR_4);
    int VAR_11 = FUNC_5();
    int VAR_12 = VAR_11 * VAR_9;
    int VAR_13 = 0;

    if (!VAR_10)
        return;


    FUNC_1(VAR_2);
    for (VAR_6=0; VAR_6<VAR_0; VAR_6++)
        VAR_8[VAR_6] = FUNC_2(VAR_2, 32, 0);


    for (VAR_7=0; VAR_7<VAR_9; VAR_7++)
    {
        uint64_t VAR_14 = VAR_5;
        int VAR_15;
        if ((VAR_7 != VAR_3) && (VAR_3 != -1))
            continue;
        for (VAR_15 = VAR_10->start_bit + (VAR_9-1-VAR_7)*VAR_11;
             VAR_15 <= VAR_10->stop_bit + (VAR_9-1-VAR_7)*VAR_11;
             VAR_15++)
        {
            if (VAR_14 & 1)
                VAR_8[VAR_15/32] |= 1<<(VAR_15&31);
            else
                VAR_8[VAR_15/32] &= ~(1<<(VAR_15&31));
            VAR_14>>=1;
        }
    }


    while (VAR_13 < VAR_12)
    {
        uint32_t VAR_16 = VAR_8[VAR_13/32] ^ VAR_1[VAR_2][VAR_13/32];
        int VAR_17 = VAR_12 - VAR_13;
        if (VAR_17 > 32)
            VAR_17 = 32;
        FUNC_2(VAR_2, VAR_17, VAR_16);
        VAR_13 += 32;
    }


    FUNC_3(VAR_2);



    FUNC_6(1000);
}
