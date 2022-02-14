
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hashval_t ;
struct TYPE_4__ {int * bits; int indx; struct TYPE_4__* next; } ;
typedef TYPE_1__ bitmap_element ;
typedef TYPE_2__* bitmap ;
struct TYPE_5__ {TYPE_1__* first; } ;
typedef int BITMAP_WORD ;


 int VAR_0 ;

hashval_t
FUNC_0 (bitmap VAR_1)
{
  bitmap_element *VAR_2;
  BITMAP_WORD VAR_3 = 0;
  int VAR_4;

  for (VAR_2 = VAR_1->first; VAR_2; VAR_2 = VAR_2->next)
    {
      VAR_3 ^= VAR_2->indx;
      for (VAR_4 = 0; VAR_4 != VAR_0; VAR_4++)
 VAR_3 ^= VAR_2->bits[VAR_4];
    }
  return (hashval_t)VAR_3;
}
