
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_wc__db_status_t ;
struct TYPE_14__ {char* token; } ;
typedef TYPE_2__ svn_wc__db_lock_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (scalar_t__,int *,int ,int ) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int VAR_3 ;
 TYPE_3__* FUNC_7 (scalar_t__*,int *,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,TYPE_2__**,int *,int *,int *,int ,char const*,int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

svn_error_t *
FUNC_8(svn_node_kind_t *VAR_6,
                      svn_revnum_t *VAR_7,
                      const char **VAR_8,
                      const char **VAR_9,
                      const char **VAR_10,
                      const char **VAR_11,
                      svn_wc_context_t *VAR_12,
                      const char *VAR_13,
                      svn_boolean_t VAR_14,
                      apr_pool_t *VAR_15,
                      apr_pool_t *VAR_16)
{
  svn_error_t *VAR_17;
  svn_wc__db_status_t VAR_18;
  svn_wc__db_lock_t *VAR_19;
  svn_node_kind_t VAR_20;

  VAR_17 = FUNC_7(&VAR_18, &VAR_20, VAR_7, VAR_8,
                                 VAR_9, VAR_10, ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 VAR_11 ? &VAR_19 : ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0),
                                 VAR_12->db, VAR_13,
                                 VAR_15, VAR_16);

  if (VAR_17 && VAR_17->apr_err != VAR_0)
    return FUNC_6(VAR_17);
  else if (VAR_17
           || (VAR_18 != VAR_5
               && VAR_18 != VAR_4))
    {
      if (!VAR_14)
        {
          if (VAR_17)
            return FUNC_6(VAR_17);
          else
            return FUNC_5(VAR_0, ((void*)0),
                                     FUNC_2("The node '%s' was not found."),
                                     FUNC_3(VAR_13,
                                                            VAR_16));
        }
      FUNC_4(VAR_17);

      if (VAR_6)
        *VAR_6 = VAR_3;
      if (VAR_7)
        *VAR_7 = VAR_1;
      if (VAR_8)
        *VAR_8 = ((void*)0);
      if (VAR_9)
        *VAR_9 = ((void*)0);
      if (VAR_10)
        *VAR_10 = ((void*)0);
      if (VAR_11)
        *VAR_11 = ((void*)0);
      return VAR_2;
    }

  if (VAR_6)
    *VAR_6 = VAR_20;
  if (VAR_11)
    *VAR_11 = VAR_19 ? VAR_19->token : ((void*)0);

  FUNC_0(!VAR_7 || FUNC_1(*VAR_7));
  FUNC_0(!VAR_8 || *VAR_8);
  FUNC_0(!VAR_9 || *VAR_9);
  FUNC_0(!VAR_10 || *VAR_10);
  return VAR_2;
}
