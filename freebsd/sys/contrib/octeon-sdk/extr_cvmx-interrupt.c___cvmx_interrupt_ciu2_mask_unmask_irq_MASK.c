
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* handlers; } ;
struct TYPE_3__ {int handler_data; } ;


 int FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_8 (scalar_t__,unsigned long long) ;

__attribute__((used)) static void FUNC_9(int VAR_3, int VAR_4)
{

    if (VAR_3 < 0 || VAR_3 >= VAR_0)
        return;

    if (VAR_3 <= VAR_1) {
        uint32_t VAR_5, VAR_6;

        VAR_5 = FUNC_6();
        asm volatile ("mfc0 %0,$12,0" : "=r" (VAR_6));
        FUNC_0(VAR_6, 1 << (8 + VAR_3), VAR_4);
        asm volatile ("mtc0 %0,$12,0" : : "r" (VAR_6));
        FUNC_7(VAR_5);
    } else {
        int VAR_7;
        uint64_t VAR_8;
        int VAR_9 = FUNC_5();

        int VAR_10 = VAR_2.handlers[VAR_3].handler_data;

        if (VAR_10 < 0)
            return;

        VAR_7 = VAR_10 >> 6;
        VAR_10 &= 0x3f;
        if (VAR_7 > 7) {

            if (VAR_4)
                VAR_8 = FUNC_1(VAR_9);
            else
                VAR_8 = FUNC_2(VAR_9);
        } else {
            if (VAR_4)
                VAR_8 = FUNC_3(VAR_9) + (0x1000 * VAR_7);
            else
                VAR_8 = FUNC_4(VAR_9) + (0x1000 * VAR_7);
        }
        FUNC_8(VAR_8, 1ull << VAR_10);
    }
}
