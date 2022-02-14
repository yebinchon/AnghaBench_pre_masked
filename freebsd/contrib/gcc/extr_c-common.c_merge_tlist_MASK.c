
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlist {scalar_t__ expr; struct tlist* next; scalar_t__ writer; } ;


 struct tlist* FUNC_0 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (struct tlist **VAR_0, struct tlist *VAR_1, int VAR_2)
{
  struct tlist **VAR_3 = VAR_0;

  while (*VAR_3)
    VAR_3 = &(*VAR_3)->next;

  while (VAR_1)
    {
      int VAR_4 = 0;
      struct tlist *VAR_5;
      struct tlist *VAR_6 = VAR_1->next;

      for (VAR_5 = *VAR_0; VAR_5; VAR_5 = VAR_5->next)
 if (VAR_5->expr == VAR_1->expr)
   {
     VAR_4 = 1;
     if (!VAR_5->writer)
       VAR_5->writer = VAR_1->writer;
   }
      if (!VAR_4)
 {
   *VAR_3 = VAR_2 ? VAR_1 : FUNC_0 (((void*)0), VAR_1->expr, VAR_1->writer);
   VAR_3 = &(*VAR_3)->next;
   *VAR_3 = 0;
 }
      VAR_1 = VAR_6;
    }
}
