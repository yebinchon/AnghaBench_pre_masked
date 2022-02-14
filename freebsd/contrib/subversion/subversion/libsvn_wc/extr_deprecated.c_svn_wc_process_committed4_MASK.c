
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef int svn_wc_committed_queue_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (unsigned char const*,int *) ;
 TYPE_1__* FUNC_2 (char const**,char const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int **,int *,int *,int *) ;
 TYPE_1__* FUNC_7 (int const**,int *,char const*,int const*,int *,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (int *,int *,int ,char const*,char const*,int *,int *,int *) ;
 TYPE_1__* FUNC_11 (int *,int *,char const*,int ,int const*,int ,int ,int const*,int *) ;

svn_error_t *
FUNC_12(const char *VAR_1,
                          svn_wc_adm_access_t *VAR_2,
                          svn_boolean_t VAR_3,
                          svn_revnum_t VAR_4,
                          const char *VAR_5,
                          const char *VAR_6,
                          const apr_array_header_t *VAR_7,
                          svn_boolean_t VAR_8,
                          svn_boolean_t VAR_9,
                          const unsigned char *VAR_10,
                          apr_pool_t *VAR_11)
{
  svn_wc__db_t *VAR_12 = FUNC_5(VAR_2);
  const char *VAR_13;
  const svn_checksum_t *VAR_14;
  const svn_checksum_t *VAR_15 = ((void*)0);
  svn_wc_context_t *VAR_16;
  svn_wc_committed_queue_t *VAR_17;

  FUNC_0(FUNC_2(&VAR_13, VAR_1, VAR_11));
  FUNC_0(FUNC_6(&VAR_16, ((void*)0), VAR_12, VAR_11));

  if (VAR_10)
    VAR_14 = FUNC_1(VAR_10, VAR_11);
  else
    VAR_14 = ((void*)0);

  if (VAR_14 != ((void*)0))
    {
      svn_error_t *VAR_18;
      VAR_18 = FUNC_7(&VAR_15, VAR_12,
                                         VAR_13, VAR_14,
                                         VAR_11, VAR_11);

      if (VAR_18 && VAR_18->apr_err == VAR_0)
        {
          FUNC_3(VAR_18);
          VAR_15 = ((void*)0);
        }
      else
        FUNC_0(VAR_18);
    }

  VAR_17 = FUNC_8(VAR_11);
  FUNC_0(FUNC_11(VAR_17, VAR_16, VAR_13, VAR_3,
                                  VAR_7, VAR_8,
                                  VAR_9,
                                  VAR_15 ,

                                  VAR_11));

  FUNC_0(FUNC_10(VAR_17, VAR_16,
                                          VAR_4, VAR_5, VAR_6,
                                          ((void*)0), ((void*)0) ,
                                          VAR_11));

  return FUNC_4(FUNC_9(VAR_16));
}
