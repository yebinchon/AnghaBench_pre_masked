
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* htab_t ;
typedef size_t hashval_t ;
struct TYPE_6__ {scalar_t__* entries; scalar_t__ (* eq_f ) (scalar_t__,scalar_t__ const) ;int collisions; int searches; } ;
typedef scalar_t__ PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (size_t,TYPE_1__*) ;
 size_t FUNC_1 (size_t,TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__ const) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__ const) ;

PTR
FUNC_5 (htab_t VAR_2, const PTR VAR_3, hashval_t VAR_4)
{
  hashval_t VAR_5, VAR_6;
  size_t VAR_7;
  PTR VAR_8;

  VAR_2->searches++;
  VAR_7 = FUNC_2 (VAR_2);
  VAR_5 = FUNC_0 (VAR_4, VAR_2);

  VAR_8 = VAR_2->entries[VAR_5];
  if (VAR_8 == VAR_1
      || (VAR_8 != VAR_0 && (*VAR_2->eq_f) (VAR_8, VAR_3)))
    return VAR_8;

  VAR_6 = FUNC_1 (VAR_4, VAR_2);
  for (;;)
    {
      VAR_2->collisions++;
      VAR_5 += VAR_6;
      if (VAR_5 >= VAR_7)
 VAR_5 -= VAR_7;

      VAR_8 = VAR_2->entries[VAR_5];
      if (VAR_8 == VAR_1
   || (VAR_8 != VAR_0 && (*VAR_2->eq_f) (VAR_8, VAR_3)))
 return VAR_8;
    }
}
