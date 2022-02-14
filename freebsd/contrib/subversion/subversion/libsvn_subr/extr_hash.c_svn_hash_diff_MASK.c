
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* svn_hash_diff_func_t ) (void const*,int ,int ,void*) ;
typedef int svn_error_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,void const*,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,void const**,int *,int *) ;
 int FUNC_5 (void const*,int ,int ,void*) ;
 int FUNC_6 (void const*,int ,int ,void*) ;
 int FUNC_7 (void const*,int ,int ,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

svn_error_t *
FUNC_8(apr_hash_t *VAR_4,
              apr_hash_t *VAR_5,
              svn_hash_diff_func_t VAR_6,
              void *VAR_7,
              apr_pool_t *VAR_8)
{
  apr_hash_index_t *VAR_9;

  if (VAR_4)
    for (VAR_9 = FUNC_1(VAR_8, VAR_4); VAR_9; VAR_9 = FUNC_3(VAR_9))
      {
        const void *VAR_10;
        apr_ssize_t VAR_11;

        FUNC_4(VAR_9, &VAR_10, &VAR_11, ((void*)0));

        if (VAR_5 && (FUNC_2(VAR_5, VAR_10, VAR_11)))
          FUNC_0((*VAR_6)(VAR_10, VAR_11, VAR_3,
                               VAR_7));
        else
          FUNC_0((*VAR_6)(VAR_10, VAR_11, VAR_1,
                               VAR_7));
      }

  if (VAR_5)
    for (VAR_9 = FUNC_1(VAR_8, VAR_5); VAR_9; VAR_9 = FUNC_3(VAR_9))
      {
        const void *VAR_12;
        apr_ssize_t VAR_13;

        FUNC_4(VAR_9, &VAR_12, &VAR_13, ((void*)0));

        if (! (VAR_4 && FUNC_2(VAR_4, VAR_12, VAR_13)))
          FUNC_0((*VAR_6)(VAR_12, VAR_13, VAR_2,
                               VAR_7));
      }

  return VAR_0;
}
