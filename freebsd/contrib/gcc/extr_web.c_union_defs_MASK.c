
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_entry {int dummy; } ;
struct df_ref {int flags; struct df_ref* next_ref; } ;
struct df_link {struct df_link* next; struct df_ref* ref; } ;
struct df {int dummy; } ;
typedef int * rtx ;


 struct df_ref* FUNC_0 (struct df*,int *) ;
 struct df_ref* FUNC_1 (struct df*,int *) ;
 struct df_link* FUNC_2 (struct df_ref*) ;
 int FUNC_3 (struct df_ref*) ;
 int * FUNC_4 (struct df_ref*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (struct df_ref*) ;
 scalar_t__ FUNC_6 (struct df_ref*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (struct web_entry*,struct web_entry*) ;
 int FUNC_11 (struct web_entry*,struct web_entry*) ;
 int FUNC_12 (struct web_entry*,struct web_entry*) ;
 int FUNC_13 (struct web_entry*,struct web_entry*) ;

void
FUNC_14 (struct df *VAR_1, struct df_ref *VAR_2, struct web_entry *VAR_3,
      struct web_entry *VAR_4,
      bool (*VAR_5) (struct web_entry *, struct web_entry *))
{
  rtx VAR_6 = FUNC_4 (VAR_2);
  struct df_link *VAR_7 = FUNC_2 (VAR_2);
  struct df_ref *VAR_8;
  struct df_ref *VAR_9;
  rtx VAR_10;

  if (VAR_6)
    {
      VAR_8 = FUNC_1 (VAR_1, VAR_6);
      VAR_9 = FUNC_0 (VAR_1, VAR_6);
      VAR_10 = FUNC_9 (VAR_6);
    }
  else
    {
      VAR_8 = ((void*)0);
      VAR_9 = ((void*)0);
      VAR_10 = ((void*)0);
    }






  while (VAR_8)
    {
      if (VAR_2 != VAR_8
   && FUNC_5 (VAR_2) == FUNC_5 (VAR_8))
  (*VAR_5) (VAR_4 + FUNC_3 (VAR_2),
   VAR_4 + FUNC_3 (VAR_8));
      VAR_8 = VAR_8->next_ref;
    }





  if (VAR_10
      && FUNC_8 (VAR_10) == FUNC_6 (VAR_2)
      && FUNC_8 (VAR_10) == FUNC_7 (VAR_10))
    {
      while (VAR_9)
 {
   if (FUNC_5 (VAR_2) == FUNC_5 (VAR_9))
      (*VAR_5) (VAR_4 + FUNC_3 (VAR_2),
       VAR_3 + FUNC_3 (VAR_9));
   VAR_9 = VAR_9->next_ref;
 }
    }
  while (VAR_7)
    {
      (*VAR_5) (VAR_4 + FUNC_3 (VAR_2),
       VAR_3 + FUNC_3 (VAR_7->ref));
      VAR_7 = VAR_7->next;
    }



  if (VAR_2->flags & VAR_0)
    {
      struct df_ref *VAR_11;

      if (FUNC_4 (VAR_2))
 VAR_11 = FUNC_0 (VAR_1, FUNC_4 (VAR_2));
      else
 VAR_11 = ((void*)0);

      while (VAR_11)
 {
   if (FUNC_5 (VAR_11) == FUNC_5 (VAR_2))
      (*VAR_5) (VAR_4 + FUNC_3 (VAR_2),
       VAR_3 + FUNC_3 (VAR_11));
   VAR_11 = VAR_11->next_ref;
 }
    }
}
