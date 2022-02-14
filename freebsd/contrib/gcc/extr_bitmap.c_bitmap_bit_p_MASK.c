
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* bits; } ;
typedef TYPE_1__ bitmap_element ;
typedef int bitmap ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int) ;

int
FUNC_1 (bitmap VAR_2, int VAR_3)
{
  bitmap_element *VAR_4;
  unsigned VAR_5;
  unsigned VAR_6;

  VAR_4 = FUNC_0 (VAR_2, VAR_3);
  if (VAR_4 == 0)
    return 0;

  VAR_5 = VAR_3 % VAR_1;
  VAR_6 = VAR_3 / VAR_1 % VAR_0;

  return (VAR_4->bits[VAR_6] >> VAR_5) & 1;
}
