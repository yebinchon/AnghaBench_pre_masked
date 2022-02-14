
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag; int attr; struct TYPE_3__* next; } ;
typedef TYPE_1__ obj_attribute_list ;
typedef int obj_attribute ;
typedef scalar_t__ bfd_vma ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int ** FUNC_0 (int *) ;
 TYPE_1__** FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 char* FUNC_4 (int *,int) ;

__attribute__((used)) static bfd_vma
FUNC_5 (bfd *VAR_2, int VAR_3)
{
  bfd_vma VAR_4;
  obj_attribute *VAR_5;
  obj_attribute_list *VAR_6;
  int VAR_7;
  const char *VAR_8 = FUNC_4 (VAR_2, VAR_3);

  if (!VAR_8)
    return 0;

  VAR_5 = FUNC_0 (VAR_2)[VAR_3];
  VAR_4 = 0;
  for (VAR_7 = 4; VAR_7 < VAR_0; VAR_7++)
    VAR_4 += FUNC_2 (VAR_7, &VAR_5[VAR_7]);

  for (VAR_6 = FUNC_1 (VAR_2)[VAR_3];
       VAR_6;
       VAR_6 = VAR_6->next)
    VAR_4 += FUNC_2 (VAR_6->tag, &VAR_6->attr);


  return ((VAR_4 || VAR_3 == VAR_1)
   ? VAR_4 + 10 + FUNC_3 (VAR_8)
   : 0);
}
