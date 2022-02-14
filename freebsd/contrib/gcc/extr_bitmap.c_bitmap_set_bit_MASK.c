
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int indx; unsigned int* bits; } ;
typedef TYPE_1__ bitmap_element ;
typedef int bitmap ;
typedef unsigned int BITMAP_WORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,int) ;

void
FUNC_3 (bitmap VAR_3, int VAR_4)
{
  bitmap_element *VAR_5 = FUNC_2 (VAR_3, VAR_4);
  unsigned VAR_6 = VAR_4 / VAR_2 % VAR_1;
  unsigned VAR_7 = VAR_4 % VAR_2;
  BITMAP_WORD VAR_8 = ((BITMAP_WORD) 1) << VAR_7;

  if (VAR_5 == 0)
    {
      VAR_5 = FUNC_0 (VAR_3);
      VAR_5->indx = VAR_4 / VAR_0;
      VAR_5->bits[VAR_6] = VAR_8;
      FUNC_1 (VAR_3, VAR_5);
    }
  else
    VAR_5->bits[VAR_6] |= VAR_8;
}
