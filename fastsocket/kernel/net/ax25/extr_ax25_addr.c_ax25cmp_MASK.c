
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* ax25_call; } ;
typedef TYPE_1__ ax25_address ;



int FUNC_0(const ax25_address *VAR_0, const ax25_address *VAR_1)
{
 int VAR_2 = 0;

 while (VAR_2 < 6) {
  if ((VAR_0->ax25_call[VAR_2] & 0xFE) != (VAR_1->ax25_call[VAR_2] & 0xFE))
   return 1;
  VAR_2++;
 }

 if ((VAR_0->ax25_call[VAR_2] & 0x1E) == (VAR_1->ax25_call[VAR_2] & 0x1E))
  return 0;

 return 2;
}
