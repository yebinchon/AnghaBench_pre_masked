
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* use_optype_p ;
typedef scalar_t__ tree ;
struct TYPE_6__ {scalar_t__* use; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;

void
FUNC_3 (tree VAR_0, tree *VAR_1, tree *VAR_2)
{
  tree VAR_3, VAR_4;
  VAR_3 = *VAR_1;
  VAR_4 = *VAR_2;




  if (FUNC_2 () && VAR_3 != VAR_4)
    {
      use_optype_p VAR_5, VAR_6, VAR_7;
      VAR_5 = VAR_6 = ((void*)0);


      for (VAR_7 = FUNC_0 (VAR_0); VAR_7; VAR_7 = VAR_7->next)
 if (FUNC_1 (VAR_7)->use == VAR_1)
   {
     VAR_5 = VAR_7;
     break;
   }

      for (VAR_7 = FUNC_0 (VAR_0); VAR_7; VAR_7 = VAR_7->next)
 if (FUNC_1 (VAR_7)->use == VAR_2)
   {
     VAR_6 = VAR_7;
     break;
   }



      if (VAR_5 && VAR_6)
        {
   tree *VAR_8 = FUNC_1 (VAR_6)->use;
   FUNC_1 (VAR_6)->use = FUNC_1 (VAR_5)->use;
   FUNC_1 (VAR_5)->use = VAR_8;
 }
    }


  *VAR_1 = VAR_4;
  *VAR_2 = VAR_3;
}
