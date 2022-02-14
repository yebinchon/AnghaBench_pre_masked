
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tag; int attr; struct TYPE_4__* next; } ;
typedef TYPE_1__ obj_attribute_list ;
typedef int obj_attribute ;
typedef int bfd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int ** FUNC_1 (int *) ;
 TYPE_1__** FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static obj_attribute *
FUNC_4 (bfd *VAR_1, int VAR_2, int VAR_3)
{
  obj_attribute *VAR_4;
  obj_attribute_list *VAR_5;
  obj_attribute_list *VAR_6;
  obj_attribute_list **VAR_7;


  if (VAR_3 < VAR_0)
    {

      VAR_4 = &FUNC_1 (VAR_1)[VAR_2][VAR_3];
    }
  else
    {

      VAR_5 = (obj_attribute_list *)
 FUNC_0 (VAR_1, sizeof (obj_attribute_list));
      FUNC_3 (VAR_5, 0, sizeof (obj_attribute_list));
      VAR_5->tag = VAR_3;

      VAR_7 = &FUNC_2 (VAR_1)[VAR_2];
      for (VAR_6 = *VAR_7; VAR_6; VAR_6 = VAR_6->next)
 {
   if (VAR_3 < VAR_6->tag)
     break;
   VAR_7 = &VAR_6->next;
 }
      VAR_5->next = *VAR_7;
      *VAR_7 = VAR_5;
      VAR_4 = &VAR_5->attr;
    }

  return VAR_4;
}
