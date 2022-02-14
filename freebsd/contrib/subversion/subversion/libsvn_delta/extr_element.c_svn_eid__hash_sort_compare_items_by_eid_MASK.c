
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ key; } ;
typedef TYPE_1__ svn_sort__item_t ;



int
FUNC_0(const svn_sort__item_t *VAR_0,
                                        const svn_sort__item_t *VAR_1)
{
  int VAR_2 = *(const int *)VAR_0->key;
  int VAR_3 = *(const int *)VAR_1->key;

  return VAR_2 - VAR_3;
}
