
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* type_totals; } ;
struct ggc_pch_data {size_t base; size_t orig_base; size_t* type_bases; int alloc_size; int * alloc_bits; TYPE_1__ d; } ;


 int VAR_0 ;
 int * FUNC_0 (int,int ) ;

void
FUNC_1 (struct ggc_pch_data *VAR_1, void *VAR_2)
{
  int VAR_3;
  size_t VAR_4 = (size_t) VAR_2;

  VAR_1->base = VAR_1->orig_base = VAR_4;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      VAR_1->type_bases[VAR_3] = VAR_4;
      VAR_4 += VAR_1->d.type_totals[VAR_3];
    }

  if (VAR_1->alloc_bits == ((void*)0))
    VAR_1->alloc_bits = FUNC_0 (1, VAR_1->alloc_size);
}
