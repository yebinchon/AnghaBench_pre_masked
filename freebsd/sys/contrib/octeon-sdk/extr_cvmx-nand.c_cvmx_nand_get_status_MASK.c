
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int ,int ,int ,int ,int ,int) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(int VAR_5)
{
    int VAR_6;
    int VAR_7 = !!(VAR_4[VAR_5].flags & VAR_1);

    FUNC_0();
    FUNC_1("%d", VAR_5);

    if ((VAR_5 < 0) || (VAR_5 > 7))
        FUNC_2(VAR_0);

    *((uint8_t*)VAR_3 + VAR_7) = 0xff;
    VAR_6 = FUNC_3(VAR_5, VAR_2, 0, 0, 0, FUNC_4(VAR_3), 8);
    if (VAR_6 > 0)
        VAR_6 = *((uint8_t*)VAR_3 + VAR_7);

    FUNC_2(VAR_6);
}
