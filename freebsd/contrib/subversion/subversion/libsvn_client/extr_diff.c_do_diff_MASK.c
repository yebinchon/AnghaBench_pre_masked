
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int diff_driver_info_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,char const*,char const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (char const**,scalar_t__*,int *,char const*,char const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int ,scalar_t__,scalar_t__,int const*,int *,int *,int *) ;
 int FUNC_3 (char const**,scalar_t__*,int *,char const*,TYPE_1__ const*,TYPE_1__ const*,char const*,scalar_t__,int ,int ,scalar_t__,int const*,int const*,int *,int *,int *) ;
 int FUNC_4 (char const**,scalar_t__*,int *,char const*,TYPE_1__ const*,char const*,TYPE_1__ const*,int ,scalar_t__,int const*,int const*,int *,int *,int *) ;
 int FUNC_5 (char const**,scalar_t__*,char const*,char const*,int ,int const*,int *,int *,int *) ;
 int FUNC_6 (char const**,char const*,int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char **VAR_4,
        svn_boolean_t *VAR_5,
        diff_driver_info_t *VAR_6,
        const char *VAR_7,
        const char *VAR_8,
        const svn_opt_revision_t *VAR_9,
        const svn_opt_revision_t *VAR_10,
        const svn_opt_revision_t *VAR_11,
        svn_boolean_t VAR_12,
        svn_depth_t VAR_13,
        svn_boolean_t VAR_14,
        const apr_array_header_t *VAR_15,
        svn_boolean_t VAR_16,
        const svn_diff_tree_processor_t *VAR_17,
        svn_client_ctx_t *VAR_18,
        apr_pool_t *VAR_19,
        apr_pool_t *VAR_20)
{
  svn_boolean_t VAR_21;
  svn_boolean_t VAR_22;


  FUNC_0(FUNC_1(&VAR_21, &VAR_22, VAR_7, VAR_8,
                      VAR_9, VAR_10, VAR_11));

  if (VAR_21)
    {
      if (VAR_22)
        {

          FUNC_0(FUNC_2(VAR_4, VAR_5,
                                   VAR_6,
                                   VAR_7, VAR_8,
                                   VAR_9, VAR_10,
                                   VAR_11, VAR_13, VAR_14,
                                   VAR_16,
                                   VAR_17, VAR_18,
                                   VAR_19, VAR_20));
        }
      else
        {
          FUNC_0(FUNC_3(VAR_4, VAR_5, VAR_6,
                                VAR_7, VAR_9,
                                VAR_12 ? VAR_9
                                                : VAR_11,
                                VAR_8, VAR_10->kind,
                                VAR_0, VAR_13,
                                VAR_14, VAR_15,
                                VAR_17, VAR_18,
                                VAR_19, VAR_20));
        }
    }
  else
    {
      if (VAR_22)
        {
          FUNC_0(FUNC_3(VAR_4, VAR_5, VAR_6,
                                VAR_8, VAR_10,
                                VAR_12 ? VAR_10
                                                : VAR_11,
                                VAR_7,
                                VAR_9->kind,
                                VAR_2, VAR_13,
                                VAR_14, VAR_15,
                                VAR_17, VAR_18,
                                VAR_19, VAR_20));
        }
      else
        {
          if (VAR_9->kind == VAR_3
              && VAR_10->kind == VAR_3)
            {
              const char *VAR_23;
              const char *VAR_24;

              FUNC_0(FUNC_6(&VAR_23, VAR_7,
                                              VAR_20));
              FUNC_0(FUNC_6(&VAR_24, VAR_8,
                                              VAR_20));



              FUNC_0(FUNC_5(VAR_4, VAR_5,
                                                       VAR_23, VAR_24,
                                                       VAR_13,
                                                       VAR_17,
                                                       VAR_18,
                                                       VAR_19, VAR_20));
            }
          else
            {
              FUNC_0(FUNC_4(VAR_4, VAR_5, VAR_6,
                                 VAR_7, VAR_9,
                                 VAR_8, VAR_10,
                                 VAR_13, VAR_14, VAR_15,
                                 VAR_17, VAR_18,
                                 VAR_19, VAR_20));
            }
        }
    }

  return VAR_1;
}
