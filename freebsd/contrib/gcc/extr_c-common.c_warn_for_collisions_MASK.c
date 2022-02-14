
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlist {scalar_t__ writer; int expr; struct tlist* next; } ;


 int FUNC_0 (int ,scalar_t__,struct tlist*,int ) ;

__attribute__((used)) static void
FUNC_1 (struct tlist *VAR_0)
{
  struct tlist *VAR_1;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    {
      if (VAR_1->writer)
 FUNC_0 (VAR_1->expr, VAR_1->writer, VAR_0, 0);
    }
}
