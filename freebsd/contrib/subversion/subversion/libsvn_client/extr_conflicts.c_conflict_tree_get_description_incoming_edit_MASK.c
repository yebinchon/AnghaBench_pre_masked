
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_7__ {int * tree_conflict_incoming_details; } ;
typedef TYPE_1__ svn_client_conflict_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,char const*,scalar_t__,...) ;
 char* FUNC_3 (int *,char const*) ;
 int FUNC_4 (char const**,TYPE_1__*,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 char* FUNC_6 (char const*,scalar_t__,scalar_t__,int *) ;
 char* FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int FUNC_8 (char const**,scalar_t__*,scalar_t__*,TYPE_1__*,int *,int *) ;
 int FUNC_9 (char const**,scalar_t__*,scalar_t__*,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int * FUNC_11 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_12(
  const char **VAR_7,
  svn_client_conflict_t *VAR_8,
  svn_client_ctx_t *VAR_9,
  apr_pool_t *VAR_10,
  apr_pool_t *VAR_11)
{
  const char *VAR_12;
  svn_wc_operation_t VAR_13;
  const char *VAR_14;
  svn_revnum_t VAR_15;
  svn_node_kind_t VAR_16;
  const char *VAR_17;
  svn_revnum_t VAR_18;
  svn_node_kind_t VAR_19;
  apr_array_header_t *VAR_20;

  if (VAR_8->tree_conflict_incoming_details == ((void*)0))
    return FUNC_11(FUNC_4(
                             VAR_7, VAR_8, VAR_9,
                             VAR_10, VAR_11));

  FUNC_0(FUNC_9(
            &VAR_14, &VAR_15, &VAR_16, VAR_8,
            VAR_11, VAR_11));
  FUNC_0(FUNC_8(
            &VAR_17, &VAR_18, &VAR_19, VAR_8,
            VAR_11, VAR_11));

  VAR_13 = FUNC_10(VAR_8);

  VAR_20 = VAR_8->tree_conflict_incoming_details;

  if (VAR_13 == VAR_6)
    VAR_12 = FUNC_7(VAR_15, VAR_18,
                                                VAR_16, VAR_19,
                                                VAR_11);
  else if (VAR_13 == VAR_5)
    VAR_12 = FUNC_6(VAR_17, VAR_18,
                                                VAR_19, VAR_11);
  else if (VAR_13 == VAR_4)
    {

      if (VAR_15 < VAR_18)
        {
          if (VAR_15 + 1 == VAR_18)
            {
              if (VAR_19 == VAR_1)
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes destined for a directory "
                                        "arrived during merge of\n"
                                        "'^/%s:%ld'."),
                                        VAR_17, VAR_18);
              else if (VAR_19 == VAR_2 ||
                       VAR_19 == VAR_3)
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes destined for a file "
                                        "arrived during merge of\n"
                                        "'^/%s:%ld'."),
                                      VAR_17, VAR_18);
              else
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes arrived during merge of\n"
                                        "'^/%s:%ld'."),
                                      VAR_17, VAR_18);

              *VAR_7 = FUNC_3(VAR_10, VAR_12);

              return VAR_0;
            }
          else
            {
              if (VAR_19 == VAR_1)
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes destined for a directory "
                                        "arrived via the following revisions "
                                        "during merge of\n'^/%s:%ld-%ld'"),
                                      VAR_17, VAR_15 + 1, VAR_18);
              else if (VAR_19 == VAR_2 ||
                       VAR_19 == VAR_3)
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes destined for a file "
                                        "arrived via the following revisions "
                                        "during merge of\n'^/%s:%ld-%ld'"),
                                      VAR_17, VAR_15 + 1, VAR_18);
              else
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes from the following revisions "
                                        "arrived during merge of\n"
                                        "'^/%s:%ld-%ld'"),
                                      VAR_17, VAR_15 + 1, VAR_18);
            }
        }
      else
        {
          if (VAR_18 + 1 == VAR_15)
            {
              if (VAR_19 == VAR_1)
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes destined for a directory "
                                        "arrived during reverse-merge of\n"
                                        "'^/%s:%ld'."),
                                      VAR_17, VAR_15);
              else if (VAR_19 == VAR_2 ||
                       VAR_19 == VAR_3)
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes destined for a file "
                                        "arrived during reverse-merge of\n"
                                        "'^/%s:%ld'."),
                                      VAR_17, VAR_15);
              else
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes arrived during reverse-merge "
                                        "of\n'^/%s:%ld'."),
                                      VAR_17, VAR_15);

              *VAR_7 = FUNC_3(VAR_10, VAR_12);

              return VAR_0;
            }
          else
            {
              if (VAR_19 == VAR_1)
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes destined for a directory "
                                        "arrived via the following revisions "
                                        "during reverse-merge of\n"
                                        "'^/%s:%ld-%ld'"),
                                      VAR_17, VAR_18 + 1, VAR_15);
              else if (VAR_19 == VAR_2 ||
                       VAR_19 == VAR_3)
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes destined for a file "
                                        "arrived via the following revisions "
                                        "during reverse-merge of\n"
                                        "'^/%s:%ld-%ld'"),
                                      VAR_17, VAR_18 + 1, VAR_15);

              else
                VAR_12 = FUNC_2(VAR_11,
                                      FUNC_1("Changes from the following revisions "
                                        "arrived during reverse-merge of\n"
                                        "'^/%s:%ld-%ld'"),
                                      VAR_17, VAR_18 + 1, VAR_15);
            }
        }
    }

  VAR_12 = FUNC_2(VAR_11, "%s:\n%s", VAR_12,
                        FUNC_5(
                          VAR_20, VAR_11));
  *VAR_7 = FUNC_3(VAR_10, VAR_12);

  return VAR_0;
}
