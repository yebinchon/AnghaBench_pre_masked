
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* htab_t ;
typedef int hashval_t ;
struct TYPE_4__ {int n_deleted; int (* del_f ) (scalar_t__) ;} ;
typedef scalar_t__ PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (TYPE_1__*,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2 (htab_t VAR_3, PTR VAR_4, hashval_t VAR_5)
{
  PTR *VAR_6;

  VAR_6 = FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_2);
  if (*VAR_6 == VAR_1)
    return;

  if (VAR_3->del_f)
    (*VAR_3->del_f) (*VAR_6);

  *VAR_6 = VAR_0;
  VAR_3->n_deleted++;
}
