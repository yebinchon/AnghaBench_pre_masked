
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i; } ;
struct TYPE_6__ {int tag; TYPE_1__ attr; struct TYPE_6__* next; } ;
typedef TYPE_2__ obj_attribute_list ;
typedef int bfd ;
struct TYPE_7__ {int i; } ;


 int VAR_0 ;
 TYPE_4__** FUNC_0 (int *) ;
 TYPE_2__** FUNC_1 (int *) ;

int
FUNC_2 (bfd *VAR_1, int VAR_2, int VAR_3)
{
  obj_attribute_list *VAR_4;

  if (VAR_3 < VAR_0)
    {

      return FUNC_0 (VAR_1)[VAR_2][VAR_3].i;
    }
  else
    {
      for (VAR_4 = FUNC_1 (VAR_1)[VAR_2];
    VAR_4;
    VAR_4 = VAR_4->next)
 {
   if (VAR_3 == VAR_4->tag)
     return VAR_4->attr.i;
   if (VAR_3 < VAR_4->tag)
     break;
 }
      return 0;
    }
}
