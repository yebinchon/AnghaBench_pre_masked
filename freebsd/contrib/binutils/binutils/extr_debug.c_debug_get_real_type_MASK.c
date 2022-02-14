
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct debug_type_real_list {struct debug_type* t; struct debug_type_real_list* next; } ;
struct TYPE_6__ {TYPE_2__* knamed; TYPE_1__* kindirect; } ;
struct debug_type {int kind; TYPE_3__ u; } ;
typedef struct debug_type* debug_type ;
struct TYPE_5__ {struct debug_type* type; } ;
struct TYPE_4__ {struct debug_type** slot; } ;





 char* FUNC_0 (char*) ;
 char* FUNC_1 (void*,struct debug_type*) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static struct debug_type *
FUNC_3 (void *VAR_1, debug_type VAR_2,
       struct debug_type_real_list *VAR_3)
{
  struct debug_type_real_list *VAR_4;
  struct debug_type_real_list VAR_5;

  switch (VAR_2->kind)
    {
    default:
      return VAR_2;

    case 130:
    case 129:
    case 128:
      break;
    }

  for (VAR_4 = VAR_3; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      if (VAR_4->t == VAR_2 || VAR_4 == VAR_4->next)
 {
   FUNC_2 (VAR_0,
     FUNC_0("debug_get_real_type: circular debug information for %s\n"),
     FUNC_1 (VAR_1, VAR_2));
   return ((void*)0);
 }
    }

  VAR_5.next = VAR_3;
  VAR_5.t = VAR_2;

  switch (VAR_2->kind)
    {

    default:
    case 130:
      if (*VAR_2->u.kindirect->slot != ((void*)0))
 return FUNC_3 (VAR_1, *VAR_2->u.kindirect->slot, &VAR_5);
      return VAR_2;
    case 129:
    case 128:
      return FUNC_3 (VAR_1, VAR_2->u.knamed->type, &VAR_5);
    }

}
