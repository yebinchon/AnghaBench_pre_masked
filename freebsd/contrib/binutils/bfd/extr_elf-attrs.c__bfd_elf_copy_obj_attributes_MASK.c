
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type; scalar_t__* s; int i; } ;
struct TYPE_5__ {int tag; TYPE_2__ attr; struct TYPE_5__* next; } ;
typedef TYPE_1__ obj_attribute_list ;
typedef TYPE_2__ obj_attribute ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int,int ,scalar_t__*) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int,int ,scalar_t__*) ;
 TYPE_2__** FUNC_5 (int *) ;
 TYPE_1__** FUNC_6 (int *) ;

void
FUNC_7 (bfd *VAR_3, bfd *VAR_4)
{
  obj_attribute *VAR_5;
  obj_attribute *VAR_6;
  obj_attribute_list *VAR_7;
  int VAR_8;
  int VAR_9;

  for (VAR_9 = VAR_1; VAR_9 <= VAR_2; VAR_9++)
    {
      VAR_5 = &FUNC_5 (VAR_3)[VAR_9][4];
      VAR_6 = &FUNC_5 (VAR_4)[VAR_9][4];
      for (VAR_8 = 4; VAR_8 < VAR_0; VAR_8++)
 {
   VAR_6->type = VAR_5->type;
   VAR_6->i = VAR_5->i;
   if (VAR_5->s && *VAR_5->s)
     VAR_6->s = FUNC_0 (VAR_4, VAR_5->s);
   VAR_5++;
   VAR_6++;
 }

      for (VAR_7 = FUNC_6 (VAR_3)[VAR_9];
    VAR_7;
    VAR_7 = VAR_7->next)
 {
   VAR_5 = &VAR_7->attr;
   switch (VAR_5->type)
     {
     case 1:
       FUNC_3 (VAR_4, VAR_9, VAR_7->tag, VAR_5->i);
       break;
     case 2:
       FUNC_4 (VAR_4, VAR_9, VAR_7->tag,
        VAR_5->s);
       break;
     case 3:
       FUNC_2 (VAR_4, VAR_9, VAR_5->i,
        VAR_5->s);
       break;
     default:
       FUNC_1 ();
     }
 }
    }
}
