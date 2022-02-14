
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ klen; int key; } ;
typedef TYPE_1__ svn_sort__item_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ,int ,scalar_t__) ;

int
FUNC_1(const svn_sort__item_t *VAR_0,
                                 const svn_sort__item_t *VAR_1)
{
  int VAR_2;
  apr_size_t VAR_3;


  VAR_3 = (VAR_0->klen < VAR_1->klen) ? VAR_0->klen : VAR_1->klen;
  VAR_2 = FUNC_0(VAR_0->key, VAR_1->key, VAR_3);
  if (VAR_2 != 0)
    return VAR_2;


  return (VAR_0->klen < VAR_1->klen) ? -1 : (VAR_0->klen > VAR_1->klen) ? 1 : 0;
}
