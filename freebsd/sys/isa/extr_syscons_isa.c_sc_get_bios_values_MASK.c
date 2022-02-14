
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int shift_state; int bell_pitch; } ;
typedef TYPE_1__ bios_values_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_1(bios_values_t *VAR_9)
{

 uint8_t VAR_10;

 VAR_10 = *(uint8_t *)FUNC_0(0x417);
 VAR_9->shift_state = ((VAR_10 & VAR_3) != 0 ? VAR_6 : 0) |
     ((VAR_10 & VAR_4) != 0 ? VAR_7 : 0) |
     ((VAR_10 & VAR_5) != 0 ? VAR_8 : 0) |
     ((VAR_10 & VAR_2) != 0 ? VAR_0 : 0);

 VAR_9->bell_pitch = VAR_1;
}
