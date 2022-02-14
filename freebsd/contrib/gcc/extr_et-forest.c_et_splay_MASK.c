
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_occ {int depth; struct et_occ* next; struct et_occ* prev; struct et_occ* parent; int min; int min_occ; } ;


 int FUNC_0 (struct et_occ*) ;
 int FUNC_1 (struct et_occ*) ;
 int FUNC_2 (struct et_occ*) ;
 int FUNC_3 (struct et_occ*) ;
 int FUNC_4 (struct et_occ*) ;
 int FUNC_5 (struct et_occ*,int) ;
 int FUNC_6 (struct et_occ*,int) ;
 int FUNC_7 (struct et_occ*,struct et_occ*) ;
 int FUNC_8 (struct et_occ*,struct et_occ*) ;

__attribute__((used)) static void
FUNC_9 (struct et_occ *VAR_0)
{
  struct et_occ *VAR_1, *VAR_2, *VAR_3;
  int VAR_4, VAR_5, VAR_6;






  while (VAR_0->parent)
    {
      VAR_4 = VAR_0->depth;

      VAR_1 = VAR_0->parent;
      VAR_5 = VAR_1->depth;

      VAR_2 = VAR_1->parent;

      if (!VAR_2)
 {
   FUNC_6 (VAR_0, VAR_5);
   VAR_0->min_occ = VAR_1->min_occ;
   VAR_0->min = VAR_1->min;

   if (VAR_1->prev == VAR_0)
     {

       FUNC_8 (VAR_1, VAR_0->next);
       FUNC_7 (VAR_0, VAR_1);
       FUNC_6 (VAR_1->prev, VAR_4);
     }
   else
     {

       FUNC_7 (VAR_1, VAR_0->prev);
       FUNC_8 (VAR_0, VAR_1);
       FUNC_6 (VAR_1->next, VAR_4);
     }
   FUNC_5 (VAR_1, -VAR_4);
   VAR_0->parent = ((void*)0);

   FUNC_3 (VAR_1);




   return;
 }

      VAR_6 = VAR_2->depth;

      FUNC_6 (VAR_0, VAR_5 + VAR_6);
      VAR_0->min_occ = VAR_2->min_occ;
      VAR_0->min = VAR_2->min;

      VAR_3 = VAR_2->parent;

      if (VAR_2->prev == VAR_1)
 {
   if (VAR_1->prev == VAR_0)
     {

       FUNC_8 (VAR_2, VAR_1->next);
       FUNC_8 (VAR_1, VAR_0->next);
       FUNC_7 (VAR_0, VAR_1);
       FUNC_7 (VAR_1, VAR_2);

       FUNC_5 (VAR_1, -VAR_4);
       FUNC_6 (VAR_1->prev, VAR_4);
       FUNC_5 (VAR_2, -VAR_5);
       FUNC_6 (VAR_2->prev, VAR_5);
     }
   else
     {

       FUNC_8 (VAR_2, VAR_0->next);
       FUNC_7 (VAR_1, VAR_0->prev);
       FUNC_8 (VAR_0, VAR_1);
       FUNC_7 (VAR_0, VAR_2);

       FUNC_5 (VAR_1, -VAR_4);
       FUNC_6 (VAR_1->next, VAR_4);
       FUNC_5 (VAR_2, -VAR_4 - VAR_5);
       FUNC_6 (VAR_2->prev, VAR_4 + VAR_5);
     }
 }
      else
 {
   if (VAR_1->prev == VAR_0)
     {

       FUNC_7 (VAR_2, VAR_0->prev);
       FUNC_8 (VAR_1, VAR_0->next);
       FUNC_8 (VAR_0, VAR_2);
       FUNC_7 (VAR_0, VAR_1);

       FUNC_5 (VAR_1, -VAR_4);
       FUNC_6 (VAR_1->prev, VAR_4);
       FUNC_5 (VAR_2, -VAR_4 - VAR_5);
       FUNC_6 (VAR_2->next, VAR_4 + VAR_5);
     }
   else
     {

       FUNC_7 (VAR_2, VAR_1->prev);
       FUNC_7 (VAR_1, VAR_0->prev);
       FUNC_8 (VAR_0, VAR_1);
       FUNC_8 (VAR_1, VAR_2);

       FUNC_5 (VAR_1, -VAR_4);
       FUNC_6 (VAR_1->next, VAR_4);
       FUNC_5 (VAR_2, -VAR_5);
       FUNC_6 (VAR_2->next, VAR_5);
     }
 }

      VAR_0->parent = VAR_3;
      if (VAR_3)
 {
   if (VAR_3->prev == VAR_2)
     VAR_3->prev = VAR_0;
   else
     VAR_3->next = VAR_0;
 }

      FUNC_3 (VAR_2);
      FUNC_3 (VAR_1);



    }





}
