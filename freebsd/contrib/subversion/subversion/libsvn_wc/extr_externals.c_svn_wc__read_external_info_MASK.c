
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;


 int VAR_3 ;

 int VAR_4 ;
 char* FUNC_2 (char const*,char const*,int *) ;
 TYPE_2__* FUNC_3 (scalar_t__*,int*,char const**,char const**,int *,char const**,int *,int *,int ,char const*,char const*,int *,int *) ;
 scalar_t__ VAR_5 ;

svn_error_t *
FUNC_4(svn_node_kind_t *VAR_6,
                           const char **VAR_7,
                           const char **VAR_8,
                           svn_revnum_t *VAR_9,
                           svn_revnum_t *VAR_10,
                           svn_wc_context_t *VAR_11,
                           const char *VAR_12,
                           const char *VAR_13,
                           svn_boolean_t VAR_14,
                           apr_pool_t *VAR_15,
                           apr_pool_t *VAR_16)
{
  const char *VAR_17;
  svn_wc__db_status_t VAR_18;
  svn_node_kind_t VAR_19;
  svn_error_t *VAR_20;

  VAR_20 = FUNC_3(&VAR_18, &VAR_19, VAR_7,
                                 VAR_8 ? &VAR_17 : ((void*)0), ((void*)0),
                                 VAR_8, VAR_9,
                                 VAR_10,
                                 VAR_11->db, VAR_13, VAR_12,
                                 VAR_15, VAR_16);

  if (VAR_20)
    {
      if (VAR_20->apr_err != VAR_0 || !VAR_14)
        return FUNC_1(VAR_20);

      FUNC_0(VAR_20);

      if (VAR_6)
        *VAR_6 = VAR_3;

      if (VAR_7)
        *VAR_7 = ((void*)0);

      if (VAR_8)
        *VAR_8 = ((void*)0);

      if (VAR_9)
        *VAR_9 = VAR_1;

      if (VAR_10)
        *VAR_10 = VAR_1;

      return VAR_2;
    }

  if (VAR_6)
    {
      if (VAR_18 != VAR_5)
        *VAR_6 = VAR_4;
      else
        switch(VAR_19)
          {
            case 129:
            case 128:
              *VAR_6 = 129;
              break;
            case 130:
              *VAR_6 = 130;
              break;
            default:
              *VAR_6 = VAR_3;
          }
    }

  if (VAR_8 && *VAR_8)
    *VAR_8 = FUNC_2(VAR_17, *VAR_8,
                                                VAR_15);

  return VAR_2;
}
