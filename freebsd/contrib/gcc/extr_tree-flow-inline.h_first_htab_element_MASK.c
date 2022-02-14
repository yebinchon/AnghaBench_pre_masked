
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* htab_t ;
struct TYPE_7__ {scalar_t__* slot; scalar_t__* limit; TYPE_1__* htab; } ;
typedef TYPE_2__ htab_iterator ;
struct TYPE_6__ {scalar_t__* entries; } ;
typedef scalar_t__ PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void *
FUNC_1 (htab_iterator *VAR_2, htab_t VAR_3)
{
  VAR_2->htab = VAR_3;
  VAR_2->slot = VAR_3->entries;
  VAR_2->limit = VAR_2->slot + FUNC_0 (VAR_3);
  do
    {
      PTR VAR_4 = *(VAR_2->slot);
      if (VAR_4 != VAR_1 && VAR_4 != VAR_0)
 break;
    } while (++(VAR_2->slot) < VAR_2->limit);

  if (VAR_2->slot < VAR_2->limit)
    return *(VAR_2->slot);
  return ((void*)0);
}
