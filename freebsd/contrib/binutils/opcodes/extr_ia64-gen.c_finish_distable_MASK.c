
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disent {int ournum; int nextcnt; struct disent* next_ent; } ;


 struct disent* VAR_0 ;

__attribute__((used)) static void
FUNC_0 ()
{
  struct disent *VAR_1 = VAR_0;
  struct disent *VAR_2 = VAR_1;

  VAR_1->ournum = 32768;
  while ((VAR_1 = VAR_1->next_ent) != ((void*)0))
    {
      VAR_1->ournum = VAR_2->ournum + VAR_2->nextcnt + 1;
      VAR_2 = VAR_1;
    }
}
