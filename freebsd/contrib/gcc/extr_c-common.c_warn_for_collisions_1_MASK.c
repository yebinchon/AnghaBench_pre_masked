
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct tlist {scalar_t__ expr; scalar_t__ writer; struct tlist* next; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 struct tlist* FUNC_1 (struct tlist*,scalar_t__,int ) ;
 struct tlist* VAR_1 ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (tree VAR_2, tree VAR_3, struct tlist *VAR_4,
         int VAR_5)
{
  struct tlist *VAR_6;


  for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->next)
    if (VAR_6->expr == VAR_2)
      return;

  while (VAR_4)
    {
      if (VAR_4->expr == VAR_2
   && VAR_4->writer != VAR_3
   && (!VAR_5 || VAR_4->writer)
   && FUNC_0 (VAR_4->expr))
 {
   VAR_1 = FUNC_1 (VAR_1, VAR_2, VAR_0);
   FUNC_2 (0, "operation on %qE may be undefined", VAR_4->expr);
 }
      VAR_4 = VAR_4->next;
    }
}
