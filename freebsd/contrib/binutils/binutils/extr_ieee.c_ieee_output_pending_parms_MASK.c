
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_pending_parm {int kind; struct ieee_pending_parm* next; scalar_t__ referencep; int val; int name; int type; } ;
struct ieee_handle {unsigned int name_indx; struct ieee_pending_parm* pending_parms; int fnname; int vars; TYPE_2__* type_stack; } ;
typedef enum debug_var_kind { ____Placeholder_debug_var_kind } debug_var_kind ;
typedef int bfd_boolean ;
struct TYPE_3__ {scalar_t__ referencep; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ieee_pending_parm*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ieee_handle*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct ieee_handle*,int ,int ,int ,int ) ;
 int FUNC_4 (void*,int ,int,int ) ;
 int FUNC_5 (struct ieee_handle*,int) ;
 int FUNC_6 (struct ieee_handle*,unsigned int,unsigned int) ;
 int FUNC_7 (struct ieee_handle*,unsigned int,int ) ;
 int FUNC_8 (struct ieee_handle*,int) ;
 int FUNC_9 (struct ieee_handle*,char*) ;
 int FUNC_10 (struct ieee_handle*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (struct ieee_handle *VAR_6)
{
  struct ieee_pending_parm *VAR_7;
  unsigned int VAR_8;

  VAR_8 = 0;
  for (VAR_7 = VAR_6->pending_parms; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      enum debug_var_kind VAR_9;

      switch (VAR_7->kind)
 {
 default:
   FUNC_0 ();
   return VAR_2;
 case 128:
 case 131:
   VAR_9 = VAR_0;
   break;
 case 129:
 case 130:
   VAR_9 = VAR_1;
   break;
 }

      if (! FUNC_3 (VAR_6, VAR_7->type, 0, VAR_2, VAR_2))
 return VAR_2;
      VAR_6->type_stack->type.referencep = VAR_7->referencep;
      if (VAR_7->referencep)
 ++VAR_8;
      if (! FUNC_4 ((void *) VAR_6, VAR_7->name, VAR_9, VAR_7->val))
 return VAR_2;
    }



  if (VAR_8 > 0)
    {
      unsigned int VAR_10, VAR_11;



      VAR_10 = VAR_6->name_indx;
      ++VAR_6->name_indx;
      if (! FUNC_2 (VAR_6, &VAR_6->vars)
   || ! FUNC_8 (VAR_6, (int) VAR_5)
   || ! FUNC_10 (VAR_6, VAR_10)
   || ! FUNC_9 (VAR_6, "")
   || ! FUNC_5 (VAR_6, (int) VAR_4)
   || ! FUNC_10 (VAR_6, VAR_10)
   || ! FUNC_10 (VAR_6, 0)
   || ! FUNC_10 (VAR_6, 62)
   || ! FUNC_10 (VAR_6, 80)
   || ! FUNC_10 (VAR_6, VAR_8 + 3)
   || ! FUNC_6 (VAR_6, VAR_10, 'B')
   || ! FUNC_7 (VAR_6, VAR_10, VAR_6->fnname)
   || ! FUNC_6 (VAR_6, VAR_10, 0))
 return VAR_2;
      for (VAR_7 = VAR_6->pending_parms, VAR_11 = 1;
    VAR_7 != ((void*)0);
    VAR_7 = VAR_7->next, VAR_11++)
 {
   if (VAR_7->referencep)
     {
       if (! FUNC_6 (VAR_6, VAR_10, VAR_11))
  return VAR_2;
     }
 }
    }

  VAR_7 = VAR_6->pending_parms;
  while (VAR_7 != ((void*)0))
    {
      struct ieee_pending_parm *VAR_12;

      VAR_12 = VAR_7->next;
      FUNC_1 (VAR_7);
      VAR_7 = VAR_12;
    }

  VAR_6->pending_parms = ((void*)0);

  return VAR_3;
}
