
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ alias; scalar_t__ offset; scalar_t__ size; scalar_t__ align; scalar_t__ expr; } ;
typedef TYPE_1__ mem_attrs ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_1, const void *VAR_2)
{
  mem_attrs *VAR_3 = (mem_attrs *) VAR_1;
  mem_attrs *VAR_4 = (mem_attrs *) VAR_2;

  return (VAR_3->alias == VAR_4->alias && VAR_3->offset == VAR_4->offset
   && VAR_3->size == VAR_4->size && VAR_3->align == VAR_4->align
   && (VAR_3->expr == VAR_4->expr
       || (VAR_3->expr != VAR_0 && VAR_4->expr != VAR_0
    && FUNC_0 (VAR_3->expr, VAR_4->expr, 0))));
}
