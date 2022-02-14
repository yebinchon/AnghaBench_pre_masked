
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* data; int rounds; } ;
typedef TYPE_1__ RC5_32_KEY ;
typedef unsigned long RC5_32_INT ;


 int FUNC_0 (unsigned long,unsigned long,unsigned long*,int) ;

void FUNC_1(unsigned long *VAR_0, RC5_32_KEY *VAR_1)
{
    RC5_32_INT VAR_2, VAR_3, *VAR_4;

    VAR_4 = VAR_1->data;

    VAR_2 = VAR_0[0];
    VAR_3 = VAR_0[1];
    if (VAR_1->rounds == 16) {
        FUNC_0(VAR_2, VAR_3, VAR_4, 32);
        FUNC_0(VAR_2, VAR_3, VAR_4, 30);
        FUNC_0(VAR_2, VAR_3, VAR_4, 28);
        FUNC_0(VAR_2, VAR_3, VAR_4, 26);

        FUNC_0(VAR_2, VAR_3, VAR_4, 24);
        FUNC_0(VAR_2, VAR_3, VAR_4, 22);
        FUNC_0(VAR_2, VAR_3, VAR_4, 20);
        FUNC_0(VAR_2, VAR_3, VAR_4, 18);
    } else if (VAR_1->rounds == 12) {
        FUNC_0(VAR_2, VAR_3, VAR_4, 24);
        FUNC_0(VAR_2, VAR_3, VAR_4, 22);
        FUNC_0(VAR_2, VAR_3, VAR_4, 20);
        FUNC_0(VAR_2, VAR_3, VAR_4, 18);
    }
    FUNC_0(VAR_2, VAR_3, VAR_4, 16);
    FUNC_0(VAR_2, VAR_3, VAR_4, 14);
    FUNC_0(VAR_2, VAR_3, VAR_4, 12);
    FUNC_0(VAR_2, VAR_3, VAR_4, 10);
    FUNC_0(VAR_2, VAR_3, VAR_4, 8);
    FUNC_0(VAR_2, VAR_3, VAR_4, 6);
    FUNC_0(VAR_2, VAR_3, VAR_4, 4);
    FUNC_0(VAR_2, VAR_3, VAR_4, 2);
    VAR_0[0] = VAR_2 - VAR_4[0];
    VAR_0[1] = VAR_3 - VAR_4[1];
}
