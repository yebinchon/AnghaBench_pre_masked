
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int i; char* s; } ;
struct TYPE_4__ {scalar_t__ tag; TYPE_2__ attr; struct TYPE_4__* next; } ;
typedef TYPE_1__ obj_attribute_list ;
typedef TYPE_2__ obj_attribute ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,char*,...) ;
 int FUNC_2 (int *,int,char*) ;
 TYPE_1__** FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;

bfd_boolean
FUNC_5 (bfd *VAR_5, bfd *VAR_6)
{
  obj_attribute *VAR_7;
  obj_attribute *VAR_8;
  obj_attribute_list *VAR_9;
  obj_attribute_list *VAR_10;
  int VAR_11;



  for (VAR_11 = VAR_1; VAR_11 <= VAR_2; VAR_11++)
    {
      VAR_9 = FUNC_3 (VAR_5)[VAR_11];
      VAR_10 = FUNC_3 (VAR_5)[VAR_11];
      while (VAR_9 && VAR_9->tag == VAR_4)
 {
   VAR_7 = &VAR_9->attr;
   if (VAR_7->i == 0)
     continue;
   if (VAR_7->i == 1 && FUNC_4 (VAR_7->s, "gnu") != 0)
     {
       FUNC_1
  (FUNC_0("ERROR: %B: Must be processed by '%s' toolchain"),
   VAR_5, VAR_7->s);
       return VAR_0;
     }
   if (!VAR_10 || VAR_10->tag != VAR_4
       || FUNC_4 (VAR_7->s, VAR_10->attr.s) != 0)
     {

       FUNC_2 (VAR_6, VAR_7->i, VAR_7->s);
       continue;
     }
   VAR_8 = &VAR_10->attr;

   for (;;)
     {
       if (VAR_10->tag != VAR_4
    || VAR_7->i != VAR_8->i
    || FUNC_4 (VAR_7->s, VAR_8->s) != 0)
  {
    FUNC_1
      (FUNC_0("ERROR: %B: Incompatible object tag '%s':%d"),
       VAR_5, VAR_7->s, VAR_7->i);
    return VAR_0;
  }
       VAR_9 = VAR_9->next;
       if (VAR_9->tag != VAR_4
    || FUNC_4 (VAR_7->s, VAR_9->attr.s) != 0)
  break;
       VAR_7 = &VAR_9->attr;
       VAR_10 = VAR_10->next;
       if (VAR_10)
  VAR_8 = &VAR_10->attr;
     }


   if (VAR_10 && VAR_10->tag == VAR_4
       && FUNC_4 (VAR_7->s, VAR_10->attr.s) == 0)
     {
       FUNC_1
  (FUNC_0("ERROR: %B: Incompatible object tag '%s':%d"),
   VAR_5, VAR_7->s, VAR_10->attr.i);
       return VAR_0;
     }
 }
    }

  return VAR_3;
}
