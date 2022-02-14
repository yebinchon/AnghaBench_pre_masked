
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* bits; } ;
typedef TYPE_1__ bitmap_element ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0 (bitmap_element *VAR_1)
{



  unsigned VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    if (VAR_1->bits[VAR_2] != 0)
      return 0;

  return 1;

}
