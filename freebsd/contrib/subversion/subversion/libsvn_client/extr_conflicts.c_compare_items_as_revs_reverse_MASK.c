
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key; } ;
typedef TYPE_1__ svn_sort__item_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const svn_sort__item_t *VAR_0,
                              const svn_sort__item_t *VAR_1)
{
  int VAR_2 = FUNC_0(VAR_0->key, VAR_1->key);
  if (VAR_2 < 0)
    return 1;
  if (VAR_2 > 0)
    return -1;
  return VAR_2;
}
