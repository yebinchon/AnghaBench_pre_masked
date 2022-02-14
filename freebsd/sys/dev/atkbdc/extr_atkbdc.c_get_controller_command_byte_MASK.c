
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int command_byte; int kbd; } ;
typedef int KBDC ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(KBDC VAR_1)
{
    if (FUNC_1(VAR_1)->command_byte != -1)
 return FUNC_1(VAR_1)->command_byte;
    if (!FUNC_3(VAR_1, VAR_0))
 return -1;
    FUNC_0(&FUNC_1(VAR_1)->kbd);
    FUNC_1(VAR_1)->command_byte = FUNC_2(VAR_1);
    return FUNC_1(VAR_1)->command_byte;
}
