
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* htab_t ;
struct TYPE_4__ {scalar_t__* entries; int n_deleted; int (* del_f ) (scalar_t__) ;} ;
typedef scalar_t__ PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3 (htab_t VAR_2, PTR *VAR_3)
{
  if (VAR_3 < VAR_2->entries || VAR_3 >= VAR_2->entries + FUNC_1 (VAR_2)
      || *VAR_3 == VAR_1 || *VAR_3 == VAR_0)
    FUNC_0 ();

  if (VAR_2->del_f)
    (*VAR_2->del_f) (*VAR_3);

  *VAR_3 = VAR_0;
  VAR_2->n_deleted++;
}
