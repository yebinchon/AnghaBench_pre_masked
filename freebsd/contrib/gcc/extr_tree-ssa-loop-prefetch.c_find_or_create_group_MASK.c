
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct mem_ref_group {scalar_t__ step; struct mem_ref_group* next; int * refs; int base; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 struct mem_ref_group* FUNC_1 (int,int) ;

__attribute__((used)) static struct mem_ref_group *
FUNC_2 (struct mem_ref_group **VAR_0, tree VAR_1,
        HOST_WIDE_INT VAR_2)
{
  struct mem_ref_group *VAR_3;

  for (; *VAR_0; VAR_0 = &(*VAR_0)->next)
    {
      if ((*VAR_0)->step == VAR_2
   && FUNC_0 ((*VAR_0)->base, VAR_1, 0))
 return *VAR_0;


      if ((*VAR_0)->step < VAR_2)
 break;
    }

  VAR_3 = FUNC_1 (1, sizeof (struct mem_ref_group));
  VAR_3->base = VAR_1;
  VAR_3->step = VAR_2;
  VAR_3->refs = ((void*)0);
  VAR_3->next = *VAR_0;
  *VAR_0 = VAR_3;

  return VAR_3;
}
