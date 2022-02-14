
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int * (* svn_cache__partial_getter_func_t ) (void**,int ,int ,void*,int *) ;
typedef int svn_boolean_t ;
struct cache_entry {int size; int value; int page; } ;
struct TYPE_4__ {int klen; int hash; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 struct cache_entry* FUNC_1 (int ,void const*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void **VAR_3,
                                     svn_boolean_t *VAR_4,
                                     inprocess_cache_t *VAR_5,
                                     const void *VAR_6,
                                     svn_cache__partial_getter_func_t VAR_7,
                                     void *VAR_8,
                                     apr_pool_t *VAR_9)
{
  struct cache_entry *VAR_10 = FUNC_1(VAR_5->hash, VAR_6, VAR_5->klen);
  if (! VAR_10)
    {
      *VAR_4 = VAR_0;
      return VAR_1;
    }

  FUNC_0(FUNC_2(VAR_5, VAR_10->page));

  *VAR_4 = VAR_2;
  return VAR_7(VAR_3, VAR_10->value, VAR_10->size, VAR_8, VAR_9);
}
