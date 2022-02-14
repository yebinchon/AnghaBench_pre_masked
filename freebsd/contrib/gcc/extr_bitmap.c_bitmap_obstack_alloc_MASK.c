
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int obstack; TYPE_2__* heads; } ;
typedef TYPE_1__ bitmap_obstack ;
typedef TYPE_2__* bitmap ;
struct TYPE_10__ {scalar_t__ first; } ;


 TYPE_2__* FUNC_0 (int *,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

bitmap
FUNC_2 (bitmap_obstack *VAR_2)
{
  bitmap VAR_3;

  if (!VAR_2)
    VAR_2 = &VAR_0;
  VAR_3 = VAR_2->heads;
  if (VAR_3)
    VAR_2->heads = (void *)VAR_3->first;
  else
    VAR_3 = FUNC_0 (&VAR_2->obstack, VAR_1);
  FUNC_1 (VAR_3, VAR_2);

  return VAR_3;
}
