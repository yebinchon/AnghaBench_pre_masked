
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct __cvmx_interrupt_handler {int data; int (* handler ) (int,int*,int ) ;} ;
struct TYPE_2__ {struct __cvmx_interrupt_handler* handlers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_7 () ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 TYPE_1__ VAR_10 ;
 unsigned long long FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,unsigned long long) ;
 int FUNC_11 (int,int*,int ) ;
 int FUNC_12 (int,int*,int ) ;
 int FUNC_13 (int,int*,int ) ;

__attribute__((used)) static void FUNC_14(int VAR_11, uint64_t *VAR_12, void *VAR_13)
{
    int VAR_14;
    uint64_t VAR_15;
    uint64_t VAR_16;
    int VAR_17;
    int VAR_18 = FUNC_7();

    if (VAR_11 == VAR_1) {

        VAR_14 = VAR_18 * 2;
        VAR_15 = FUNC_8(FUNC_3(VAR_14)) & VAR_8;
        FUNC_5(VAR_17, VAR_15);
        VAR_17 = 63 - VAR_17;

        if (VAR_17 == 51 && (FUNC_6(VAR_2) || FUNC_6(VAR_3))) {
            uint64_t VAR_19;
            int VAR_20;
            VAR_19 = FUNC_8(FUNC_4(VAR_18)) & VAR_7;
            FUNC_5(VAR_20, VAR_19);
            VAR_20 = 63 - VAR_20;

            if (VAR_20 <= 9 && VAR_20 >= 4) {
                uint64_t VAR_21 = VAR_4[VAR_20];
                if (FUNC_9(VAR_21 == 0xff)) {

                    VAR_7 &= ~(1ull << VAR_20);
                    FUNC_10(FUNC_0(VAR_18), VAR_7);
                    return;
                }
                struct __cvmx_interrupt_handler *VAR_22 = VAR_10.handlers + VAR_21;
                VAR_22->handler(VAR_21, VAR_12, VAR_22->data);
                return;
            }
        }

        if (VAR_17 >= 0) {
            VAR_16 = VAR_5[VAR_17];
            if (FUNC_9(VAR_16 == 0xff)) {

                VAR_8 &= ~(1ull << VAR_17);
                FUNC_10(FUNC_1(VAR_14), VAR_8);
                return;
            }
            struct __cvmx_interrupt_handler *VAR_23 = VAR_10.handlers + VAR_16;
            VAR_23->handler(VAR_16, VAR_12, VAR_23->data);
            return;
        }
    } else {

        VAR_14 = FUNC_7() * 2 + 1;
        VAR_15 = FUNC_8(VAR_0) & VAR_9;
        FUNC_5(VAR_17, VAR_15);
        VAR_17 = 63 - VAR_17;
        if (VAR_17 >= 0) {
            VAR_16 = VAR_6[VAR_17];
            if (FUNC_9(VAR_16 == 0xff)) {

                VAR_9 &= ~(1ull << VAR_17);
                FUNC_10(FUNC_2(VAR_14), VAR_9);
                return;
            }
            struct __cvmx_interrupt_handler *VAR_24 = VAR_10.handlers + VAR_16;
            VAR_24->handler(VAR_16, VAR_12, VAR_24->data);
            return;
        }
    }
}
