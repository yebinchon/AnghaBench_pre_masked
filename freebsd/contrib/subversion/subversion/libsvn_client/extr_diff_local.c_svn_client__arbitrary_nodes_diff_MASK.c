
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int (* dir_closed ) (char*,int *,int *,void*,TYPE_1__ const*,int *) ;int (* dir_opened ) (void**,scalar_t__*,scalar_t__*,char*,int *,int *,int *,int *,TYPE_1__ const*,int *,int *) ;} ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_diff_source_t ;
typedef int svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*,char const*,char const*,char const*,scalar_t__,scalar_t__,scalar_t__,int ,int *,TYPE_1__ const*,int *,int *) ;
 int FUNC_4 (char const*,char const*,char const*,char const*,scalar_t__,scalar_t__,int *,TYPE_1__ const*,int *,int *) ;
 int FUNC_5 (void**,scalar_t__*,scalar_t__*,char*,int *,int *,int *,int *,TYPE_1__ const*,int *,int *) ;
 int FUNC_6 (char*,int *,int *,void*,TYPE_1__ const*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_7 (int ,int *) ;
 char* FUNC_8 (char const*,int *) ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (char const**,char const**,char const*,int *) ;
 int * FUNC_11 (int ,int *,int ,int ) ;
 int FUNC_12 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

svn_error_t *
FUNC_13(const char **VAR_10,
                                 svn_boolean_t *VAR_11,
                                 const char *VAR_12,
                                 const char *VAR_13,
                                 svn_depth_t VAR_14,
                                 const svn_diff_tree_processor_t *VAR_15,
                                 svn_client_ctx_t *VAR_16,
                                 apr_pool_t *VAR_17,
                                 apr_pool_t *VAR_18)
{
  svn_node_kind_t VAR_19;
  svn_node_kind_t VAR_20;
  const char *VAR_21;
  const char *VAR_22;
  svn_boolean_t VAR_23 = VAR_4;

  if (VAR_14 == VAR_6)
    VAR_14 = VAR_5;

  FUNC_0(FUNC_12(VAR_12, &VAR_19, VAR_18));
  FUNC_0(FUNC_12(VAR_13, &VAR_20, VAR_18));

  if (VAR_19 == VAR_7 && VAR_20 == VAR_7)
    {
      VAR_21 = VAR_12;
      VAR_22 = VAR_13;

      if (VAR_10)
        *VAR_10 = "";
      if (VAR_11)
        *VAR_11 = VAR_4;
    }
  else
    {
      FUNC_10(&VAR_21, VAR_10, VAR_12,
                       VAR_18);
      VAR_22 = FUNC_8(VAR_13, VAR_18);

      if (VAR_10)
        *VAR_10 = FUNC_2(VAR_17, *VAR_10);
      if (VAR_11)
        *VAR_11 = VAR_0;
    }

  if (VAR_19 == VAR_7 && VAR_20 == VAR_7)
    {
      FUNC_0(FUNC_3(VAR_12, VAR_13,
                          VAR_21, VAR_22,
                          VAR_0, VAR_0, VAR_23,
                          VAR_14, ((void*)0) ,
                          VAR_15, VAR_16, VAR_18));
    }
  else if (VAR_19 == VAR_8 && VAR_20 == VAR_8)
    {
      FUNC_0(FUNC_4(VAR_12, VAR_13,
                           VAR_21, VAR_22,
                           VAR_0, VAR_0,
                           ((void*)0) ,
                           VAR_15, VAR_16, VAR_18));
    }
  else if (VAR_19 == VAR_8 || VAR_19 == VAR_7
           || VAR_20 == VAR_8 || VAR_20 == VAR_7)
    {
      void *VAR_24;
      svn_boolean_t VAR_25 = VAR_0;
      svn_boolean_t VAR_26 = VAR_0;
      svn_diff_source_t *VAR_27;
      svn_diff_source_t *VAR_28;

      VAR_27 = FUNC_7(VAR_2, VAR_18);
      VAR_28 = FUNC_7(VAR_2, VAR_18);




      FUNC_0(VAR_15->dir_opened(&VAR_24, &VAR_25, &VAR_26, "",
                                         VAR_27,
                                         VAR_28,
                                         ((void*)0) ,
                                         ((void*)0),
                                         VAR_15,
                                         VAR_18, VAR_18));

      if (VAR_25)
        return VAR_3;
      else if (!VAR_26)
        {
          if (VAR_23)
            {
              if (VAR_19 == VAR_8)
                FUNC_0(FUNC_4(VAR_12, VAR_13,
                                     VAR_21, VAR_22,
                                     VAR_4, VAR_0, ((void*)0) ,
                                     VAR_15, VAR_16, VAR_18));
              else if (VAR_19 == VAR_7)
                FUNC_0(FUNC_3(VAR_12, VAR_13,
                                    VAR_21, VAR_22,
                                    VAR_4, VAR_0, VAR_23,
                                    VAR_14, ((void*)0) ,
                                    VAR_15, VAR_16, VAR_18));
            }

          if (VAR_20 == VAR_8)
            FUNC_0(FUNC_4(VAR_12, VAR_13,
                                 VAR_21, VAR_22,
                                 VAR_0, VAR_4, ((void*)0) ,
                                 VAR_15, VAR_16, VAR_18));
          else if (VAR_20 == VAR_7)
            FUNC_0(FUNC_3(VAR_12, VAR_13,
                                VAR_21, VAR_22,
                                VAR_0, VAR_4, VAR_23,
                                VAR_14, ((void*)0) ,
                                VAR_15, VAR_16, VAR_18));

          if (! VAR_23)
            {
              if (VAR_19 == VAR_8)
                FUNC_0(FUNC_4(VAR_12, VAR_13,
                                     VAR_21, VAR_22,
                                     VAR_4, VAR_0, ((void*)0) ,
                                     VAR_15, VAR_16, VAR_18));
              else if (VAR_19 == VAR_7)
                FUNC_0(FUNC_3(VAR_12, VAR_13,
                                    VAR_21, VAR_22,
                                    VAR_4, VAR_0, VAR_23,
                                    VAR_14, ((void*)0) ,
                                    VAR_15, VAR_16, VAR_18));
            }
        }

      FUNC_0(VAR_15->dir_closed("",
                                         VAR_27,
                                         VAR_28,
                                         VAR_24,
                                         VAR_15,
                                         VAR_18));
    }
  else
    return FUNC_11(VAR_1, ((void*)0),
                             FUNC_1("'%s' is not a file or directory"),
                             FUNC_9(
                                    (VAR_19 == VAR_9)
                                        ? VAR_12
                                        : VAR_13,
                                    VAR_18));

  return VAR_3;
}
