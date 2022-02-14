
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int size; int * ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned long VAR_2 ;
 TYPE_1__* VAR_3 ;

unsigned long
FUNC_2(void *VAR_4)
{
 uint8_t *VAR_5;
 uint8_t *VAR_6;
 uint8_t *VAR_7 = VAR_4;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_0();
 for (VAR_9 = 0; VAR_9 != VAR_1; VAR_9++) {
  if (VAR_3[VAR_9].ptr == ((void*)0))
   continue;

  VAR_5 = VAR_3[VAR_9].ptr;
  VAR_6 = VAR_3[VAR_9].ptr + VAR_3[VAR_9].size - 1;

  if ((VAR_7 >= VAR_5) && (VAR_7 <= VAR_6)) {

   FUNC_1();

   VAR_8 = (VAR_7 - VAR_5);

   VAR_8 -= VAR_8 % VAR_2;

   return ((VAR_9 * VAR_2 * VAR_0) + VAR_8);
  }
 }
 FUNC_1();

 return (0x80000000UL);
}
