
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ cmd_num; char const* desc; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char *
FUNC_1(uint8_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0) &&
      VAR_0[VAR_2].cmd_num <= VAR_1; VAR_2++) {
  if (VAR_1 == VAR_0[VAR_2].cmd_num)
   return (VAR_0[VAR_2].desc);
 }





 if (((VAR_1 >= 0x40) && (VAR_1 <= 0x7f))
  || (VAR_1 >= 0xc0)) {
  return ("Vendor Specific SMP Command");
 } else {
  return ("Unknown SMP Command");
 }
}
