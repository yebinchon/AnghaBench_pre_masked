
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_7__ {int * db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_string_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct propset_walk_baton {char const* propname; void* notify_baton; int notify_func; int force; int * db; int const* propval; } ;
typedef enum svn_prop_kind { ____Placeholder_svn_prop_kind } svn_prop_kind ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_8__ {scalar_t__ nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char const*,scalar_t__,char const*,int const*,int ,int ,void*,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_4 (char const*,int *) ;
 char const* FUNC_5 (char const*,int *) ;
 int * FUNC_6 (int ,int *,int ,char const*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int **,TYPE_2__ const*,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (int *,char const*,int *,int *) ;
 int FUNC_12 (int *,char const*,int ,TYPE_2__ const*,int ,struct propset_walk_baton*,scalar_t__,int ,void*,int *) ;
 int FUNC_13 (int *,char const*,int *) ;
 int FUNC_14 (int *,char const*,char const*,int const*,int *) ;

svn_error_t *
FUNC_15(svn_wc_context_t *VAR_13,
                 const char *VAR_14,
                 const char *VAR_15,
                 const svn_string_t *VAR_16,
                 svn_depth_t VAR_17,
                 svn_boolean_t VAR_18,
                 const apr_array_header_t *VAR_19,
                 svn_cancel_func_t VAR_20,
                 void *VAR_21,
                 svn_wc_notify_func2_t VAR_22,
                 void *VAR_23,
                 apr_pool_t *VAR_24)
{
  enum svn_prop_kind VAR_25 = FUNC_9(VAR_15);
  svn_wc__db_status_t VAR_26;
  svn_node_kind_t VAR_27;
  svn_wc__db_t *VAR_28 = VAR_13->db;


  if (VAR_25 == VAR_8)
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_2("Property '%s' is an entry property"), VAR_15);


  if (VAR_25 == VAR_9)
    {
      FUNC_1(VAR_17 == VAR_5);
      return FUNC_7(FUNC_14(VAR_13->db, VAR_14,
                                        VAR_15, VAR_16, VAR_24));
    }

  FUNC_0(FUNC_10(&VAR_26, &VAR_27, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               VAR_13->db, VAR_14,
                               VAR_24, VAR_24));

  if (VAR_26 != VAR_12
      && VAR_26 != VAR_10
      && VAR_26 != VAR_11)
    {
      return FUNC_6(VAR_2, ((void*)0),
                                  FUNC_2("Can't set properties on '%s':"
                                  " invalid status for updating properties."),
                                  FUNC_5(VAR_14,
                                                         VAR_24));
    }
  {
    const char *VAR_29;

    if (VAR_27 == VAR_6)
      VAR_29 = VAR_14;
    else
      VAR_29 = FUNC_4(VAR_14, VAR_24);


    FUNC_0(FUNC_13(VAR_28, VAR_29, VAR_24));
  }

  if (VAR_17 == VAR_5 || VAR_27 != VAR_6)
    {
      apr_hash_t *VAR_30 = ((void*)0);

      if (VAR_19 && VAR_19->nelts)
        FUNC_0(FUNC_8(&VAR_30, VAR_19,
                                           VAR_24));

      if (!FUNC_11(VAR_13->db, VAR_14,
                                             VAR_30, VAR_24))
        return VAR_3;

      FUNC_0(FUNC_3(VAR_13->db, VAR_14,
                         VAR_27 == VAR_6
                            ? VAR_6
                            : VAR_7,
                         VAR_15, VAR_16, VAR_18,
                         VAR_22, VAR_23, VAR_24));

    }
  else
    {
      struct propset_walk_baton VAR_31;

      VAR_31.propname = VAR_15;
      VAR_31.propval = VAR_16;
      VAR_31.db = VAR_13->db;
      VAR_31.force = VAR_18;
      VAR_31.notify_func = VAR_22;
      VAR_31.notify_baton = VAR_23;

      FUNC_0(FUNC_12(VAR_13->db, VAR_14,
                                             VAR_0, VAR_19,
                                             VAR_4, &VAR_31,
                                             VAR_17,
                                             VAR_20, VAR_21,
                                             VAR_24));
    }

  return VAR_3;
}
