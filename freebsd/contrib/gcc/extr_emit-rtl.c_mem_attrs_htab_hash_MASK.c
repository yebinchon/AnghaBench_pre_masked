
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alias; int align; int expr; scalar_t__ size; scalar_t__ offset; } ;
typedef TYPE_1__ mem_attrs ;
typedef int hashval_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static hashval_t
FUNC_2 (const void *VAR_0)
{
  mem_attrs *VAR_1 = (mem_attrs *) VAR_0;

  return (VAR_1->alias ^ (VAR_1->align * 1000)
   ^ ((VAR_1->offset ? FUNC_0 (VAR_1->offset) : 0) * 50000)
   ^ ((VAR_1->size ? FUNC_0 (VAR_1->size) : 0) * 2500000)
   ^ (size_t) FUNC_1 (VAR_1->expr, 0));
}
