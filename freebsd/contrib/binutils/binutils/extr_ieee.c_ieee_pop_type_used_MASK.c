
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee_buflist {int dummy; } ;
struct TYPE_2__ {unsigned int indx; struct ieee_buflist fndef; scalar_t__ localp; } ;
struct ieee_type_stack {struct ieee_type_stack* next; TYPE_1__ type; } ;
struct ieee_handle {char* modname; struct ieee_type_stack* type_stack; struct ieee_buflist global_types; struct ieee_buflist types; } ;
typedef scalar_t__ bfd_boolean ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee_type_stack*) ;
 int FUNC_2 (struct ieee_handle*,struct ieee_buflist*,struct ieee_buflist*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (struct ieee_buflist*) ;
 int FUNC_4 (struct ieee_handle*,struct ieee_buflist*) ;
 int FUNC_5 (struct ieee_handle*,int) ;
 int FUNC_6 (struct ieee_handle*,char*) ;
 int FUNC_7 (struct ieee_handle*,int ) ;

__attribute__((used)) static unsigned int
FUNC_8 (struct ieee_handle *VAR_2, bfd_boolean VAR_3)
{
  struct ieee_type_stack *VAR_4;
  unsigned int VAR_5;

  VAR_4 = VAR_2->type_stack;
  FUNC_0 (VAR_4 != ((void*)0));



  if (VAR_3 && ! FUNC_3 (&VAR_4->type.fndef))
    {
      struct ieee_buflist *VAR_6;

      if (VAR_4->type.localp)
 {

   if (FUNC_3 (&VAR_2->types))
     {
       if (! FUNC_4 (VAR_2, &VAR_2->types)
    || ! FUNC_5 (VAR_2, (int) VAR_1)
    || ! FUNC_5 (VAR_2, 1)
    || ! FUNC_7 (VAR_2, 0)
    || ! FUNC_6 (VAR_2, VAR_2->modname))
  return VAR_0;
     }
   VAR_6 = &VAR_2->types;
 }
      else
 {

   if (FUNC_3 (&VAR_2->global_types))
     {
       if (! FUNC_4 (VAR_2, &VAR_2->global_types)
    || ! FUNC_5 (VAR_2, (int) VAR_1)
    || ! FUNC_5 (VAR_2, 2)
    || ! FUNC_7 (VAR_2, 0)
    || ! FUNC_6 (VAR_2, ""))
  return VAR_0;
     }
   VAR_6 = &VAR_2->global_types;
 }

      if (! FUNC_2 (VAR_2, VAR_6, &VAR_4->type.fndef))
 return VAR_0;
    }

  VAR_5 = VAR_4->type.indx;
  VAR_2->type_stack = VAR_4->next;
  FUNC_1 (VAR_4);
  return VAR_5;
}
