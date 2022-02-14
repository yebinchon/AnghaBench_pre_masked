
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {uintptr_t addr; size_t size; char* name; } ;
typedef TYPE_1__ syment_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

char *
FUNC_0(uintptr_t VAR_2, uintptr_t *VAR_3, size_t *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = VAR_0 - 1;
 int VAR_7;
 syment_t *VAR_8;

 while (VAR_6 - VAR_5 > 1) {
  VAR_7 = (VAR_5 + VAR_6) / 2;
  if (VAR_2 >= VAR_1[VAR_7].addr) {
   VAR_5 = VAR_7;
  } else {
   VAR_6 = VAR_7;
  }
 }
 VAR_8 = &VAR_1[VAR_5];
 *VAR_3 = VAR_2 - VAR_8->addr;
 *VAR_4 = VAR_8->size;
 return (VAR_8->name);
}
