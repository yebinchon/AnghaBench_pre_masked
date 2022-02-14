
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ks; } ;
struct TYPE_4__ {int* deslong; } ;
typedef TYPE_2__ DES_key_schedule ;
typedef int DES_LONG ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(DES_LONG *VAR_0, DES_key_schedule *VAR_1, int VAR_2)
{
    register DES_LONG VAR_3, VAR_4, VAR_5, VAR_6;
    register DES_LONG *VAR_7;

    VAR_4 = VAR_0[0];
    VAR_3 = VAR_0[1];
    VAR_4 = FUNC_1(VAR_4, 29) & 0xffffffffL;
    VAR_3 = FUNC_1(VAR_3, 29) & 0xffffffffL;

    VAR_7 = VAR_1->ks->deslong;




    if (VAR_2) {
        FUNC_0(VAR_3, VAR_4, 0);
        FUNC_0(VAR_4, VAR_3, 2);
        FUNC_0(VAR_3, VAR_4, 4);
        FUNC_0(VAR_4, VAR_3, 6);
        FUNC_0(VAR_3, VAR_4, 8);
        FUNC_0(VAR_4, VAR_3, 10);
        FUNC_0(VAR_3, VAR_4, 12);
        FUNC_0(VAR_4, VAR_3, 14);
        FUNC_0(VAR_3, VAR_4, 16);
        FUNC_0(VAR_4, VAR_3, 18);
        FUNC_0(VAR_3, VAR_4, 20);
        FUNC_0(VAR_4, VAR_3, 22);
        FUNC_0(VAR_3, VAR_4, 24);
        FUNC_0(VAR_4, VAR_3, 26);
        FUNC_0(VAR_3, VAR_4, 28);
        FUNC_0(VAR_4, VAR_3, 30);
    } else {
        FUNC_0(VAR_3, VAR_4, 30);
        FUNC_0(VAR_4, VAR_3, 28);
        FUNC_0(VAR_3, VAR_4, 26);
        FUNC_0(VAR_4, VAR_3, 24);
        FUNC_0(VAR_3, VAR_4, 22);
        FUNC_0(VAR_4, VAR_3, 20);
        FUNC_0(VAR_3, VAR_4, 18);
        FUNC_0(VAR_4, VAR_3, 16);
        FUNC_0(VAR_3, VAR_4, 14);
        FUNC_0(VAR_4, VAR_3, 12);
        FUNC_0(VAR_3, VAR_4, 10);
        FUNC_0(VAR_4, VAR_3, 8);
        FUNC_0(VAR_3, VAR_4, 6);
        FUNC_0(VAR_4, VAR_3, 4);
        FUNC_0(VAR_3, VAR_4, 2);
        FUNC_0(VAR_4, VAR_3, 0);
    }

    VAR_0[0] = FUNC_1(VAR_3, 3) & 0xffffffffL;
    VAR_0[1] = FUNC_1(VAR_4, 3) & 0xffffffffL;
    VAR_3 = VAR_4 = VAR_5 = VAR_6 = 0;
}
