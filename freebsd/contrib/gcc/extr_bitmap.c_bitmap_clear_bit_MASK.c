
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int* bits; } ;
typedef TYPE_1__ bitmap_element ;
typedef int bitmap ;
typedef unsigned int BITMAP_WORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,int) ;

void
FUNC_3 (bitmap VAR_2, int VAR_3)
{
  bitmap_element *VAR_4 = FUNC_2 (VAR_2, VAR_3);

  if (VAR_4 != 0)
    {
      unsigned VAR_5 = VAR_3 % VAR_1;
      unsigned VAR_6 = VAR_3 / VAR_1 % VAR_0;
      VAR_4->bits[VAR_6] &= ~ (((BITMAP_WORD) 1) << VAR_5);


      if (FUNC_1 (VAR_4))
 FUNC_0 (VAR_2, VAR_4);
    }
}
