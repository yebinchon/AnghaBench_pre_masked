
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** data; } ;
typedef TYPE_1__ IDEA_KEY_SCHEDULE ;
typedef int IDEA_INT ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long,int ,unsigned long) ;

void FUNC_2(unsigned long *VAR_0, IDEA_KEY_SCHEDULE *VAR_1)
{
    register IDEA_INT *VAR_2;
    register unsigned long VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_4 = VAR_0[0];
    VAR_3 = (VAR_4 >> 16);
    VAR_6 = VAR_0[1];
    VAR_5 = (VAR_6 >> 16);

    VAR_2 = &(VAR_1->data[0][0]);

    FUNC_0(0);
    FUNC_0(1);
    FUNC_0(2);
    FUNC_0(3);
    FUNC_0(4);
    FUNC_0(5);
    FUNC_0(6);
    FUNC_0(7);

    VAR_3 &= 0xffff;
    FUNC_1(VAR_3, VAR_3, *VAR_2, VAR_9);
    VAR_2++;

    VAR_7 = VAR_5 + *(VAR_2++);
    VAR_8 = VAR_4 + *(VAR_2++);

    VAR_6 &= 0xffff;
    FUNC_1(VAR_6, VAR_6, *VAR_2, VAR_9);

    VAR_0[0] = (VAR_7 & 0xffff) | ((VAR_3 & 0xffff) << 16);
    VAR_0[1] = (VAR_6 & 0xffff) | ((VAR_8 & 0xffff) << 16);
}
