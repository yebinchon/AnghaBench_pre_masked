
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct collection_list {size_t next_memrange; int listsize; TYPE_1__* list; } ;
typedef void* bfd_signed_vma ;
struct TYPE_3__ {int type; void* end; void* start; } ;


 int FUNC_0 (struct collection_list*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (void*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4 (struct collection_list *VAR_1, int VAR_2, bfd_signed_vma VAR_3,
       unsigned long VAR_4)
{
  if (VAR_0)
    {
      FUNC_1 ("(%d,", VAR_2);
      FUNC_2 (VAR_3);
      FUNC_1 (",%ld)\n", VAR_4);
    }


  VAR_1->list[VAR_1->next_memrange].type = VAR_2;

  VAR_1->list[VAR_1->next_memrange].start = VAR_3;

  VAR_1->list[VAR_1->next_memrange].end = VAR_3 + VAR_4;
  VAR_1->next_memrange++;
  if (VAR_1->next_memrange >= VAR_1->listsize)
    {
      VAR_1->listsize *= 2;
      VAR_1->list = FUNC_3 (VAR_1->list,
      VAR_1->listsize);
    }

  if (VAR_2 != -1)
    FUNC_0 (VAR_1, VAR_2);
}
