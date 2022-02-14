
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*,int ,int ,int *,int *,int *) ;
 int FUNC_3 (char const*,int *) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (char const*,scalar_t__*,int *) ;
 int FUNC_6 (char const*,int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

svn_error_t *
FUNC_8(svn_wc_context_t *VAR_12,
               const char *VAR_13,
               svn_boolean_t VAR_14,
               apr_pool_t *VAR_15)
{

  svn_wc__db_status_t VAR_16;
  svn_node_kind_t VAR_17;
  svn_node_kind_t VAR_18;
  const svn_checksum_t *VAR_19;

  FUNC_0(FUNC_5(VAR_13, &VAR_18, VAR_15));

  if (VAR_18 != VAR_7)
    return FUNC_4(VAR_2, ((void*)0),
                             FUNC_1("The existing node '%s' can not be restored."),
                             FUNC_3(VAR_13,
                                                    VAR_15));

  FUNC_0(FUNC_7(&VAR_16, &VAR_17, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), &VAR_19, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               VAR_12->db, VAR_13,
                               VAR_15, VAR_15));

  if (VAR_16 != VAR_11
      && !((VAR_16 == VAR_9
            || VAR_16 == VAR_10)
           && (VAR_17 == VAR_5
               || (VAR_17 == VAR_6 && VAR_19 != ((void*)0))
                                                           )))
    {
      return FUNC_4(VAR_3, ((void*)0),
                               FUNC_1("The node '%s' can not be restored."),
                               FUNC_3(VAR_13,
                                                      VAR_15));
    }

  if (VAR_17 == VAR_6 || VAR_17 == VAR_8)
    FUNC_0(FUNC_2(VAR_12->db, VAR_13, VAR_14,
                         VAR_1 ,
                         ((void*)0), ((void*)0) ,
                         VAR_15));
  else
    FUNC_0(FUNC_6(VAR_13, VAR_0, VAR_15));

  return VAR_4;
}
