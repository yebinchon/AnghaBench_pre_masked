
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t num_free_objects; scalar_t__ context_depth; struct TYPE_6__* next; struct TYPE_6__* prev; } ;
typedef TYPE_1__ page_entry ;
struct TYPE_7__ {size_t allocated; scalar_t__ context_depth; TYPE_1__** pages; TYPE_1__** page_tails; } ;


 TYPE_5__ VAR_0 ;
 unsigned int VAR_1 ;
 size_t FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  unsigned VAR_2;

  for (VAR_2 = 2; VAR_2 < VAR_1; VAR_2++)
    {


      page_entry * const VAR_3 = VAR_0.page_tails[VAR_2];

      size_t VAR_4;
      size_t VAR_5;
      page_entry *VAR_6, *VAR_7;
      int VAR_8;

      VAR_6 = VAR_0.pages[VAR_2];
      if (VAR_6 == ((void*)0))
 continue;

      VAR_7 = ((void*)0);
      do
 {
   page_entry *VAR_9 = VAR_6->next;


   VAR_8 = (VAR_6 == VAR_3);

   VAR_4 = FUNC_0 (VAR_6);



   VAR_5 = VAR_4 - VAR_6->num_free_objects;

   VAR_0.allocated += FUNC_1 (VAR_2) * VAR_5;



   if (VAR_6->context_depth < VAR_0.context_depth)
     ;


   else if (VAR_5 == 0)
     {



       if (! VAR_7)
  VAR_0.pages[VAR_2] = VAR_9;
       else
  VAR_7->next = VAR_9;


       if (VAR_9)
  VAR_9->prev = VAR_7;


       if (VAR_6 == VAR_0.page_tails[VAR_2])
  VAR_0.page_tails[VAR_2] = VAR_7;
       FUNC_2 (VAR_6);
       VAR_6 = VAR_7;
     }


   else if (VAR_6->num_free_objects == 0)
     {

       if (VAR_6 != VAR_0.page_tails[VAR_2])
  {

    VAR_6->next = ((void*)0);
    VAR_6->prev = VAR_0.page_tails[VAR_2];
    VAR_0.page_tails[VAR_2]->next = VAR_6;


    VAR_0.page_tails[VAR_2] = VAR_6;


    if (! VAR_7)
      VAR_0.pages[VAR_2] = VAR_9;
    else
      VAR_7->next = VAR_9;


    if (VAR_9)
      VAR_9->prev = VAR_7;

    VAR_6 = VAR_7;
  }
     }





   else if (VAR_6 != VAR_0.pages[VAR_2])
     {
       VAR_7->next = VAR_6->next;


       if (VAR_6->next)
  VAR_6->next->prev = VAR_7;


       VAR_6->next = VAR_0.pages[VAR_2];
       VAR_6->prev = ((void*)0);
       VAR_0.pages[VAR_2]->prev = VAR_6;


       VAR_0.pages[VAR_2] = VAR_6;


       if (VAR_0.page_tails[VAR_2] == VAR_6)
         VAR_0.page_tails[VAR_2] = VAR_7;
       VAR_6 = VAR_7;
     }

   VAR_7 = VAR_6;
   VAR_6 = VAR_9;
 }
      while (! VAR_8);



      for (VAR_6 = VAR_0.pages[VAR_2]; VAR_6; VAR_6 = VAR_6->next)
 if (VAR_6->context_depth != VAR_0.context_depth)
   FUNC_3 (VAR_6);
    }
}
