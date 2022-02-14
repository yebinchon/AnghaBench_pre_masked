
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ ifmb_word; int ifmb_baudrate; } ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 TYPE_1__* VAR_0 ;

uint64_t
FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].ifmb_word != 0; VAR_2++) {
  if (FUNC_0(VAR_1, VAR_0[VAR_2].ifmb_word))
   return (VAR_0[VAR_2].ifmb_baudrate);
 }


 return (0);
}
