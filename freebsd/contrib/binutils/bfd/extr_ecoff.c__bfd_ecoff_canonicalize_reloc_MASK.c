
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
typedef int asymbol ;
struct TYPE_5__ {int flags; unsigned int reloc_count; int * relocation; TYPE_2__* constructor_chain; } ;
typedef TYPE_1__ asection ;
struct TYPE_6__ {int relent; struct TYPE_6__* next; } ;
typedef TYPE_2__ arelent_chain ;
typedef int arelent ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int **) ;

long
FUNC_1 (bfd *VAR_1,
          asection *VAR_2,
          arelent **VAR_3,
          asymbol **VAR_4)
{
  unsigned int VAR_5;

  if (VAR_2->flags & VAR_0)
    {
      arelent_chain *VAR_6;




      for (VAR_5 = 0, VAR_6 = VAR_2->constructor_chain;
    VAR_5 < VAR_2->reloc_count;
    VAR_5++, VAR_6 = VAR_6->next)
 *VAR_3++ = &VAR_6->relent;
    }
  else
    {
      arelent *VAR_7;

      if (! FUNC_0 (VAR_1, VAR_2, VAR_4))
 return -1;

      VAR_7 = VAR_2->relocation;

      for (VAR_5 = 0; VAR_5 < VAR_2->reloc_count; VAR_5++)
 *VAR_3++ = VAR_7++;
    }

  *VAR_3 = ((void*)0);

  return VAR_2->reloc_count;
}
