
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct algo_needs {scalar_t__ num; scalar_t__* needs; } ;



int FUNC_0(struct algo_needs* VAR_0, uint8_t VAR_1)
{
 if(VAR_0->needs[VAR_1]) {
  VAR_0->needs[VAR_1] = 0;
  VAR_0->num --;
  if(VAR_0->num == 0)
   return 1;
 }
 return 0;
}
