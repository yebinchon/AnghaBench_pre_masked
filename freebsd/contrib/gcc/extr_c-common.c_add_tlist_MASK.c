
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct tlist {scalar_t__ writer; int expr; struct tlist* next; } ;


 struct tlist* FUNC_0 (struct tlist*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (struct tlist **VAR_0, struct tlist *VAR_1, tree VAR_2, int VAR_3)
{
  while (VAR_1)
    {
      struct tlist *VAR_4 = VAR_1->next;
      if (!VAR_3)
 VAR_1->next = *VAR_0;
      if (!VAR_2 || VAR_1->writer != VAR_2)
 *VAR_0 = VAR_3 ? FUNC_0 (*VAR_0, VAR_1->expr, VAR_1->writer) : VAR_1;
      VAR_1 = VAR_4;
    }
}
