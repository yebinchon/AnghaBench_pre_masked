
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sec_ptr ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_6__ {struct TYPE_6__* next; int relent; } ;
typedef TYPE_2__ arelent_chain ;
typedef int arelent ;
struct TYPE_5__ {int flags; unsigned int reloc_count; int * relocation; TYPE_2__* constructor_chain; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int **) ;

__attribute__((used)) static long
FUNC_1 (bfd * VAR_1,
    sec_ptr VAR_2,
    arelent ** VAR_3,
    asymbol ** VAR_4)
{
  arelent *VAR_5 = VAR_2->relocation;
  unsigned int VAR_6 = 0;

  if (VAR_2->flags & VAR_0)
    {



      arelent_chain *VAR_7 = VAR_2->constructor_chain;

      for (VAR_6 = 0; VAR_6 < VAR_2->reloc_count; VAR_6++)
 {
   *VAR_3++ = &VAR_7->relent;
   VAR_7 = VAR_7->next;
 }
    }
  else
    {
      if (! FUNC_0 (VAR_1, VAR_2, VAR_4))
 return -1;

      VAR_5 = VAR_2->relocation;

      for (; VAR_6++ < VAR_2->reloc_count;)
 *VAR_3++ = VAR_5++;
    }
  *VAR_3 = 0;
  return VAR_2->reloc_count;
}
