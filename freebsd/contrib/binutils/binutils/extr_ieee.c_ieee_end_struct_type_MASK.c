
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_buflist {int dummy; } ;
struct ieee_handle {char* modname; TYPE_2__* type_stack; struct ieee_buflist types; struct ieee_buflist global_types; } ;
typedef int bfd_boolean ;
struct TYPE_3__ {struct ieee_buflist strdef; int localp; scalar_t__ ignorep; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee_handle*,struct ieee_buflist*,struct ieee_buflist*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct ieee_buflist*) ;
 int FUNC_3 (struct ieee_handle*,struct ieee_buflist*) ;
 int FUNC_4 (struct ieee_handle*,struct ieee_buflist*) ;
 int FUNC_5 (struct ieee_handle*,int) ;
 int FUNC_6 (struct ieee_handle*,char*) ;
 int FUNC_7 (struct ieee_handle*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (void *VAR_3)
{
  struct ieee_handle *VAR_4 = (struct ieee_handle *) VAR_3;
  struct ieee_buflist *VAR_5;

  FUNC_0 (VAR_4->type_stack != ((void*)0)
   && ! FUNC_2 (&VAR_4->type_stack->type.strdef));




  if (VAR_4->type_stack->type.ignorep)
    return VAR_1;





  if (! VAR_4->type_stack->type.localp)
    {

      if (FUNC_2 (&VAR_4->global_types))
 {
   if (! FUNC_3 (VAR_4, &VAR_4->global_types)
       || ! FUNC_5 (VAR_4, (int) VAR_2)
       || ! FUNC_5 (VAR_4, 2)
       || ! FUNC_7 (VAR_4, 0)
       || ! FUNC_6 (VAR_4, ""))
     return VAR_0;
 }
      VAR_5 = &VAR_4->global_types;
    }
  else
    {

      if (FUNC_2 (&VAR_4->types))
 {
   if (! FUNC_3 (VAR_4, &VAR_4->types)
       || ! FUNC_5 (VAR_4, (int) VAR_2)
       || ! FUNC_5 (VAR_4, 1)
       || ! FUNC_7 (VAR_4, 0)
       || ! FUNC_6 (VAR_4, VAR_4->modname))
     return VAR_0;
 }
      VAR_5 = &VAR_4->types;
    }


  if (! FUNC_1 (VAR_4, VAR_5, &VAR_4->type_stack->type.strdef)
      || ! FUNC_4 (VAR_4, &VAR_4->type_stack->type.strdef))
    return VAR_0;



  return VAR_1;
}
