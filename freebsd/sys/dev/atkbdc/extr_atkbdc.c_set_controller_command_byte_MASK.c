
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int command_byte; } ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;

int
FUNC_5(KBDC VAR_7, int VAR_8, int VAR_9)
{
    if (FUNC_0(VAR_7) == -1)
 return VAR_0;

    VAR_9 = (FUNC_1(VAR_7)->command_byte & ~VAR_8) | (VAR_9 & VAR_8);
    if (VAR_9 & VAR_3) {
 if (!FUNC_3(VAR_7, VAR_1))
     return VAR_0;
    }
    if (!FUNC_3(VAR_7, VAR_2))
 return VAR_0;
    if (!FUNC_4(VAR_7, VAR_9))
 return VAR_0;
    FUNC_1(VAR_7)->command_byte = VAR_9;

    if (VAR_6)
        FUNC_2(VAR_4, "kbdc: new command byte:%04x (set_controller...)\n",
     VAR_9);

    return VAR_5;
}
