
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* handlers; } ;
struct TYPE_3__ {int handler_data; } ;


 int FUNC_0 (int ,unsigned long long,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(int VAR_6, int VAR_7)
{
    uint32_t VAR_8;

    if (VAR_6 < 0 || VAR_6 >= VAR_0)
        return;

    VAR_8 = FUNC_5();
    if (VAR_6 <= VAR_1) {
        uint32_t VAR_9;
        asm volatile ("mfc0 %0,$12,0" : "=r" (VAR_9));
        FUNC_0(VAR_9, 1 << (8 + VAR_6), VAR_7);
        asm volatile ("mtc0 %0,$12,0" : : "r" (VAR_9));
    } else {
        int VAR_10, VAR_11;
        int VAR_12 = VAR_5.handlers[VAR_6].handler_data;
        int VAR_13 = VAR_12 >> 6;
        int VAR_14 = FUNC_4();

        if (VAR_12 < 0)
            goto out;

        VAR_10 = VAR_12 & 0x3f;
        VAR_11 = VAR_14 * 2;

        if (VAR_13 == 8)
        {
            FUNC_0(VAR_2, 1ull << VAR_10, VAR_7);
            FUNC_0(VAR_3, 1ull << 51, VAR_7);
            FUNC_7(FUNC_1(VAR_14), VAR_2);
        }
        else if (VAR_12 & 0x40) {

            VAR_11 += 1;
            FUNC_0(VAR_4, 1ull << VAR_10, VAR_7);
            FUNC_7(FUNC_3(VAR_11), VAR_4);
        } else {

            FUNC_0(VAR_3, 1ull << VAR_10, VAR_7);
            FUNC_7(FUNC_2(VAR_11), VAR_3);
        }
    }
out:
    FUNC_6(VAR_8);
}
