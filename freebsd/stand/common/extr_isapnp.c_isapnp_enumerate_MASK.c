
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * arch_isaoutb; int * arch_isainb; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(void)
{
    int VAR_2;


    if ((VAR_0.arch_isainb == ((void*)0)) || (VAR_0.arch_isaoutb == ((void*)0)))
 return;





    if ((VAR_1 > 0) &&
 (((VAR_1 < 0x203) ||
   (VAR_1 > 0x3ff) ||
   (VAR_1 & 0x3) != 0x3)))

 VAR_1 = 0;

    if (VAR_1 < 0) {

 return;

    } else if (VAR_1 > 0) {

 FUNC_0();

    } else {

 for (VAR_2 = 0x80; VAR_2 < 0xff; VAR_2 += 0x10) {

     VAR_1 = (VAR_2 << 2) | 0x3;
     if (FUNC_0() > 0)
  break;
 }
    }
}
