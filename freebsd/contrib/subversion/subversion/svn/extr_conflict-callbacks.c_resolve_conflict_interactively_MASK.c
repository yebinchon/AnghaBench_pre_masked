
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int svn_cmdline_prompt_baton_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_conflict_t ;
typedef int svn_cl__conflict_stats_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_3__ {scalar_t__ nelts; } ;
typedef TYPE_1__ apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__*,int const**,char const*,int *,char const*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *,char const*,int *,char const*,int *,int *,int *,int *) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *,char const*,int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (scalar_t__*,TYPE_1__**,scalar_t__*,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_boolean_t *VAR_5,
                               svn_boolean_t *VAR_6,
                               svn_boolean_t *VAR_7,
                               svn_boolean_t *VAR_8,
                               svn_boolean_t *VAR_9,
                               svn_boolean_t *VAR_10,
                               svn_client_conflict_t *VAR_11,
                               const char *VAR_12,
                               apr_hash_t *VAR_13,
                               const char *VAR_14,
                               svn_cmdline_prompt_baton_t *VAR_15,
                               svn_cl__conflict_stats_t *VAR_16,
                               svn_client_ctx_t *VAR_17,
                               apr_pool_t *VAR_18,
                               apr_pool_t *VAR_19)
{
  svn_boolean_t VAR_20;
  apr_array_header_t *VAR_21;
  svn_boolean_t VAR_22;
  const svn_string_t *VAR_23;

  FUNC_0(FUNC_5(&VAR_20,
                                             &VAR_21,
                                             &VAR_22,
                                             VAR_11,
                                             VAR_19,
                                             VAR_19));


  if (! *VAR_9)
    {
      FUNC_0(FUNC_4(VAR_16, VAR_19));
      *VAR_9 = VAR_2;
    }

  *VAR_5 = VAR_0;
  if (VAR_20
       && (FUNC_6(VAR_11) ==
           VAR_3)
       && (FUNC_7(VAR_11) ==
           VAR_4))
    FUNC_0(FUNC_2(VAR_5, VAR_6, VAR_7, VAR_10,
                                 VAR_11, VAR_14, VAR_15, VAR_12, VAR_13,
                                 VAR_16, VAR_17, VAR_19));
  if (VAR_21->nelts > 0)
    FUNC_0(FUNC_1(VAR_5, VAR_6, VAR_7, &VAR_23,
                                  VAR_14, VAR_15, VAR_12, VAR_13, VAR_11,
                                  VAR_16, VAR_17, VAR_18, VAR_19));
  if (VAR_22)
    FUNC_0(FUNC_3(VAR_5, VAR_6, VAR_7, VAR_10,
                                 VAR_11, VAR_14, VAR_15, VAR_16, VAR_17,
                                 VAR_19));

  return VAR_1;
}
