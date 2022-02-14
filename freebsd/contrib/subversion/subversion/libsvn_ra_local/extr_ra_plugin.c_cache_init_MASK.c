
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_config_t ;
struct TYPE_4__ {int cache_size; } ;
typedef TYPE_1__ svn_cache_config_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char const**,int ,int ,int *) ;
 int FUNC_5 (int*,char const*) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_4, apr_pool_t *VAR_5)
{
  apr_hash_t *VAR_6 = VAR_4;
  svn_config_t *VAR_7 = ((void*)0);
  const char *VAR_8;

  if (VAR_6)
    VAR_7 = FUNC_7(VAR_6, VAR_0);
  FUNC_4(VAR_7, &VAR_8, VAR_2,
                 VAR_1, ((void*)0));
  if (VAR_8)
    {
      apr_uint64_t VAR_9;
      svn_cache_config_t VAR_10 = *FUNC_2();

      FUNC_0(FUNC_6(FUNC_5(&VAR_9,
                                                       VAR_8),
                                   FUNC_1("memory-cache-size invalid")));
      VAR_10.cache_size = 1024 * 1024 * VAR_9;
      FUNC_3(&VAR_10);
    }

  return VAR_3;
}
