
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blocks {size_t max; size_t data; int* flags; TYPE_1__* slots; } ;
typedef size_t apr_uint32_t ;
struct TYPE_2__ {scalar_t__ pos; size_t adlersum; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t,size_t,int ) ;

__attribute__((used)) static void
FUNC_3(struct blocks *VAR_2, apr_uint32_t VAR_3, apr_uint32_t VAR_4)
{
  apr_uint32_t VAR_5 = FUNC_1(VAR_3) & VAR_2->max;


  for (; VAR_2->slots[VAR_5].pos != VAR_1; VAR_5 = (VAR_5 + 1) & VAR_2->max)
    if (VAR_2->slots[VAR_5].adlersum == VAR_3)
      if (FUNC_2(VAR_2->data + VAR_2->slots[VAR_5].pos, VAR_2->data + VAR_4,
                 VAR_0) == 0)
        return;

  VAR_2->slots[VAR_5].adlersum = VAR_3;
  VAR_2->slots[VAR_5].pos = VAR_4;
  VAR_2->flags[FUNC_0(VAR_3)] |= 1 << (VAR_3 & 7);
}
