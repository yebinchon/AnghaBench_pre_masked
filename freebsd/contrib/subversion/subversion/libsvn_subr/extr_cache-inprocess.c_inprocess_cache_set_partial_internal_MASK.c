
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int (* svn_cache__partial_setter_func_t ) (int *,scalar_t__*,void*,int ) ;
struct cache_entry {scalar_t__ size; TYPE_3__* page; int value; } ;
struct TYPE_5__ {int data_size; int klen; int hash; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int page_pool; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct cache_entry* FUNC_1 (int ,void const*,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(inprocess_cache_t *VAR_1,
                                     const void *VAR_2,
                                     svn_cache__partial_setter_func_t VAR_3,
                                     void *VAR_4,
                                     apr_pool_t *VAR_5)
{
  struct cache_entry *VAR_6 = FUNC_1(VAR_1->hash, VAR_2, VAR_1->klen);
  if (VAR_6)
    {
      FUNC_0(FUNC_2(VAR_1, VAR_6->page));

      VAR_1->data_size -= VAR_6->size;
      FUNC_0(VAR_3(&VAR_6->value,
                   &VAR_6->size,
                   VAR_4,
                   VAR_6->page->page_pool));
      VAR_1->data_size += VAR_6->size;
    }

  return VAR_0;
}
