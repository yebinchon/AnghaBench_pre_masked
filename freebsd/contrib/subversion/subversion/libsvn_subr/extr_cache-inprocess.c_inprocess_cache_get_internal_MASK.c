
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct cache_entry {scalar_t__ size; int value; int page; } ;
struct TYPE_4__ {int klen; int hash; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct cache_entry* FUNC_1 (int ,void const*,int ) ;
 char* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(char **VAR_1,
                             apr_size_t *VAR_2,
                             inprocess_cache_t *VAR_3,
                             const void *VAR_4,
                             apr_pool_t *VAR_5)
{
  struct cache_entry *VAR_6 = FUNC_1(VAR_3->hash, VAR_4, VAR_3->klen);

  if (VAR_6)
    {
      FUNC_0(FUNC_4(VAR_3, VAR_6->page));


      *VAR_1 = FUNC_2(VAR_5, VAR_6->size);
      if (VAR_6->size)
        FUNC_3(*VAR_1, VAR_6->value, VAR_6->size);

      *VAR_2 = VAR_6->size;
    }
  else
    {
      *VAR_1 = ((void*)0);
      *VAR_2 = 0;
    }

  return VAR_0;
}
