
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int command_mask; int quirks; } ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;

void
FUNC_1(KBDC VAR_3, int VAR_4)
{
    FUNC_0(VAR_3)->command_mask =
 VAR_4 & (((FUNC_0(VAR_3)->quirks & VAR_0)
     ? 0 : VAR_2) | VAR_1);
}
