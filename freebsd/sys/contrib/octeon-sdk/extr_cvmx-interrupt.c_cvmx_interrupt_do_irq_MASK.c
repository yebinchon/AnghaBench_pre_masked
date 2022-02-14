
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct __cvmx_interrupt_handler {int data; int (* handler ) (int,int*,int ) ;} ;
struct TYPE_2__ {struct __cvmx_interrupt_handler* handlers; int (* exception_handler ) (int*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 () ;
 TYPE_1__ VAR_4 ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int,int*,int ) ;

void FUNC_9(uint64_t *VAR_5)
{
    uint64_t VAR_6;
    uint64_t VAR_7;
    uint64_t VAR_8;
    uint64_t VAR_9;
    int VAR_10;
    uint32_t VAR_11;

    asm volatile ("dmfc0 %0,$13,0" : "=r" (VAR_7));
    asm volatile ("dmfc0 %0,$12,0" : "=r" (VAR_8));


    if ((VAR_7 & 0x7c) == 0)
    {
        asm volatile ("dmtc0 %0, $12, 0" : : "r" (VAR_8 & ~(0xff02)));
    }



    VAR_11 = (uint32_t)(VAR_5[27] & 0x780);




    VAR_10 = FUNC_5();
    if (VAR_11 == 0x100 && (VAR_8 & 0x4))
    {
        FUNC_0(VAR_9);


        if (FUNC_3(VAR_0) || FUNC_3(VAR_1))
        {
            if (VAR_5[34] & 0x1)
                FUNC_6("Dcache error detected: core: %d, way: %d, va 7:3: 0x%x\n", VAR_10, (int)(VAR_5[34] >> 8) & 0x3f, (int)(VAR_5[34] >> 3) & 0x1f);
            else if (VAR_9 & 0x1)
                FUNC_6("Icache error detected: core: %d, set: %d, way : %d, va 6:3 = 0x%x\n", VAR_10, (int)(VAR_9 >> 5) & 0x3f, (int)(VAR_9 >> 3) & 0x3, (int)(VAR_9 >> 11) & 0xf);
            else
                FUNC_6("Cache error exception: core %d\n", VAR_10);
        }
        else
        {
            if (VAR_5[34] & 0x1)
                FUNC_6("Dcache error detected: core: %d, way: %d, va 9:7: 0x%x\n", VAR_10, (int)(VAR_5[34] >> 10) & 0x1f, (int)(VAR_5[34] >> 7) & 0x3);
            else if (VAR_9 & 0x1)
                FUNC_6("Icache error detected: core: %d, way : %d, va 9:3 = 0x%x\n", VAR_10, (int)(VAR_9 >> 10) & 0x3f, (int)(VAR_9 >> 3) & 0x7f);
            else
                FUNC_6("Cache error exception: core %d\n", VAR_10);
        }
        FUNC_2(1);
        FUNC_1(0);
    }



    if (FUNC_3(VAR_2) || FUNC_3(VAR_3))
    {
        VAR_10 = FUNC_5();
        if (VAR_5[34] & 0x4)
        {
            FUNC_6("Bus error detected due to DID timeout: core: %d\n", VAR_10);
            FUNC_2(4);
        }
        else if (VAR_5[34] & 0x2)
        {
            FUNC_6("Bus error detected due to write buffer parity: core: %d\n", VAR_10);
            FUNC_2(2);
        }
    }

    if ((VAR_7 & 0x7c) != 0)
    {
        VAR_4.exception_handler(VAR_5);
        goto return_from_interrupt;
    }


    VAR_6 = ((VAR_7 & VAR_8) >> 8) & 0xff;
    if (VAR_6 == 0)
    {
        goto return_from_interrupt;
    }

    for (VAR_10=0; VAR_10<8; VAR_10++)
    {
        if (VAR_6 & (1<<VAR_10))
        {
            struct __cvmx_interrupt_handler *VAR_12 = VAR_4.handlers + VAR_10;
            VAR_12->handler(VAR_10, VAR_5, VAR_12->data);
            goto return_from_interrupt;
        }
    }


    FUNC_4(VAR_5);

return_from_interrupt:

    asm volatile ("dmtc0 %0, $12, 0" : : "r" (VAR_8));
}
