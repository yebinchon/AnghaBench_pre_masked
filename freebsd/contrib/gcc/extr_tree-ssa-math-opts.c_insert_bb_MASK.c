
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct occurrence {struct occurrence* next; struct occurrence* children; TYPE_1__* bb; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_7__ {int aux; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*,TYPE_1__*) ;
 struct occurrence* FUNC_2 (TYPE_1__*,struct occurrence*) ;

__attribute__((used)) static void
FUNC_3 (struct occurrence *VAR_1, basic_block VAR_2,
    struct occurrence **VAR_3)
{
  struct occurrence *VAR_4, **VAR_5;

  for (VAR_5 = VAR_3; (VAR_4 = *VAR_5) != ((void*)0); )
    {
      basic_block VAR_6 = VAR_1->bb, VAR_7 = VAR_4->bb;
      basic_block VAR_8 = FUNC_1 (VAR_0, VAR_7, VAR_6);
      if (VAR_8 == VAR_6)
 {


   *VAR_5 = VAR_4->next;
   VAR_4->next = VAR_1->children;
   VAR_1->children = VAR_4;


 }

      else if (VAR_8 == VAR_7)
 {

   FUNC_3 (VAR_1, VAR_8, &VAR_4->children);
   return;
 }

      else if (VAR_8 != VAR_2)
 {
   FUNC_0 (!VAR_8->aux);




   *VAR_5 = VAR_4->next;
   VAR_1->next = VAR_4;
   VAR_4->next = ((void*)0);




          VAR_1 = FUNC_2 (VAR_8, VAR_1);
 }

      else
 {

   VAR_5 = &VAR_4->next;
 }
    }


  VAR_1->next = *VAR_3;
  *VAR_3 = VAR_1;
}
