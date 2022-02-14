
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i; int eid; TYPE_5__* array; int val; } ;
typedef TYPE_1__ svn_eid__hash_iter_t ;
struct TYPE_8__ {scalar_t__ nelts; } ;
struct TYPE_7__ {int value; scalar_t__ key; } ;


 TYPE_4__ FUNC_0 (TYPE_5__*,scalar_t__,int ) ;
 int VAR_0 ;

svn_eid__hash_iter_t *
FUNC_1(svn_eid__hash_iter_t *VAR_1)
{
  VAR_1->i++;
  if (VAR_1->i >= VAR_1->array->nelts)
    {
      return ((void*)0);
    }
  VAR_1->eid = *(const int *)(FUNC_0(VAR_1->array, VAR_1->i,
                                         VAR_0).key);
  VAR_1->val = FUNC_0(VAR_1->array, VAR_1->i, VAR_0).value;
  return VAR_1;
}
