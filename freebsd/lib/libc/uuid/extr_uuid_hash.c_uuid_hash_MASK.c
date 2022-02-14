
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int time_low; } ;
typedef TYPE_1__ uuid_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;

uint16_t
FUNC_0(const uuid_t *VAR_1, uint32_t *VAR_2)
{

 if (VAR_2)
  *VAR_2 = VAR_0;





 return ((VAR_1) ? VAR_1->time_low & 0xffff : 0);
}
