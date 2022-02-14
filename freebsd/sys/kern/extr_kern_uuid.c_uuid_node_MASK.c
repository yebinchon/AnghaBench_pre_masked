
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ state; scalar_t__* node; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_1(uint16_t *VAR_4)
{
 int VAR_5;

 if (VAR_3[0].state == VAR_0) {
  for (VAR_5 = 0; VAR_5 < (VAR_2>>1); VAR_5++)
   VAR_3[0].node[VAR_5] = (uint16_t)FUNC_0();
  *((uint8_t*)VAR_3[0].node) |= 0x01;
  VAR_3[0].state = VAR_1;
 }
 for (VAR_5 = 0; VAR_5 < (VAR_2>>1); VAR_5++)
  VAR_4[VAR_5] = VAR_3[0].node[VAR_5];
}
