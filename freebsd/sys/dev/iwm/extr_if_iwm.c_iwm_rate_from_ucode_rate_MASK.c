
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ plcp; scalar_t__ rate; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static uint8_t
FUNC_0(uint32_t VAR_2)
{
 uint8_t VAR_3 = VAR_2 & 0xff;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++) {
  if (VAR_1[VAR_4].plcp == VAR_3)
   return VAR_1[VAR_4].rate;
 }
 return 0;
}
