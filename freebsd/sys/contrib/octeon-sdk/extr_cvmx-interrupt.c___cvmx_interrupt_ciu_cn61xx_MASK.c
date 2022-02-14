
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
 int FUNC_2 (int,int) ;
 int* VAR_0 ;
 int FUNC_3 () ;
 unsigned long long VAR_1 ;
 TYPE_1__ VAR_2 ;
 unsigned long long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,unsigned long long) ;
 int FUNC_7 (int,int*,int ) ;

__attribute__((used)) static void FUNC_8(int VAR_3, uint64_t *VAR_4, void *VAR_5)
{

    int VAR_6 = FUNC_3();
    int VAR_7;
    uint64_t VAR_8;
    uint64_t VAR_9;
    int VAR_10;

    VAR_7 = VAR_6 * 2 + 1;
    VAR_8 = FUNC_4(FUNC_1(VAR_6)) & VAR_1;
    FUNC_2(VAR_10, VAR_8);
    VAR_10 = 63 - VAR_10;
    if (VAR_10 >= 0) {
        VAR_9 = VAR_0[VAR_10];
        if (FUNC_5(VAR_9 == 0xff)) {

            VAR_1 &= ~(1ull << VAR_10);
            FUNC_6(FUNC_0(VAR_7), VAR_1);
            return;
        }
        struct __cvmx_interrupt_handler *VAR_11 = VAR_2.handlers + VAR_9;
        VAR_11->handler(VAR_9, VAR_4, VAR_11->data);
        return;
    }
}
