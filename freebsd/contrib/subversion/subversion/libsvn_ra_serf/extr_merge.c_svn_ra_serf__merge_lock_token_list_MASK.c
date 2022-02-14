
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; void const* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,void const**,int *,void**) ;
 int FUNC_4 (int *,int *,void const*,int ) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (int *,int *,char*,char*,...) ;
 int FUNC_7 (int *,char*,void*,int *) ;
 int FUNC_8 (char const*,void const*) ;

void
FUNC_9(apr_hash_t *VAR_2,
                                   const char *VAR_3,
                                   serf_bucket_t *VAR_4,
                                   serf_bucket_alloc_t *VAR_5,
                                   apr_pool_t *VAR_6)
{
  apr_hash_index_t *VAR_7;

  if (!VAR_2 || FUNC_0(VAR_2) == 0)
    return;

  FUNC_6(VAR_4, VAR_5,
                                    "S:lock-token-list",
                                    "xmlns:S", VAR_1,
                                    VAR_0);

  for (VAR_7 = FUNC_1(VAR_6, VAR_2);
       VAR_7;
       VAR_7 = FUNC_2(VAR_7))
    {
      const void *VAR_8;
      apr_ssize_t VAR_9;
      void *VAR_10;
      svn_string_t VAR_11;

      FUNC_3(VAR_7, &VAR_8, &VAR_9, &VAR_10);

      VAR_11.data = VAR_8;
      VAR_11.len = VAR_9;

      if (VAR_3 && !FUNC_8(VAR_3, VAR_8))
        continue;

      FUNC_6(VAR_4, VAR_5, "S:lock", VAR_0);

      FUNC_6(VAR_4, VAR_5, "lock-path", VAR_0);
      FUNC_4(VAR_4, VAR_5, VAR_11.data, VAR_11.len);
      FUNC_5(VAR_4, VAR_5, "lock-path");

      FUNC_7(VAR_4, "lock-token", VAR_10, VAR_5);

      FUNC_5(VAR_4, VAR_5, "S:lock");
    }

  FUNC_5(VAR_4, VAR_5, "S:lock-token-list");
}
